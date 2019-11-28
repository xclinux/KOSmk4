/* HASH CRC-32:0x25a83e1f */
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
#ifndef __local_mempmovedown_defined
#define __local_mempmovedown_defined 1
#ifdef __LIBC_BIND_OPTIMIZATIONS
#include <optimized/string.h>
#endif /* __LIBC_BIND_OPTIMIZATIONS */
/* Dependency: "memmovedown" from "string" */
#ifndef ____localdep_memmovedown_defined
#define ____localdep_memmovedown_defined 1
#ifdef __fast_memmovedown_defined
/* Move memory between potentially overlapping memory blocks (assumes that `DST <= SRC || !N_BYTES')
 * @return: * : Always re-returns `dst' */
#define __localdep_memmovedown (__NAMESPACE_FAST_SYM __LIBC_FAST_NAME(memmovedown))
#elif defined(__CRT_HAVE_memmovedown)
/* Move memory between potentially overlapping memory blocks (assumes that `DST <= SRC || !N_BYTES')
 * @return: * : Always re-returns `dst' */
__CREDIRECT(__ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),void *,__NOTHROW_NCX,__localdep_memmovedown,(void *__dst, void const *__src, __SIZE_TYPE__ __n_bytes),memmovedown,(__dst,__src,__n_bytes))
#else /* LIBC: memmovedown */
#include <local/string/memmovedown.h>
/* Move memory between potentially overlapping memory blocks (assumes that `DST <= SRC || !N_BYTES')
 * @return: * : Always re-returns `dst' */
#define __localdep_memmovedown (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(memmovedown))
#endif /* memmovedown... */
#endif /* !____localdep_memmovedown_defined */

__NAMESPACE_LOCAL_BEGIN
/* Same as `memmovedown', but return `DST + N_BYTES', rather than `DST' (assumes that `DST <= SRC || !N_BYTES') */
__LOCAL_LIBC(mempmovedown) __ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)) void *
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(mempmovedown))(void *__dst,
                                                          void const *__src,
                                                          __SIZE_TYPE__ __n_bytes) {
#line 2620 "kos/src/libc/magic/string.c"
	return (void *)((__BYTE_TYPE__ *)__localdep_memmovedown(__dst, __src, __n_bytes) + __n_bytes);
}
__NAMESPACE_LOCAL_END
#endif /* !__local_mempmovedown_defined */