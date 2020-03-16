/* HASH CRC-32:0xd082e2db */
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
#ifndef __local_c32casecoll_defined
#define __local_c32casecoll_defined 1
/* Dependency: "wcscasecmp" from "wchar" */
#ifndef ____localdep_c32casecmp_defined
#define ____localdep_c32casecmp_defined 1
#if defined(__CRT_HAVE_wcscasecmp) && (__SIZEOF_WCHAR_T__ == 4)
__CREDIRECT(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),int,__NOTHROW_NCX,__localdep_c32casecmp,(__CHAR32_TYPE__ const *__s1, __CHAR32_TYPE__ const *__s2),wcscasecmp,(__s1,__s2))
#elif defined(__CRT_HAVE_wcsicmp) && (__SIZEOF_WCHAR_T__ == 4)
__CREDIRECT(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),int,__NOTHROW_NCX,__localdep_c32casecmp,(__CHAR32_TYPE__ const *__s1, __CHAR32_TYPE__ const *__s2),wcsicmp,(__s1,__s2))
#elif defined(__CRT_HAVE__wcsicmp) && (__SIZEOF_WCHAR_T__ == 4)
__CREDIRECT(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),int,__NOTHROW_NCX,__localdep_c32casecmp,(__CHAR32_TYPE__ const *__s1, __CHAR32_TYPE__ const *__s2),_wcsicmp,(__s1,__s2))
#elif __SIZEOF_WCHAR_T__ == 4
#include <local/wchar/wcscasecmp.h>
#define __localdep_c32casecmp (*(int(__LIBCCALL*)(__CHAR32_TYPE__ const *, __CHAR32_TYPE__ const *))&(__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(wcscasecmp)))
#else /* LIBC: c32casecmp */
#include <local/wchar/c32casecmp.h>
#define __localdep_c32casecmp (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(c32casecmp))
#endif /* c32casecmp... */
#endif /* !____localdep_c32casecmp_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(c32casecoll) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) int
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(c32casecoll))(__CHAR32_TYPE__ const *__s1,
                                                         __CHAR32_TYPE__ const *__s2) {
#line 4676 "kos/src/libc/magic/string.c"
	return __localdep_c32casecmp(__s1, __s2);
}
__NAMESPACE_LOCAL_END
#endif /* !__local_c32casecoll_defined */
