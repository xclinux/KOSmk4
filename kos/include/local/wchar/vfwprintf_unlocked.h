/* HASH CRC-32:0x5c6e9732 */
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
#ifndef __local_vfwprintf_unlocked_defined
#if (defined(__CRT_HAVE_fputwc_unlocked) || defined(__CRT_HAVE__fputwc_nolock) || defined(__CRT_HAVE_file_wprinter_unlocked) || defined(__CRT_HAVE_file_wprinter))
#define __local_vfwprintf_unlocked_defined 1
#include <kos/anno.h>
#include <bits/wformat-printer.h>
#include <bits/uformat-printer.h>
/* Dependency: "format_vwprintf" from "parts.wchar.format-printer" */
#ifndef ____localdep_format_vwprintf_defined
#define ____localdep_format_vwprintf_defined 1
#if defined(__CRT_HAVE_format_vwprintf)
/* Generic printf implementation
 * Taking a regular printf-style format string and arguments, these
 * functions will call the given `PRINTER' callback with various strings
 * that, when put together, result in the desired formated text.
 *  - `PRINTER' obviously is called with the text parts in their correct order
 *  - If `PRINTER' returns '< 0', the function returns immediately,
 *    yielding that same value. Otherwise, format_printf() returns
 *    the sum of all return values from `PRINTER'.
 *  - The strings passed to `PRINTER' may not necessarily be zero-terminated, and
 *    a second argument is passed that indicates the absolute length in characters.
 * Supported extensions:
 *  - `%q'-format mode: Semantics equivalent to `%s', this modifier escapes the string using
 *                        `format_wescape' with flags set of 'FORMAT_ESCAPE_FNONE', or
 *                        `PRINTF_FLAG_PREFIX' when the '#' flag was used (e.g.: `%#q').
 *  - `%~s'    [KERNEL-ONLY] Print a string from a user-space pointer (may be combined to something like `%~.?s')
 *  - `%.*s'   Instead of reading an `int' and dealing with undefined behavior when negative, an `unsigned int' is read.
 *  - `%.?s'   Similar to `%.*s', but takes an `size_t' from the argument list instead of an `unsigned int', as well as define
 *             a fixed-length buffer size for string/quote formats (thus allowing you to print '\0' characters after quoting)
 *  - `%$s'    Same as `%.?s'
 *  - `%Qs'    Same as `%q'
 *  - `%Qc'    Print an escaped character.
 *  - `%I'     length modifier: Integral length equivalent to sizeof(size_t).
 *  - `%I8'    length modifier: Integral length equivalent to sizeof(int8_t).
 *  - `%I16'   length modifier: Integral length equivalent to sizeof(int16_t).
 *  - `%I32'   length modifier: Integral length equivalent to sizeof(int32_t).
 *  - `%I64'   length modifier: Integral length equivalent to sizeof(int64_t).
 *  - `%[...]' Extended formating options, allowing for additional formating options:
 *             - `%[errno]': printf("%[errno]", EAGAIN); // Print human-readable information about the error 'EAGAIN'
 * >>> Possible (and actual) uses:
 *  - printf:           Unbuffered output into any kind of stream/file.
 *  - sprintf/snprintf: Unsafe/Counted string formatting into a user-supplied buffer.
 *  - strdupf:          Output into dynamically allocated heap memory,
 *                      increasing the buffer when it gets filled completely.
 *  - syslog:           Unbuffered system-log output.
 *  - ...               There are a _lot_ more... */
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((1, 3)),__SSIZE_TYPE__,__NOTHROW_NCX,__localdep_format_vwprintf,(__pwformatprinter __printer, void *__arg, __WCHAR_TYPE__ const *__restrict __format, __builtin_va_list __args),format_vwprintf,(__printer,__arg,__format,__args))
#else /* LIBC: format_vwprintf */
#include <local/parts.wchar.format-printer/format_vwprintf.h>
/* Generic printf implementation
 * Taking a regular printf-style format string and arguments, these
 * functions will call the given `PRINTER' callback with various strings
 * that, when put together, result in the desired formated text.
 *  - `PRINTER' obviously is called with the text parts in their correct order
 *  - If `PRINTER' returns '< 0', the function returns immediately,
 *    yielding that same value. Otherwise, format_printf() returns
 *    the sum of all return values from `PRINTER'.
 *  - The strings passed to `PRINTER' may not necessarily be zero-terminated, and
 *    a second argument is passed that indicates the absolute length in characters.
 * Supported extensions:
 *  - `%q'-format mode: Semantics equivalent to `%s', this modifier escapes the string using
 *                        `format_wescape' with flags set of 'FORMAT_ESCAPE_FNONE', or
 *                        `PRINTF_FLAG_PREFIX' when the '#' flag was used (e.g.: `%#q').
 *  - `%~s'    [KERNEL-ONLY] Print a string from a user-space pointer (may be combined to something like `%~.?s')
 *  - `%.*s'   Instead of reading an `int' and dealing with undefined behavior when negative, an `unsigned int' is read.
 *  - `%.?s'   Similar to `%.*s', but takes an `size_t' from the argument list instead of an `unsigned int', as well as define
 *             a fixed-length buffer size for string/quote formats (thus allowing you to print '\0' characters after quoting)
 *  - `%$s'    Same as `%.?s'
 *  - `%Qs'    Same as `%q'
 *  - `%Qc'    Print an escaped character.
 *  - `%I'     length modifier: Integral length equivalent to sizeof(size_t).
 *  - `%I8'    length modifier: Integral length equivalent to sizeof(int8_t).
 *  - `%I16'   length modifier: Integral length equivalent to sizeof(int16_t).
 *  - `%I32'   length modifier: Integral length equivalent to sizeof(int32_t).
 *  - `%I64'   length modifier: Integral length equivalent to sizeof(int64_t).
 *  - `%[...]' Extended formating options, allowing for additional formating options:
 *             - `%[errno]': printf("%[errno]", EAGAIN); // Print human-readable information about the error 'EAGAIN'
 * >>> Possible (and actual) uses:
 *  - printf:           Unbuffered output into any kind of stream/file.
 *  - sprintf/snprintf: Unsafe/Counted string formatting into a user-supplied buffer.
 *  - strdupf:          Output into dynamically allocated heap memory,
 *                      increasing the buffer when it gets filled completely.
 *  - syslog:           Unbuffered system-log output.
 *  - ...               There are a _lot_ more... */
