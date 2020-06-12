/* HASH CRC-32:0xe42a27a8 */
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
#ifndef __local_c16slen_defined
#define __local_c16slen_defined 1
#include <__crt.h>
__NAMESPACE_LOCAL_BEGIN
/* Dependency: c16send from parts.uchar.string */
#ifndef __local___localdep_c16send_defined
#define __local___localdep_c16send_defined 1
#if defined(__CRT_HAVE_wcsend) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
/* Same as `STR+wcslen(STR)' */
__COMPILER_REDIRECT(__LIBC,__ATTR_PURE __ATTR_RETNONNULL __ATTR_WUNUSED __ATTR_NONNULL((1)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__LIBDCALL,__localdep_c16send,(__CHAR16_TYPE__ const *__restrict __string),wcsend,(__string))
#elif defined(__CRT_HAVE_DOS$wcsend)
/* Same as `STR+wcslen(STR)' */
__CREDIRECT_DOS(__ATTR_PURE __ATTR_RETNONNULL __ATTR_WUNUSED __ATTR_NONNULL((1)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__localdep_c16send,(__CHAR16_TYPE__ const *__restrict __string),wcsend,(__string))
#elif (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/wcsend.h>
__NAMESPACE_LOCAL_BEGIN
/* Same as `STR+wcslen(STR)' */
#define __localdep_c16send (*(__CHAR16_TYPE__ *(__LIBDCALL *)(__CHAR16_TYPE__ const *__restrict))&__LIBC_LOCAL_NAME(wcsend))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/parts.uchar.string/c16send.h>
__NAMESPACE_LOCAL_BEGIN
/* Same as `STR+wcslen(STR)' */
#define __localdep_c16send (*(__CHAR16_TYPE__ *(__LIBDCALL *)(__CHAR16_TYPE__ const *__restrict))&__LIBC_LOCAL_NAME(c16send))
#endif /* !... */
#endif /* !__local___localdep_c16send_defined */
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
__LOCAL_LIBC(c16slen) __ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)) __SIZE_TYPE__
__NOTHROW_NCX(__LIBDCALL __LIBC_LOCAL_NAME(c16slen))(__CHAR16_TYPE__ const *__restrict __string) {
	return (__SIZE_TYPE__)(__localdep_c16send(__string) - __string);
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_c16slen_defined
#define __local___localdep_c16slen_defined 1
#define __localdep_c16slen __LIBC_LOCAL_NAME(c16slen)
#endif /* !__local___localdep_c16slen_defined */
#endif /* !__local_c16slen_defined */