/* Copyright (c) 2019 Griefer@Work                                            *
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
 *    in a product, an acknowledgement in the product documentation would be  *
 *    appreciated but is not required.                                        *
 * 2. Altered source versions must be plainly marked as such, and must not be *
 *    misrepresented as being the original software.                          *
 * 3. This notice may not be removed or altered from any source distribution. *
 */
#ifdef __INTELLISENSE__
#include "userkern.c"
#define DEFINE_IO_READ 1
//#define DEFINE_IO_WRITE 1
#endif /* __INTELLISENSE__ */

#if (defined(DEFINE_IO_READ) + defined(DEFINE_IO_WRITE)) != 1
#error "Must #define exactly one of `DEFINE_IO_READ' or `DEFINE_IO_WRITE' before #including this file"
#endif

#ifndef USERKERN_STRUCT
#define USERKERN_STRUCT struct userkern
#endif /* !USERKERN_STRUCT */

#ifndef USERKERN_WIDTH
#define USERKERN_WIDTH __SIZEOF_POINTER__
#endif /* !USERKERN_WIDTH */

DECL_BEGIN

#ifdef DEFINE_IO_READ
#define IFELSE_RW(r, w) r
#else /* DEFINE_IO_READ */
#define IFELSE_RW(r, w) w
#endif /* !DEFINE_IO_READ */


#ifdef DEFINE_IO_READ
#if USERKERN_WIDTH == 4
#define VALUE_TYPE   u32
PRIVATE NONNULL((1)) u32 KCALL
userkern_segment_readl(struct vio_args *__restrict args,
                       vm_daddr_t addr)
#elif USERKERN_WIDTH == 8
#define VALUE_TYPE   u64
PRIVATE NONNULL((1)) u64 KCALL
userkern_segment_readq(struct vio_args *__restrict args,
                       vm_daddr_t addr)
#endif /* USERKERN_WIDTH == ... */
#elif defined(DEFINE_IO_WRITE)
#if USERKERN_WIDTH == 4
#define VALUE_TYPE   u32
PRIVATE NONNULL((1)) void KCALL
userkern_segment_writel(struct vio_args *__restrict args,
                        vm_daddr_t addr, u32 value)
#elif USERKERN_WIDTH == 8
#define VALUE_TYPE   u64
PRIVATE NONNULL((1)) void KCALL
userkern_segment_writeq(struct vio_args *__restrict args,
                        vm_daddr_t addr, u64 value)
