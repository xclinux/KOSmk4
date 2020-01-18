/* HASH CRC-32:0xf16d92b8 */
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
#ifndef __local__ui64tow_s_defined
#define __local__ui64tow_s_defined 1
#include <parts/errno.h>
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(_ui64tow_s) __errno_t
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(_ui64tow_s))(__UINT64_TYPE__ __val,
                                                        __WCHAR_TYPE__ *__buf,
                                                        __SIZE_TYPE__ __buflen,
                                                        int __radix) {
#line 2352 "kos/src/libc/magic/stdlib.c"
	__WCHAR_TYPE__ *__p;
	__UINT64_TYPE__ __temp;
	if (__radix < 2)
		__radix = 10;
	__p = __buf;
	__temp = __val;
	do ++__p;
	while ((__temp /= (unsigned int)__radix) != 0);
	if (__buflen <= (__SIZE_TYPE__)(__p - __buf))
		return __ERANGE;
	__temp = __val;
	*__p = '\0';
	do {
		__WCHAR_TYPE__ __digit;
		__digit = __temp % (unsigned int)__radix;
		*--__p = __digit < 10 ? (__WCHAR_TYPE__)('0' + __digit) : (__WCHAR_TYPE__)('A' + (__digit - 10));
	} while ((__temp /= (unsigned int)__radix) != 0);
	return 0;
}
__NAMESPACE_LOCAL_END
#endif /* !__local__ui64tow_s_defined */