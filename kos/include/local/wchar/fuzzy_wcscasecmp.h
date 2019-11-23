/* HASH CRC-32:0x5d6f90c */
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
#ifndef __local_fuzzy_wcscasecmp_defined
#if !defined(__NO_MALLOCA) || defined(__CRT_HAVE_fuzzy_wmemcasecmp)
#define __local_fuzzy_wcscasecmp_defined 1
#include <parts/malloca.h>
/* Dependency: "fuzzy_wmemcasecmp" from "wchar" */
#ifndef ____localdep_fuzzy_wmemcasecmp_defined
#define ____localdep_fuzzy_wmemcasecmp_defined 1
#ifdef __CRT_HAVE_fuzzy_wmemcasecmp
__CREDIRECT(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 3)),__SIZE_TYPE__,__NOTHROW_NCX,__localdep_fuzzy_wmemcasecmp,(__WCHAR_TYPE__ const *__s1, __SIZE_TYPE__ __s1_bytes, __WCHAR_TYPE__ const *__s2, __SIZE_TYPE__ __s2_bytes),fuzzy_wmemcasecmp,(__s1,__s1_bytes,__s2,__s2_bytes))
#elif !defined(__NO_MALLOCA)
#include <local/wchar/fuzzy_wmemcasecmp.h>
#define __localdep_fuzzy_wmemcasecmp (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fuzzy_wmemcasecmp))
#else /* CUSTOM: fuzzy_wmemcasecmp */
#undef ____localdep_fuzzy_wmemcasecmp_defined
#endif /* fuzzy_wmemcasecmp... */
#endif /* !____localdep_fuzzy_wmemcasecmp_defined */

/* Dependency: "wcslen" from "wchar" */
#ifndef ____localdep_wcslen_defined
#define ____localdep_wcslen_defined 1
#ifdef __std___localdep_wcslen_defined
__NAMESPACE_STD_USING(__localdep_wcslen)
#elif defined(__CRT_HAVE_wcslen)
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
__CREDIRECT(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)),__SIZE_TYPE__,__NOTHROW_NCX,__localdep_wcslen,(__WCHAR_TYPE__ const *__restrict __string),wcslen,(__string))
#else /* LIBC: wcslen */
#include <local/wchar/wcslen.h>
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
#define __localdep_wcslen (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(wcslen))
#endif /* wcslen... */
#endif /* !____localdep_wcslen_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(fuzzy_wcscasecmp) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __SIZE_TYPE__
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(fuzzy_wcscasecmp))(__WCHAR_TYPE__ const *__s1,
                                                              __WCHAR_TYPE__ const *__s2) {
#line 1498 "kos/src/libc/magic/wchar.c"
	return __localdep_fuzzy_wmemcasecmp(__s1, __localdep_wcslen(__s1), __s2, __localdep_wcslen(__s2));
}
__NAMESPACE_LOCAL_END
#endif /* !defined(__NO_MALLOCA) || defined(__CRT_HAVE_fuzzy_wmemcasecmp) */
#endif /* !__local_fuzzy_wcscasecmp_defined */
