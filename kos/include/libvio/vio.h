/* Copyright (c) 2019-2020 Griefer@Work                                       *
 *                                                                            *
 * This software is provided 'as-is', without any express or implied          *
 * warranty. In no event will the authors be held liable for any damages      *
 * arising from the use of this software.                                     *
 *                                                                            *
 * Permission is granted to anyone to use this software for any purpose,      *
 * including commercial applications, and to alter it and redistribute it     *
 * freely, subject to the following restrictions:                             *
 *                                                                            *
 * 1. The origin of this software must not be misrepresented; you must not    *
 *    claim that you wrote the original software. If you use this software    *
 *    in a product, an acknowledgement (see the following) in the product     *
 *    documentation is required:                                              *
 *    Portions Copyright (c) 2019-2020 Griefer@Work                           *
 * 2. Altered source versions must be plainly marked as such, and must not be *
 *    misrepresented as being the original software.                          *
 * 3. This notice may not be removed or altered from any source distribution. *
 */
#ifndef _LIBVIO_VIO_H
#define _LIBVIO_VIO_H 1

#include "api.h"

#include <bits/types.h>

#ifdef LIBVIO_CONFIG_HAVE_INT128_CMPXCH
#include <hybrid/int128.h>
#endif /* LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
#if defined(__KERNEL__) && !defined(__pos_t_defined)
#include <hybrid/__altint.h>
#endif /* __KERNEL__ && !__pos_t_defined */

#ifdef __CC__
__DECL_BEGIN

#ifdef __KERNEL__
struct icpustate;
typedef struct icpustate vio_cpustate_t;
#else /* __KERNEL__ */
struct ucpustate;
typedef struct ucpustate vio_cpustate_t;
#endif /* !__KERNEL__ */
#ifdef __KERNEL__
struct vm_datablock;
struct vm_datapart;
#endif /* __KERNEL__ */
struct vio_operators;

#ifdef __KERNEL__
#ifndef __pos_t_defined
#define __pos_t_defined 1
__HYBRID_ALTINT_TYPEDEF(__pos64_t, pos_t, false); /* File/device position */
#endif /* !__pos_t_defined */
typedef pos_t vio_addr_t;
#else /* __KERNEL__ */
typedef __pos64_t vio_addr_t;
#endif /* !__KERNEL__ */



/* Argument structure passed to VIO callbacks. */
struct vio_args {
	struct vio_operators const *va_ops;          /* [1..1][== va_block->db_type->dt_vio] */
	void                       *va_acmap_page;   /* Page-aligned virtual base address of the accessed mapping (== mmap:return). */
	vio_addr_t                  va_acmap_offset; /* [== vm_datapart_startbyte(va_part)]
	                                              * VIO file offset at `va_acmap_page' (== mmap:offset). */
	vio_cpustate_t             *va_state;        /* [0..1][in|out] The CPU state at the time of the access being made (or `NULL' when accessed through other means). */
#ifdef __KERNEL__
	struct vm_datablock        *va_block;        /* [1..1] The data block that is being accessed. */
	struct vm_datapart         *va_part;         /* [0..1] The part that is being accessed. */
#else /* __KERNEL__ */
	void                       *va_cookie;       /* [?..?] The cookie registered alongside the VIO mapping. */
#endif /* !__KERNEL__ */
};

/* Return the effective fault address for a given VIO address. */
#ifdef __INTELLISENSE__
void *vio_args_faultaddr(struct vio_args const *self, vio_addr_t vio_addr);
vio_addr_t vio_args_vioaddr(struct vio_args const *self, void *virtaddr);
#else /* __INTELLISENSE__ */
#define vio_args_faultaddr(self, vio_addr) \
	(void *)((__byte_t *)(self)->va_acmap_page + (__size_t)((vio_addr) - (self)->va_acmap_offset))
#define vio_args_vioaddr(self, virtaddr) \
	((self)->va_acmap_offset + (size_t)((__byte_t *)(virtaddr) - (__byte_t *)(self)->va_acmap_page))
#endif /* !__INTELLISENSE__ */


#ifdef LIBVIO_CONFIG_HAVE_QWORD
#define VIO_CALLBACK_INIT(b, w, l, q) { b, w, l, q }
#else /* LIBVIO_CONFIG_HAVE_QWORD */
#define VIO_CALLBACK_INIT(b, w, l, q) { b, w, l }
#endif /* !LIBVIO_CONFIG_HAVE_QWORD */

