/* HASH CRC-32:0x3353d8d4 */
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
#ifndef __local_mbtoc16_defined
#define __local_mbtoc16_defined 1
#include <__crt.h>
__NAMESPACE_LOCAL_BEGIN
/* Dependency: mbrtoc16 from uchar */
#ifndef __local___localdep_mbrtoc16_defined
#define __local___localdep_mbrtoc16_defined 1
#if defined(__CRT_HAVE_mbrtowc) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
__NAMESPACE_LOCAL_END
#include <bits/mbstate.h>
__NAMESPACE_LOCAL_BEGIN
__COMPILER_REDIRECT(__LIBC,,__SIZE_TYPE__,__NOTHROW_NCX,__LIBDCALL,__localdep_mbrtoc16,(__CHAR16_TYPE__ *__pwc, char const *__restrict __str, __SIZE_TYPE__ __maxlen, __mbstate_t *__mbs),mbrtowc,(__pwc,__str,__maxlen,__mbs))
#elif defined(__CRT_HAVE_DOS$mbrtowc)
__NAMESPACE_LOCAL_END
#include <bits/mbstate.h>
__NAMESPACE_LOCAL_BEGIN
__CREDIRECT_DOS(,__SIZE_TYPE__,__NOTHROW_NCX,__localdep_mbrtoc16,(__CHAR16_TYPE__ *__pwc, char const *__restrict __str, __SIZE_TYPE__ __maxlen, __mbstate_t *__mbs),mbrtowc,(__pwc,__str,__maxlen,__mbs))
#elif defined(__CRT_HAVE___mbrtowc) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
__NAMESPACE_LOCAL_END
#include <bits/mbstate.h>
__NAMESPACE_LOCAL_BEGIN
__COMPILER_REDIRECT(__LIBC,,__SIZE_TYPE__,__NOTHROW_NCX,__LIBDCALL,__localdep_mbrtoc16,(__CHAR16_TYPE__ *__pwc, char const *__restrict __str, __SIZE_TYPE__ __maxlen, __mbstate_t *__mbs),__mbrtowc,(__pwc,__str,__maxlen,__mbs))
#elif defined(__CRT_HAVE_DOS$__mbrtowc)
__NAMESPACE_LOCAL_END
#include <bits/mbstate.h>
__NAMESPACE_LOCAL_BEGIN
__CREDIRECT_DOS(,__SIZE_TYPE__,__NOTHROW_NCX,__localdep_mbrtoc16,(__CHAR16_TYPE__ *__pwc, char const *__restrict __str, __SIZE_TYPE__ __maxlen, __mbstate_t *__mbs),__mbrtowc,(__pwc,__str,__maxlen,__mbs))
#elif (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/mbrtowc.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_mbrtoc16 (*(__SIZE_TYPE__(__LIBDCALL *)(__CHAR16_TYPE__ *, char const *__restrict, __SIZE_TYPE__, __mbstate_t *))&__LIBC_LOCAL_NAME(mbrtowc))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/uchar/mbrtoc16.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_mbrtoc16 __LIBC_LOCAL_NAME(mbrtoc16)
#endif /* !... */
#endif /* !__local___localdep_mbrtoc16_defined */
__LOCAL_LIBC(mbtoc16) int
__NOTHROW_NCX(__LIBDCALL __LIBC_LOCAL_NAME(mbtoc16))(__CHAR16_TYPE__ *__restrict __pwc, char const *__restrict __str, __SIZE_TYPE__ __maxlen) {
	return __localdep_mbrtoc16(__pwc, __str, __maxlen, __NULLPTR);
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_mbtoc16_defined
#define __local___localdep_mbtoc16_defined 1
#define __localdep_mbtoc16 __LIBC_LOCAL_NAME(mbtoc16)
#endif /* !__local___localdep_mbtoc16_defined */
#endif /* !__local_mbtoc16_defined */