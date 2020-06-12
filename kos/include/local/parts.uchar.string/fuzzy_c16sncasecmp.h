/* HASH CRC-32:0x67955bac */
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
#ifndef __local_fuzzy_c16sncasecmp_defined
#define __local_fuzzy_c16sncasecmp_defined 1
#include <__crt.h>
#if (defined(__CRT_HAVE_fuzzy_wmemcasecmp) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)) || defined(__CRT_HAVE_DOS$fuzzy_wmemcasecmp) || !defined(__NO_MALLOCA)
__NAMESPACE_LOCAL_BEGIN
/* Dependency: c16snlen from parts.uchar.string */
#ifndef __local___localdep_c16snlen_defined
#define __local___localdep_c16snlen_defined 1
#if defined(__CRT_HAVE_wcsnlen) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
/* Same as `strlen', but don't exceed `MAX_CHARS' characters (Same as `memlen[...](STR, '\0', MAX_CHARS)´) */
__COMPILER_REDIRECT(__LIBC,__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)),__SIZE_TYPE__,__NOTHROW_NCX,__LIBDCALL,__localdep_c16snlen,(__CHAR16_TYPE__ const *__restrict __string, __SIZE_TYPE__ __maxlen),wcsnlen,(__string,__maxlen))
#elif defined(__CRT_HAVE_DOS$wcsnlen)
/* Same as `strlen', but don't exceed `MAX_CHARS' characters (Same as `memlen[...](STR, '\0', MAX_CHARS)´) */
__CREDIRECT_DOS(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)),__SIZE_TYPE__,__NOTHROW_NCX,__localdep_c16snlen,(__CHAR16_TYPE__ const *__restrict __string, __SIZE_TYPE__ __maxlen),wcsnlen,(__string,__maxlen))
#elif (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/wcsnlen.h>
__NAMESPACE_LOCAL_BEGIN
/* Same as `strlen', but don't exceed `MAX_CHARS' characters (Same as `memlen[...](STR, '\0', MAX_CHARS)´) */
#define __localdep_c16snlen (*(__SIZE_TYPE__(__LIBDCALL *)(__CHAR16_TYPE__ const *__restrict, __SIZE_TYPE__))&__LIBC_LOCAL_NAME(wcsnlen))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/parts.uchar.string/c16snlen.h>
__NAMESPACE_LOCAL_BEGIN
/* Same as `strlen', but don't exceed `MAX_CHARS' characters (Same as `memlen[...](STR, '\0', MAX_CHARS)´) */
#define __localdep_c16snlen __LIBC_LOCAL_NAME(c16snlen)
#endif /* !... */
#endif /* !__local___localdep_c16snlen_defined */
/* Dependency: fuzzy_c16memcasecmp from parts.uchar.string */
#ifndef __local___localdep_fuzzy_c16memcasecmp_defined
#define __local___localdep_fuzzy_c16memcasecmp_defined 1
#if defined(__CRT_HAVE_fuzzy_wmemcasecmp) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
__COMPILER_REDIRECT(__LIBC,__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 3)),__SIZE_TYPE__,__NOTHROW_NCX,__LIBDCALL,__localdep_fuzzy_c16memcasecmp,(__CHAR16_TYPE__ const *__s1, __SIZE_TYPE__ __s1_bytes, __CHAR16_TYPE__ const *__s2, __SIZE_TYPE__ __s2_bytes),fuzzy_wmemcasecmp,(__s1,__s1_bytes,__s2,__s2_bytes))
#elif defined(__CRT_HAVE_DOS$fuzzy_wmemcasecmp)
__CREDIRECT_DOS(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 3)),__SIZE_TYPE__,__NOTHROW_NCX,__localdep_fuzzy_c16memcasecmp,(__CHAR16_TYPE__ const *__s1, __SIZE_TYPE__ __s1_bytes, __CHAR16_TYPE__ const *__s2, __SIZE_TYPE__ __s2_bytes),fuzzy_wmemcasecmp,(__s1,__s1_bytes,__s2,__s2_bytes))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <parts/malloca.h>
__NAMESPACE_LOCAL_BEGIN
#if !defined(__NO_MALLOCA) && (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/fuzzy_wmemcasecmp.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_fuzzy_c16memcasecmp (*(__SIZE_TYPE__(__LIBDCALL *)(__CHAR16_TYPE__ const *, __SIZE_TYPE__, __CHAR16_TYPE__ const *, __SIZE_TYPE__))&__LIBC_LOCAL_NAME(fuzzy_wmemcasecmp))
#else /* !__NO_MALLOCA && (__SIZEOF_WCHAR_T__ == 2) */
__NAMESPACE_LOCAL_END
#include <parts/malloca.h>
__NAMESPACE_LOCAL_BEGIN
#ifndef __NO_MALLOCA
__NAMESPACE_LOCAL_END
#include <local/parts.uchar.string/fuzzy_c16memcasecmp.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_fuzzy_c16memcasecmp __LIBC_LOCAL_NAME(fuzzy_c16memcasecmp)
#else /* !__NO_MALLOCA */
#undef __local___localdep_fuzzy_c16memcasecmp_defined
#endif /* __NO_MALLOCA */
#endif /* __NO_MALLOCA || !(__SIZEOF_WCHAR_T__ == 2) */
#endif /* !... */
#endif /* !__local___localdep_fuzzy_c16memcasecmp_defined */
__NAMESPACE_LOCAL_END
#include <parts/malloca.h>
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(fuzzy_c16sncasecmp) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 3)) __SIZE_TYPE__
__NOTHROW_NCX(__LIBDCALL __LIBC_LOCAL_NAME(fuzzy_c16sncasecmp))(__CHAR16_TYPE__ const *__s1, __SIZE_TYPE__ __s1_maxlen, __CHAR16_TYPE__ const *__s2, __SIZE_TYPE__ __s2_maxlen) {
	return __localdep_fuzzy_c16memcasecmp(__s1, __localdep_c16snlen(__s1, __s1_maxlen), __s2, __localdep_c16snlen(__s2, __s2_maxlen));
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_fuzzy_c16sncasecmp_defined
#define __local___localdep_fuzzy_c16sncasecmp_defined 1
#define __localdep_fuzzy_c16sncasecmp __LIBC_LOCAL_NAME(fuzzy_c16sncasecmp)
#endif /* !__local___localdep_fuzzy_c16sncasecmp_defined */
#else /* (__CRT_HAVE_fuzzy_wmemcasecmp && (__SIZEOF_WCHAR_T__ == 2) && __LIBCCALL_IS_LIBDCALL) || __CRT_HAVE_DOS$fuzzy_wmemcasecmp || !__NO_MALLOCA */
#undef __local_fuzzy_c16sncasecmp_defined
#endif /* (!__CRT_HAVE_fuzzy_wmemcasecmp || !(__SIZEOF_WCHAR_T__ == 2) || !__LIBCCALL_IS_LIBDCALL) && !__CRT_HAVE_DOS$fuzzy_wmemcasecmp && __NO_MALLOCA */
#endif /* !__local_fuzzy_c16sncasecmp_defined */