struct vio_operators {
	/* VIO callbacks (`addr' is always relative to the data-block)
	 * NOTE: For unrecognized addresses, VIO should throw
	 *      `E_SEGFAULT_NOTREADABLE' / `E_SEGFAULT_NOTWRITABLE' exceptions.
	 * NOTE: Call operators are allowed to assume that the given `addr' has ~natural~ alignment:
	 *       f_byte:   No assumptions may be made
	 *       f_word:   Can assume that `addr' is a multiple of `2' (aka. `(addr & 1) == 0')
	 *       f_dword:  Can assume that `addr' is a multiple of `4' (aka. `(addr & 3) == 0')
	 *       f_qword:  Can assume that `addr' is a multiple of `8' (aka. `(addr & 7) == 0')
	 *       f_int128: Can assume that `addr' is a multiple of `16' (aka. `(addr & 15) == 0')
	 */
	struct {
		/* [0..1] Read memory */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_read;

	struct {
		/* [0..1] Write memory */
		__ATTR_NONNULL((1)) void (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t value);
		__ATTR_NONNULL((1)) void (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t value);
		__ATTR_NONNULL((1)) void (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t value);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) void (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t value);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_write;

	struct {
		/* [0..1] Return the old value (regardless of the compare-exchange having been successful) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t oldvalue, __uint8_t newvalue, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t oldvalue, __uint16_t newvalue, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t oldvalue, __uint32_t newvalue, __BOOL atomic);
#if defined(LIBVIO_CONFIG_HAVE_QWORD) || defined(LIBVIO_CONFIG_HAVE_QWORD_CMPXCH)
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t oldvalue, __uint64_t newvalue, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD || LIBVIO_CONFIG_HAVE_QWORD_CMPXCH */
#ifdef LIBVIO_CONFIG_HAVE_INT128_CMPXCH
		__ATTR_NONNULL((1)) __hybrid_uint128_t (LIBVIO_CC *f_int128)(struct vio_args *__restrict args, vio_addr_t addr, __hybrid_uint128_t oldvalue, __hybrid_uint128_t newvalue, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
	} vo_cmpxch;

	struct {
		/* [0..1] Return the old value */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t newvalue, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t newvalue, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t newvalue, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t newvalue, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_xch;

	struct {
		/* [0..1] Return the old value (prior to be `value' being added) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t value, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t value, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t value, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t value, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_add;

	struct {
		/* [0..1] Return the old value (prior to be `value' being subtracted) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t value, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t value, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t value, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t value, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_sub;

	struct {
		/* [0..1] Return the old value (prior to be `mask' being anded) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t mask, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t mask, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_and;

	struct {
		/* [0..1] Return the old value (prior to be `mask' being or'd) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t mask, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t mask, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_or;

	struct {
		/* [0..1] Return the old value (prior to be `mask' being xor'd) */
		__ATTR_NONNULL((1)) __uint8_t  (LIBVIO_CC *f_byte)(struct vio_args *__restrict args, vio_addr_t addr, __uint8_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint16_t (LIBVIO_CC *f_word)(struct vio_args *__restrict args, vio_addr_t addr, __uint16_t mask, __BOOL atomic);
		__ATTR_NONNULL((1)) __uint32_t (LIBVIO_CC *f_dword)(struct vio_args *__restrict args, vio_addr_t addr, __uint32_t mask, __BOOL atomic);
#ifdef LIBVIO_CONFIG_HAVE_QWORD
		__ATTR_NONNULL((1)) __uint64_t (LIBVIO_CC *f_qword)(struct vio_args *__restrict args, vio_addr_t addr, __uint64_t mask, __BOOL atomic);
#endif /* LIBVIO_CONFIG_HAVE_QWORD */
	} vo_xor;

