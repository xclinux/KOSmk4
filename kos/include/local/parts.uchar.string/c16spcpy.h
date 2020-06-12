/* HASH CRC-32:0x815e7ba3 */
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
#ifndef __local_c16spcpy_defined
#define __local_c16spcpy_defined 1
#include <__crt.h>
__NAMESPACE_LOCAL_BEGIN
/* Dependency: c16slen from parts.uchar.string */
#ifndef __local___localdep_c16slen_defined
#define __local___localdep_c16slen_defined 1
#if defined(__CRT_HAVE_wcslen) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
__COMPILER_REDIRECT(__LIBC,__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)),__SIZE_TYPE__,__NOTHROW_NCX,__LIBDCALL,__localdep_c16slen,(__CHAR16_TYPE__ const *__restrict __string),wcslen,(__string))
#elif defined(__CRT_HAVE_DOS$wcslen)
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
__CREDIRECT_DOS(__ATTR_PURE __ATTR_WUNUSED __ATTR_NONNULL((1)),__SIZE_TYPE__,__NOTHROW_NCX,__localdep_c16slen,(__CHAR16_TYPE__ const *__restrict __string),wcslen,(__string))
#elif (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/wcslen.h>
__NAMESPACE_LOCAL_BEGIN
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
#define __localdep_c16slen (*(__SIZE_TYPE__(__LIBDCALL *)(__CHAR16_TYPE__ const *__restrict))&__LIBC_LOCAL_NAME(wcslen))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/parts.uchar.string/c16slen.h>
__NAMESPACE_LOCAL_BEGIN
/* Return the length of the string in characters (Same as `rawmemlen[...](STR, '\0')') */
#define __localdep_c16slen __LIBC_LOCAL_NAME(c16slen)
#endif /* !... */
#endif /* !__local___localdep_c16slen_defined */
/* Dependency: c16mempcpy from parts.uchar.string */
#ifndef __local___localdep_c16mempcpy_defined
#define __local___localdep_c16mempcpy_defined 1
#if defined(__CRT_HAVE_wmempcpy) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
__COMPILER_REDIRECT(__LIBC,__ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__LIBDCALL,__localdep_c16mempcpy,(__CHAR16_TYPE__ *__restrict __dst, __CHAR16_TYPE__ const *__restrict __src, __SIZE_TYPE__ __num_chars),wmempcpy,(__dst,__src,__num_chars))
#elif defined(__CRT_HAVE_DOS$wmempcpy)
__CREDIRECT_DOS(__ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__localdep_c16mempcpy,(__CHAR16_TYPE__ *__restrict __dst, __CHAR16_TYPE__ const *__restrict __src, __SIZE_TYPE__ __num_chars),wmempcpy,(__dst,__src,__num_chars))
#elif defined(__CRT_HAVE_mempcpyw) && defined(__LIBCCALL_IS_LIBDCALL)
__COMPILER_REDIRECT(__LIBC,__ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__LIBDCALL,__localdep_c16mempcpy,(__CHAR16_TYPE__ *__restrict __dst, __CHAR16_TYPE__ const *__restrict __src, __SIZE_TYPE__ __num_chars),mempcpyw,(__dst,__src,__num_chars))
#elif defined(__CRT_HAVE_DOS$mempcpyw)
__CREDIRECT_DOS(__ATTR_RETNONNULL __ATTR_NONNULL((1, 2)),__CHAR16_TYPE__ *,__NOTHROW_NCX,__localdep_c16mempcpy,(__CHAR16_TYPE__ *__restrict __dst, __CHAR16_TYPE__ const *__restrict __src, __SIZE_TYPE__ __num_chars),mempcpyw,(__dst,__src,__num_chars))
#elif (__SIZEOF_WCHAR_T__ == 2)
__NAMESPACE_LOCAL_END
#include <local/wchar/wmempcpy.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_c16mempcpy (*(__CHAR16_TYPE__ *(__LIBDCALL *)(__CHAR16_TYPE__ *__restrict, __CHAR16_TYPE__ const *__restrict, __SIZE_TYPE__))&__LIBC_LOCAL_NAME(wmempcpy))
#else /* ... */
__NAMESPACE_LOCAL_END
#include <local/parts.uchar.string/c16mempcpy.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_c16mempcpy __LIBC_LOCAL_NAME(c16mempcpy)
#endif /* !... */
#endif /* !__local___localdep_c16mempcpy_defined */
/* Same as wcscpy, but return a pointer after the last written character */
__LOCAL_LIBC(c16spcpy) __ATTR_LEAF __ATTR_RETNONNULL __ATTR_NONNULL((1, 2)) __CHAR16_TYPE__ *
__NOTHROW_NCX(__LIBDCALL __LIBC_LOCAL_NAME(c16spcpy))(__CHAR16_TYPE__ *__restrict __buf, __CHAR16_TYPE__ const *__restrict __src) {
	return __localdep_c16mempcpy(__buf, __src, __localdep_c16slen(__src) + 1);
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_c16spcpy_defined
#define __local___localdep_c16spcpy_defined 1
#define __localdep_c16spcpy __LIBC_LOCAL_NAME(c16spcpy)
#endif /* !__local___localdep_c16spcpy_defined */
#endif /* !__local_c16spcpy_defined */