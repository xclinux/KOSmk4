/* HASH CRC-32:0x7b0ccb5c */
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
#ifndef __local_wildc32scasecmp_defined
#define __local_wildc32scasecmp_defined 1
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
__LOCAL_LIBC(wildc32scasecmp) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) int
__NOTHROW_NCX(__LIBKCALL __LIBC_LOCAL_NAME(wildc32scasecmp))(__CHAR32_TYPE__ const *__pattern, __CHAR32_TYPE__ const *__string) {
	__CHAR32_TYPE__ __card_post, __pattern_ch, __wcsing_ch;
	for (;;) {
		if (!*__string) {
			/* End of string (if the patter is empty, or only contains '*', we have a match) */
			while (*__pattern == '*') ++__pattern;
			return -(int)*__pattern;
		}
		if (!*__pattern)
			return (int)*__string; /* Pattern end doesn't match */
		if (*__pattern == '*') {
			/* Skip stars */
			do {
				++__pattern;
			} while (*__pattern == '*');
			if ((__card_post = *__pattern++) == '\0')
				return 0; /* Pattern ends with '*' (matches everything) */
			if (__card_post == '?')
				goto __next; /* Match any --> already found */
			__card_post = (__CHAR32_TYPE__)__localdep_towlower(__card_post);
			for (;;) {
				__CHAR32_TYPE__ __ch = *__string++;
				if (__card_post == __ch || __card_post == (__CHAR32_TYPE__)__localdep_towlower(__ch)) {
					/* Recursively check if the rest of the string and pattern match */
					if (!__LIBC_LOCAL_NAME(wildc32scasecmp)(__string, __pattern))
						return 0;
				} else if (!__ch) {
					return -(int)(unsigned char)__card_post; /* Wildcard suffix not found */
				}
			}
		}
		__pattern_ch = *__pattern;
		__wcsing_ch = *__string;
		if (__pattern_ch == __wcsing_ch || __pattern_ch == '?' ||
		   (__pattern_ch = (__CHAR32_TYPE__)__localdep_towlower(__pattern_ch),
		    __wcsing_ch = (__CHAR32_TYPE__)__localdep_towlower(__wcsing_ch),
		    __pattern_ch == __wcsing_ch)) {
__next:
			++__string;
			++__pattern;
			continue; /* single character match */
		}
		break; /* mismatch */
	}
	return (int)((unsigned char)__wcsing_ch - (unsigned char)__pattern_ch);
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_wildc32scasecmp_defined
#define __local___localdep_wildc32scasecmp_defined 1
#define __localdep_wildc32scasecmp __LIBC_LOCAL_NAME(wildc32scasecmp)
#endif /* !__local___localdep_wildc32scasecmp_defined */
#endif /* !__local_wildc32scasecmp_defined */