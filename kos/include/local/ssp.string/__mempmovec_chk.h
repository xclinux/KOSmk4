/* HASH CRC-32:0x9e075d35 */
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
#ifndef __local___mempmovec_chk_defined
#define __local___mempmovec_chk_defined 1
#ifdef __LIBC_BIND_OPTIMIZATIONS
#include <optimized/string.h>
#endif /* __LIBC_BIND_OPTIMIZATIONS */
#include <ssp/chk.h>
/* Dependency: "mempmovec" from "string" */
#ifndef ____localdep_mempmovec_defined
#define ____localdep_mempmovec_defined 1
#ifdef __fast_mempmovec_defined
/* Same as `memmovec', but return `DST + (ELEM_COUNT * ELEM_SIZE)', rather than `DST' */
#define __localdep_mempmovec (__NAMESPACE_FAST_SYM __LIBC_FAST_NAME(mempmovec))
#elif defined(__CRT_HAVE_mempmovec)
/* Same as `memmovec', but return `DST + (ELEM_COUNT * ELEM_SIZE)', rather than `DST' */
__CREDIRECT(__ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),void *,__NOTHROW_NCX,__localdep_mempmovec,(void *__dst, void const *__src, __SIZE_TYPE__ __elem_count, __SIZE_TYPE__ __elem_size),mempmovec,(__dst,__src,__elem_count,__elem_size))
#else /* LIBC: mempmovec */
#include <local/string/mempmovec.h>
/* Same as `memmovec', but return `DST + (ELEM_COUNT * ELEM_SIZE)', rather than `DST' */
#define __localdep_mempmovec (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(mempmovec))
#endif /* mempmovec... */
#endif /* !____localdep_mempmovec_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(__mempmovec_chk) __ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)) void *
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(__mempmovec_chk))(void *__dst,
                                                             void const *__src,
                                                             __SIZE_TYPE__ __elem_count,
                                                             __SIZE_TYPE__ __elem_size,
                                                             __SIZE_TYPE__ __dst_objsize) {
#line 67 "kos/src/libc/magic/ssp.string.c"
	__ssp_chk_dstbuf("mempmovec", __dst, __elem_count * __elem_size, __dst_objsize);
	return __localdep_mempmovec(__dst, __src, __elem_count, __elem_size);
}

__NAMESPACE_LOCAL_END
#endif /* !__local___mempmovec_chk_defined */