	/* [0..1]
	 * Invoked as the result of the user attempting to call into VIO memory.
	 * When this operator is called, `regs' will have already been updated to
	 * point to the instruction following the call instruction that was used
	 * to execute VIO memory.
	 * USER:
	 * >> void *vio_base;
	 * >> vio_base = mmap(NULL, 0x1000, PROT_READ | PROT_EXEC, MAP_PRIVATE, vio_fd, 0);
	 * >>
	 * >> kernel_function = (int(*)(int, int))((byte_t *)vio_base + 1234);
	 * >>
	 * >> // This function will invoke `vo_call(..., REGS, 1234)'
	 * >> // REGS: (user-space register state; assuming x86)
	 * >> //    PC: ADDROF(printf)
	 * >> //    SP: { int: 10, int: 20 }
	 * >> // `vo_call' can then assign the EAX register in `args' (again: assuming x86),
	 * >> // which is the value that's going to be returned to user-space and be assigned
	 * >> // to `x', before being printed.
	 * >> int x = (*kernel_function)(10, 20);
	 * >>
	 * >> printf("x = %d\n", x); */
	void (LIBVIO_CC *vo_call)(struct vio_args *__restrict args, vio_addr_t addr);
};

/* Initializers for VIO callbacks */
#ifdef LIBVIO_CONFIG_HAVE_QWORD
#define VIO_CALLBACK_INIT_READ(b, w, l, q)  { b, w, l, q }
#define VIO_CALLBACK_INIT_WRITE(b, w, l, q) { b, w, l, q }
#define VIO_CALLBACK_INIT_XCH(b, w, l, q)   { b, w, l, q }
#define VIO_CALLBACK_INIT_ADD(b, w, l, q)   { b, w, l, q }
#define VIO_CALLBACK_INIT_SUB(b, w, l, q)   { b, w, l, q }
#define VIO_CALLBACK_INIT_AND(b, w, l, q)   { b, w, l, q }
#define VIO_CALLBACK_INIT_OR(b, w, l, q)    { b, w, l, q }
#define VIO_CALLBACK_INIT_XOR(b, w, l, q)   { b, w, l, q }
#else /* LIBVIO_CONFIG_HAVE_QWORD */
#define VIO_CALLBACK_INIT_READ(b, w, l, q)  { b, w, l }
#define VIO_CALLBACK_INIT_WRITE(b, w, l, q) { b, w, l }
#define VIO_CALLBACK_INIT_XCH(b, w, l, q)   { b, w, l }
#define VIO_CALLBACK_INIT_ADD(b, w, l, q)   { b, w, l }
#define VIO_CALLBACK_INIT_SUB(b, w, l, q)   { b, w, l }
#define VIO_CALLBACK_INIT_AND(b, w, l, q)   { b, w, l }
#define VIO_CALLBACK_INIT_OR(b, w, l, q)    { b, w, l }
#define VIO_CALLBACK_INIT_XOR(b, w, l, q)   { b, w, l }
#endif /* !LIBVIO_CONFIG_HAVE_QWORD */

#if defined(LIBVIO_CONFIG_HAVE_QWORD) || defined(LIBVIO_CONFIG_HAVE_QWORD_CMPXCH)
#ifdef LIBVIO_CONFIG_HAVE_INT128_CMPXCH
#define VIO_CALLBACK_INIT_CMPXCH(b, w, l, q, i128) { b, w, l, q, i128 }
#else /* LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
#define VIO_CALLBACK_INIT_CMPXCH(b, w, l, q, i128) { b, w, l, q }
#endif /* !LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
#else /* LIBVIO_CONFIG_HAVE_QWORD || LIBVIO_CONFIG_HAVE_QWORD_CMPXCH */
#ifdef LIBVIO_CONFIG_HAVE_INT128_CMPXCH
#define VIO_CALLBACK_INIT_CMPXCH(b, w, l, q, i128) { b, w, l, i128 }
#else /* LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
#define VIO_CALLBACK_INIT_CMPXCH(b, w, l, q, i128) { b, w, l }
#endif /* !LIBVIO_CONFIG_HAVE_INT128_CMPXCH */
#endif /* !LIBVIO_CONFIG_HAVE_QWORD && !LIBVIO_CONFIG_HAVE_QWORD_CMPXCH */

/* Initialize a set of VIO operators.
 * @param: *_callbacks: Initialize using `VIO_CALLBACK_INIT_*()' */
#define VIO_OPERATORS_INIT(read_callbacks, write_callbacks)                                                 \
	{                                                                                                       \
		/* .vo_read   = */ read_callbacks,                                                                  \
		/* .vo_write  = */ write_callbacks,                                                                 \
		/* .vo_cmpxch = */ VIO_CALLBACK_INIT_CMPXCH(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR), \
		/* .vo_xch    = */ VIO_CALLBACK_INIT_XCH(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),               \
		/* .vo_add    = */ VIO_CALLBACK_INIT_ADD(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),               \
		/* .vo_sub    = */ VIO_CALLBACK_INIT_SUB(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),               \
		/* .vo_and    = */ VIO_CALLBACK_INIT_AND(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),               \
		/* .vo_or     = */ VIO_CALLBACK_INIT_OR(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),                \
		/* .vo_xor    = */ VIO_CALLBACK_INIT_XOR(__NULLPTR, __NULLPTR, __NULLPTR, __NULLPTR),               \
		/* .vo_call   = */ __NULLPTR                                                                        \
	}
#define VIO_OPERATORS_INIT_EX(read_callbacks,   \
                              write_callbacks,  \
                              cmpxch_callbacks, \
                              xch_callbacks,    \
                              add_callbacks,    \
                              sub_callbacks,    \
                              and_callbacks,    \
                              or_callbacks,     \
                              xor_callbacks,    \
                              call_callback)    \
	{                                        \
		/* .vo_read   = */ read_callbacks,   \
		/* .vo_write  = */ write_callbacks,  \
		/* .vo_cmpxch = */ cmpxch_callbacks, \
		/* .vo_xch    = */ xch_callbacks,    \
		/* .vo_add    = */ add_callbacks,    \
		/* .vo_sub    = */ sub_callbacks,    \
		/* .vo_and    = */ and_callbacks,    \
		/* .vo_or     = */ or_callbacks,     \
		/* .vo_xor    = */ xor_callbacks,    \
		/* .vo_call   = */ call_callback     \
	}



/* High-level user-space VIO library functions. */
#ifndef __KERNEL__

/* vio_create(3):
 * >> fd_t vio_create(struct vio_operators *ops, void *cookie, oflag_t flags);
 * @param: flags:  Set of `0 | O_CLOEXEC | O_CLOFORK'
 * @param: cookie: A cookie pointer that is available as `args->va_cookie'
 * Desc:
 *     Create an mmap(2)able VIO object where memory accesses
 *     made to the object are serviced by dispatching them via
 *     the given `ops' table.
 *     The returned file descriptor mustn't be deleted by `close(2)',
 *     but rather through use of `vio_destroy(3)'.
 *     Note that callbacks in `ops' may be invoked in the context
 *     of a different thread than the one that performed the memory
 *     access. Also note that the returned `fd_t' can be shared with
 *     other processes, but still function as expected. (when shared
 *     with a different process, that process should once again make
 *     use of `close(2)' for cleanup, rather than `vio_destroy(3)')
 * Impl:
 *     Call `userviofd()' and store the returned handle in a list
 *     of active VIO objects. If the list becomes non-empty, start
 *     a background thread that poll(2)s from all registered `userviofd()'
 *     objects, and services the requests by dispatching them through
 *     the ops-table originally passed to `vio_create()' */
typedef __ATTR_WUNUSED __ATTR_NONNULL((1)) __fd_t
/*__NOTHROW_NCX*/ (LIBVIO_CC *PVIO_CREATE)(struct vio_operators const *ops, void *cookie, __oflag_t flags);
#ifdef LIBVIO_WANT_PROTOTYPES
LIBVIO_DECL __ATTR_WUNUSED __ATTR_NONNULL((1)) __fd_t
__NOTHROW_NCX(LIBVIO_CC vio_create)(struct vio_operators const *ops, void *cookie, __oflag_t flags);
#endif /* LIBVIO_WANT_PROTOTYPES */


/* vio_destroy(3):
 * >> int vio_destroy(fd_t fd);
 * Desc:
 *     Destroy a VIO file descriptor previously created by `vio_create(3)'
 * Impl:
 *     Remove `fd' from the set of active userfd handles. If all
 *     handles get closed, stop the background thread used to
 *     service VIO requests. */
typedef int /*__NOTHROW_NCX*/ (LIBVIO_CC *PVIO_DESTROY)(__fd_t fd);
#ifdef LIBVIO_WANT_PROTOTYPES
LIBVIO_DECL int __NOTHROW_NCX(LIBVIO_CC vio_destroy)(__fd_t fd);
#endif /* LIBVIO_WANT_PROTOTYPES */

#endif /* !__KERNEL__ */


__DECL_END
#endif /* __CC__ */

#endif /* !_LIBVIO_VIO_H */