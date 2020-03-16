/* HASH CRC-32:0x92c82f80 */
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
#ifndef __local_c32roff_defined
#define __local_c32roff_defined 1
/* Dependency: "wcsrchrnul" from "wchar" */
#ifndef ____localdep_c32rchrnul_defined
#define ____localdep_c32rchrnul_defined 1
#if defined(__CRT_HAVE_wcsrchrnul) && (__SIZEOF_WCHAR_T__ == 4)
/* Same as `c32rchr', but return `STR-1', rather than `NULL' if `NEEDLE' wasn't found. */
__CREDIRECT(__ATTR_PURE __ATTR_RETNONNULL __ATTR_WUNUSED __ATTR_NONNULL((1)),__CHAR32_TYPE__ *,__NOTHROW_NCX,__localdep_c32rchrnul,(__CHAR32_TYPE__ const *__restrict __haystack, __CHAR32_TYPE__ __needle),wcsrchrnul,(__haystack,__needle))
#elif __SIZEOF_WCHAR_T__ == 4
#include <local/wchar/wcsrchrnul.h>
/* Same as `c32rchr', but return `STR-1', rather than `NULL' if `NEEDLE' wasn't found. */
#define __localdep_c32rchrnul (*(__CHAR32_TYPE__ *(__LIBCCALL*)(__CHAR32_TYPE__ const *__restrict, __CHAR32_TYPE__))&(__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(wcsrchrnul)))
#else /* LIBC: c32rchrnul */
#include <local/wchar/c32rchrnul.h>
/* Same as `c32rchr', but return `STR-1', rather than `NULL' if `NEEDLE' wasn't found. */
#define __localdep_c32rchrnul (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(c32rchrnul))
#endif /* c32rchrnul... */
#endif /* !____localdep_c32rchrnul_defined */

__NAMESPACE_LOCAL_BEGIN
/* Same as `c32rchrnul', but return the offset from `STR', rather than the actual address */
__LOCAL_LIBC(c32roff) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)) __SIZE_TYPE__
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(c32roff))(__CHAR32_TYPE__ const *__restrict __haystack,
                                                     __CHAR32_TYPE__ __needle) {
#line 2621 "kos/src/libc/magic/string.c"
	return (__SIZE_TYPE__)(__localdep_c32rchrnul(__haystack, __needle) - __haystack);
}
__NAMESPACE_LOCAL_END
#endif /* !__local_c32roff_defined */