#endif /* USERKERN_WIDTH == ... */
#endif /* DEFINE_IO_WRITE */
{
#ifdef DEFINE_IO_READ
	VALUE_TYPE result;
#endif /* DEFINE_IO_READ */
	uintptr_t reladdr;
	uintptr_t base = get_userkern_base();
	if (!ADDR_IS_KERNEL(base))
		goto err_invalid_addr;
#ifdef HIGH_MEMORY_KERNEL
	base -= KERNEL_BASE;
#endif /* HIGH_MEMORY_KERNEL */
	if ((uintptr_t)addr < base)
		goto err_invalid_addr;
	reladdr = (uintptr_t)addr - base;
	switch (reladdr) {

	case offsetof(USERKERN_STRUCT, uk_base):
		/* Re-assign the base address of the user-thread segment. */
#ifdef DEFINE_IO_READ
		result = base;
#else /* DEFINE_IO_READ */
		if (!ADDR_IS_KERNEL(value))
			THROW(E_INVALID_ARGUMENT_BAD_VALUE,
			      E_INVALID_ARGUMENT_CONTEXT_USERKERN_BASE,
			      value);
		set_userkern_base(value);
#endif /* !DEFINE_IO_READ */
		break;

#ifdef DEFINE_IO_READ
	case offsetof(USERKERN_STRUCT, uk_tid):
		result = task_gettid();
		break;
#endif /* DEFINE_IO_READ */

#ifdef DEFINE_IO_READ
	case offsetof(USERKERN_STRUCT, uk_pid):
		result = task_getpid();
		break;
#endif /* DEFINE_IO_READ */

	case offsetof(USERKERN_STRUCT, uk_ppid): {
#ifdef DEFINE_IO_READ
		REF struct task *parent;
		result = 0;
		parent = task_getprocessparent();
		if likely(parent) {
			result = task_getpid_of(parent);
			decref(parent);
		}
#else /* DEFINE_IO_READ */
		if (value != 0)
			THROW(E_INVALID_ARGUMENT_BAD_VALUE,
			      E_INVALID_ARGUMENT_CONTEXT_USERKERN_PPID,
			      value);
		task_detach(task_getprocess());
#endif /* !DEFINE_IO_READ */
	}	break;

	case offsetof(USERKERN_STRUCT, uk_pgid): {
#ifdef DEFINE_IO_READ
		REF struct task *leader;
		leader = task_getprocessgroupleader();
		result = task_getpid_of(leader);
		decref(leader);
#else /* DEFINE_IO_READ */
		struct task *caller;
		caller = THIS_TASK;
		if (value == 0)
			task_setprocessgroupleader(THIS_TASK, caller);
		else {
			unsigned int error;
			REF struct task *group;
			group = pidns_lookup_task(THIS_PIDNS, value);
			{
				FINALLY_DECREF_UNLIKELY(group);
				error = task_setprocessgroupleader(caller, group);
			}
			if (error == TASK_SETPROCESSGROUPLEADER_EXITED)
				THROW(E_PROCESS_EXITED, (upid_t)value);
			if (error == TASK_SETPROCESSGROUPLEADER_LEADER) {
				THROW(E_ILLEGAL_PROCESS_OPERATION,
				      (upid_t)0,
				      E_ILLEGAL_PROCESS_OPERATION_SETPGID_LEADER,
				      (upid_t)value);
			}
		}
#endif /* !DEFINE_IO_READ */
	}	break;

	case offsetof(USERKERN_STRUCT, uk_sid): {
#ifdef DEFINE_IO_READ
		REF struct task *leader;
		leader = task_getsessionleader();
		result = task_getpid_of(leader);
		decref(leader);
#else /* DEFINE_IO_READ */
		struct task *caller;
		caller = THIS_TASK;
		if (value != 0 &&
		    value != task_gettid_of(THIS_TASK) &&
		    value != task_getpid_of(THIS_TASK))
			THROW(E_INVALID_ARGUMENT_BAD_VALUE,
			      E_INVALID_ARGUMENT_CONTEXT_USERKERN_SID,
			      value);
		task_setsessionleader(caller,
		                      caller,
		                      NULL,
		                      NULL,
		                      NULL);
#endif /* !DEFINE_IO_READ */
	}	break;

	case offsetof(USERKERN_STRUCT, uk_uid):
		IFELSE_RW(result = cred_getuid(),
		          cred_setuid(value));
		break;

	case offsetof(USERKERN_STRUCT, uk_gid):
		IFELSE_RW(result = cred_getgid(),
		          cred_setgid(value));
		break;

	case offsetof(USERKERN_STRUCT, uk_euid):
		IFELSE_RW(result = cred_geteuid(),
		          cred_seteuid(value));
		break;


	case offsetof(USERKERN_STRUCT, uk_egid):
		IFELSE_RW(result = cred_getegid(),
		          cred_setegid(value));
		break;

	case offsetof(USERKERN_STRUCT, uk_suid):
		IFELSE_RW(result = cred_getsuid(),
		          cred_setsuid(value));
		break;

	case offsetof(USERKERN_STRUCT, uk_sgid):
		IFELSE_RW(result = cred_getsgid(),
		          cred_setsgid(value));
		break;

	default:
		/* Allow access to arch-specific fields. */
#ifdef DEFINE_IO_READ
#if defined(__ARCH_HAVE_COMPAT) && USERKERN_WIDTH == __ARCH_COMPAT_SIZEOF_POINTER
		if unlikely(!userkern_get_arch_specific_field_compat(args, reladdr, &result))
#else /* __ARCH_HAVE_COMPAT && USERKERN_WIDTH == __ARCH_COMPAT_SIZEOF_POINTER */
		if unlikely(!userkern_get_arch_specific_field(args, reladdr, &result))
#endif /* !__ARCH_HAVE_COMPAT || USERKERN_WIDTH != __ARCH_COMPAT_SIZEOF_POINTER */
#else /* DEFINE_IO_READ */
#if defined(__ARCH_HAVE_COMPAT) && USERKERN_WIDTH == __ARCH_COMPAT_SIZEOF_POINTER
		if unlikely(!userkern_set_arch_specific_field_compat(args, reladdr, value))
#else /* __ARCH_HAVE_COMPAT && USERKERN_WIDTH == __ARCH_COMPAT_SIZEOF_POINTER */
		if unlikely(!userkern_set_arch_specific_field(args, reladdr, value))
#endif /* !__ARCH_HAVE_COMPAT || USERKERN_WIDTH != __ARCH_COMPAT_SIZEOF_POINTER */
#endif /* !DEFINE_IO_READ */
		{
			if (reladdr < sizeof(USERKERN_STRUCT)) {
				addr -= (vm_daddr_t)args->va_access_partoff;
				addr += (vm_daddr_t)args->va_access_pageaddr * PAGESIZE;
#ifdef DEFINE_IO_READ
				THROW(E_SEGFAULT_NOTREADABLE,
				      (uintptr_t)addr,
				      E_SEGFAULT_CONTEXT_USERCODE);
#else /* DEFINE_IO_READ */
				THROW(E_SEGFAULT_READONLY,
				      (uintptr_t)addr,
				      E_SEGFAULT_CONTEXT_USERCODE);
#endif /* !DEFINE_IO_READ */
			}
		}
		break;
	}
#ifdef DEFINE_IO_READ
	return result;
#else /* DEFINE_IO_READ */
	return;
#endif /* !DEFINE_IO_READ */
err_invalid_addr:
	addr -= (vm_daddr_t)args->va_access_partoff;
	addr += (vm_daddr_t)args->va_access_pageaddr * PAGESIZE;
	THROW(E_SEGFAULT_UNMAPPED,
	      (uintptr_t)addr,
	      E_SEGFAULT_CONTEXT_FAULT |
	      E_SEGFAULT_CONTEXT_USERCODE);
}


DECL_END


#undef IFELSE_RW
#undef USERKERN_WIDTH
#undef USERKERN_STRUCT
#undef DEFINE_IO_WRITE
#undef DEFINE_IO_READ
#undef VALUE_TYPE