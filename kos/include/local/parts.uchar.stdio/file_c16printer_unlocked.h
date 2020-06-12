/* HASH CRC-32:0x804474a8 */
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
#ifndef __local_file_c16printer_unlocked_defined
#define __local_file_c16printer_unlocked_defined 1
#include <__crt.h>
#if (defined(__CRT_HAVE_fputwc_unlocked) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)) || defined(__CRT_HAVE_DOS$_fputwc_nolock)
__NAMESPACE_LOCAL_BEGIN
/* Dependency: fputc16_unlocked from parts.uchar.stdio */
#ifndef __local___localdep_fputc16_unlocked_defined
#define __local___localdep_fputc16_unlocked_defined 1
#if defined(__CRT_HAVE_fputwc_unlocked) && (__SIZEOF_WCHAR_T__ == 2) && defined(__LIBCCALL_IS_LIBDCALL)
__COMPILER_REDIRECT(__LIBC,__ATTR_NONNULL((2)),__WINT_TYPE__,__THROWING,__LIBDCALL,__localdep_fputc16_unlocked,(__CHAR16_TYPE__ __wc, __FILE *__restrict __stream),fputwc_unlocked,(__wc,__stream))
#elif defined(__CRT_HAVE_DOS$_fputwc_nolock)
__CREDIRECT_DOS(__ATTR_NONNULL((2)),__WINT_TYPE__,__THROWING,__localdep_fputc16_unlocked,(__CHAR16_TYPE__ __wc, __FILE *__restrict __stream),_fputwc_nolock,(__wc,__stream))
#else /* ... */
#undef __local___localdep_fputc16_unlocked_defined
#endif /* !... */
#endif /* !__local___localdep_fputc16_unlocked_defined */
__NAMESPACE_LOCAL_END
#include <asm/stdio.h>
__NAMESPACE_LOCAL_BEGIN
/* Same as `file_wprinter()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__LOCAL_LIBC(file_c16printer_unlocked) __ATTR_NONNULL((1, 2)) __SSIZE_TYPE__
(__LIBDCALL __LIBC_LOCAL_NAME(file_c16printer_unlocked))(void *__arg, __CHAR16_TYPE__ const *__restrict __data, __SIZE_TYPE__ __datalen) __THROWS(...) {
	__SIZE_TYPE__ __i;
	for (__i = 0; __i < __datalen; ++__i) {
		if (__localdep_fputc16_unlocked(__data[__i], (__FILE *)__arg) == __WEOF16)
			break;
	}
	return (__SSIZE_TYPE__)__i;
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_file_c16printer_unlocked_defined
#define __local___localdep_file_c16printer_unlocked_defined 1
#define __localdep_file_c16printer_unlocked __LIBC_LOCAL_NAME(file_c16printer_unlocked)
#endif /* !__local___localdep_file_c16printer_unlocked_defined */
#else /* (__CRT_HAVE_fputwc_unlocked && (__SIZEOF_WCHAR_T__ == 2) && __LIBCCALL_IS_LIBDCALL) || __CRT_HAVE_DOS$_fputwc_nolock */
#undef __local_file_c16printer_unlocked_defined
#endif /* (!__CRT_HAVE_fputwc_unlocked || !(__SIZEOF_WCHAR_T__ == 2) || !__LIBCCALL_IS_LIBDCALL) && !__CRT_HAVE_DOS$_fputwc_nolock */
#endif /* !__local_file_c16printer_unlocked_defined */