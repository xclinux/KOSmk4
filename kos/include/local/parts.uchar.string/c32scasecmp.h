/* HASH CRC-32:0x699aab9b */
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
#ifndef __local_c32scasecmp_defined
#define __local_c32scasecmp_defined 1
#include <__crt.h>
__NAMESPACE_LOCAL_BEGIN
/* Dependency: towlower from wctype */
#ifndef __local___localdep_towlower_defined
#define __local___localdep_towlower_defined 1
#if __has_builtin(__builtin_towlower) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_towlower)
__CEIREDIRECT(__ATTR_CONST __ATTR_WUNUSED,__WINT_TYPE__,__NOTHROW,__localdep_towlower,(__WINT_TYPE__ __wc),towlower,{ return __builtin_towlower(__wc); })
#elif defined(__CRT_HAVE_towlower)
__CREDIRECT(__ATTR_CONST __ATTR_WUNUSED,__WINT_TYPE__,__NOTHROW,__localdep_towlower,(__WINT_TYPE__ __wc),towlower,(__wc))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/wctype/towlower.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_towlower __LIBC_LOCAL_NAME(towlower)
#endif /* !... */
#endif /* !__local___localdep_towlower_defined */
__LOCAL_LIBC(c32scasecmp) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) int
__NOTHROW_NCX(__LIBKCALL __LIBC_LOCAL_NAME(c32scasecmp))(__CHAR32_TYPE__ const *__s1, __CHAR32_TYPE__ const *__s2) {
	__CHAR32_TYPE__ __c1, __c2;
	do {
		if ((__c1 = *__s1++) != (__c2 = *__s2++) && ((__c1 = (__CHAR32_TYPE__)__localdep_towlower(__c1)) != (__c2 = (__CHAR32_TYPE__)__localdep_towlower(__c2))))
			return (int)((unsigned char)__c1 - (unsigned char)__c2);
	} while (__c1);
	return 0;
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_c32scasecmp_defined
#define __local___localdep_c32scasecmp_defined 1
#define __localdep_c32scasecmp __LIBC_LOCAL_NAME(c32scasecmp)
#endif /* !__local___localdep_c32scasecmp_defined */
#endif /* !__local_c32scasecmp_defined */