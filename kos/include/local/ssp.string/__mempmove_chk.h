/* HASH CRC-32:0x6df10875 */
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
#ifndef __local___mempmove_chk_defined
#define __local___mempmove_chk_defined 1
#ifdef __LIBC_BIND_OPTIMIZATIONS
#include <optimized/string.h>
#endif /* __LIBC_BIND_OPTIMIZATIONS */
#include <ssp/chk.h>
/* Dependency: "mempmove" from "string" */
#ifndef ____localdep_mempmove_defined
#define ____localdep_mempmove_defined 1
#ifdef __fast_mempmove_defined
/* Same as `memmove', but return `DST + N_BYTES', rather than `DST' */
#define __localdep_mempmove (__NAMESPACE_FAST_SYM __LIBC_FAST_NAME(mempmove))
#elif defined(__CRT_HAVE_mempmove)
/* Same as `memmove', but return `DST + N_BYTES', rather than `DST' */
__CREDIRECT(__ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),void *,__NOTHROW_NCX,__localdep_mempmove,(void *__dst, void const *__src, __SIZE_TYPE__ __n_bytes),mempmove,(__dst,__src,__n_bytes))
#else /* LIBC: mempmove */
#include <local/string/mempmove.h>
/* Same as `memmove', but return `DST + N_BYTES', rather than `DST' */
#define __localdep_mempmove (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(mempmove))
#endif /* mempmove... */
#endif /* !____localdep_mempmove_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(__mempmove_chk) __ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)) void *
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(__mempmove_chk))(void *__dst,
                                                            void const *__src,
                                                            __SIZE_TYPE__ __n_bytes,
                                                            __SIZE_TYPE__ __dst_objsize) {
#line 58 "kos/src/libc/magic/ssp.string.c"
	__ssp_chk_dstbuf("mempmove", __dst, __n_bytes, __dst_objsize);
	return __localdep_mempmove(__dst, __src, __n_bytes);
}

__NAMESPACE_LOCAL_END
#endif /* !__local___mempmove_chk_defined */