#define __localdep_format_vwprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(format_vwprintf))
#endif /* format_vwprintf... */
#endif /* !____localdep_format_vwprintf_defined */

/* Dependency: "file_wprinter_unlocked" from "wchar" */
#ifndef ____localdep_file_wprinter_unlocked_defined
#define ____localdep_file_wprinter_unlocked_defined 1
#if defined(__CRT_HAVE_file_wprinter_unlocked)
/* Same as `file_wprinter()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,__localdep_file_wprinter_unlocked,(void *__arg, __WCHAR_TYPE__ const *__restrict __data, __SIZE_TYPE__ __datalen),file_wprinter_unlocked,(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_file_wprinter)
/* Same as `file_wprinter()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,__localdep_file_wprinter_unlocked,(void *__arg, __WCHAR_TYPE__ const *__restrict __data, __SIZE_TYPE__ __datalen),file_wprinter,(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_fputwc_unlocked) || defined(__CRT_HAVE__fputwc_nolock)
#include <local/wchar/file_wprinter_unlocked.h>
/* Same as `file_wprinter()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
#define __localdep_file_wprinter_unlocked (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(file_wprinter_unlocked))
#else /* CUSTOM: file_wprinter_unlocked */
#undef ____localdep_file_wprinter_unlocked_defined
#endif /* file_wprinter_unlocked... */
#endif /* !____localdep_file_wprinter_unlocked_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(vfwprintf_unlocked) __ATTR_LIBC_WPRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T
(__LIBCCALL __LIBC_LOCAL_NAME(vfwprintf_unlocked))(__FILE *__restrict __stream,
                                                   __WCHAR_TYPE__ const *__restrict __format,
                                                   __builtin_va_list __args) __THROWS(...) {
#line 1050 "kos/src/libc/magic/wchar.c"
	return (__STDC_INT_AS_SSIZE_T)__localdep_format_vwprintf(&__localdep_file_wprinter_unlocked, __stream, __format, __args);
}
__NAMESPACE_LOCAL_END
#endif /* (defined(__CRT_HAVE_fputwc_unlocked) || defined(__CRT_HAVE__fputwc_nolock) || defined(__CRT_HAVE_file_wprinter_unlocked) || defined(__CRT_HAVE_file_wprinter)) */
#endif /* !__local_vfwprintf_unlocked_defined */
