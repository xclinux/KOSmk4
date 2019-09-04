/* HASH 0xc1f03a38 */
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
#ifndef __local__vsnscanf_defined
#define __local__vsnscanf_defined 1
#include <bits/format-printer.h>
/* Dependency: "format_vscanf" from "format-printer" */
#ifndef ____localdep_format_vscanf_defined
#define ____localdep_format_vscanf_defined 1
#if defined(__CRT_HAVE_format_vscanf)
/* Generic scanf implementation
 * Taking a regular scanf-style format string and argument, these
 * functions will call the given `SCANNER' function which in
 * return should successively yield a character at a time from
 * some kind of input source.
 *  - If `SCANNER' returns `< 0', scanning aborts and that value is returned.
 *    Otherwise, the function returns the amount of successfully parsed arguments.
 *  - The user may use `SCANNER' to track the last read character to get
 *    additional information about what character caused the scan to fail.
 *  - The given `SCANNER' should also indicate EOF by returning `NUL'
 *  - This implementation supports the following extensions:
 *    - `%[A-Z]'   -- Character ranges in scan patterns
 *    - `%[^abc]'  -- Inversion of a scan pattern
 *    - `"\n"'     -- Skip any kind of linefeed (`"\n"', `"\r"', `"\r\n"')
 *    - `%$s'      -- `$'-modifier, available for any format outputting a string.
 *                    This modifier reads a `size_t' from the argument list,
 *                    that specifies the size of the following string buffer:
 *                 >> char buffer[64];
 *                 >> sscanf(data, "My name is %.?s\n", sizeof(buffer), buffer);
 * format -> %[*|?][width][length]specifier
 * @return: 0 :  No data could be scanned.
 * @return: * :  The total number of successfully scanned arguments.
 * @return: EOF: `PGETC' returned EOF the first time an attempt at reading was made */
__CREDIRECT(__ATTR_LIBC_SCANF(4, 0) __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,__localdep_format_vscanf,(__pformatgetc __pgetc, __pformatungetc __pungetc, void *__arg, char const *__restrict __format, __builtin_va_list __args),format_vscanf,(__pgetc,__pungetc,__arg,__format,__args)) __THROWS(...)
#else /* LIBC: format_vscanf */
#include <local/format-printer/format_vscanf.h>
/* Generic scanf implementation
 * Taking a regular scanf-style format string and argument, these
 * functions will call the given `SCANNER' function which in
 * return should successively yield a character at a time from
 * some kind of input source.
 *  - If `SCANNER' returns `< 0', scanning aborts and that value is returned.
 *    Otherwise, the function returns the amount of successfully parsed arguments.
 *  - The user may use `SCANNER' to track the last read character to get
 *    additional information about what character caused the scan to fail.
 *  - The given `SCANNER' should also indicate EOF by returning `NUL'
 *  - This implementation supports the following extensions:
 *    - `%[A-Z]'   -- Character ranges in scan patterns
 *    - `%[^abc]'  -- Inversion of a scan pattern
 *    - `"\n"'     -- Skip any kind of linefeed (`"\n"', `"\r"', `"\r\n"')
 *    - `%$s'      -- `$'-modifier, available for any format outputting a string.
 *                    This modifier reads a `size_t' from the argument list,
 *                    that specifies the size of the following string buffer:
 *                 >> char buffer[64];
 *                 >> sscanf(data, "My name is %.?s\n", sizeof(buffer), buffer);
 * format -> %[*|?][width][length]specifier
 * @return: 0 :  No data could be scanned.
 * @return: * :  The total number of successfully scanned arguments.
 * @return: EOF: `PGETC' returned EOF the first time an attempt at reading was made */
#define __localdep_format_vscanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(format_vscanf))
#endif /* format_vscanf... */
#endif /* !____localdep_format_vscanf_defined */

/* Dependency: "unicode_readutf8_n" from "unicode" */
#ifndef ____localdep_unicode_readutf8_n_defined
#define ____localdep_unicode_readutf8_n_defined 1
#if defined(__CRT_HAVE_unicode_readutf8_n)
/* Same as `unicode_readutf8()', but don't read past `text_end' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__CHAR32_TYPE__,__NOTHROW_NCX,__localdep_unicode_readutf8_n,(/*utf-8*/char const **__restrict __ptext, char const *__text_end),unicode_readutf8_n,(__ptext,__text_end))
#else /* LIBC: unicode_readutf8_n */
#include <local/unicode/unicode_readutf8_n.h>
/* Same as `unicode_readutf8()', but don't read past `text_end' */
#define __localdep_unicode_readutf8_n (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(unicode_readutf8_n))
#endif /* unicode_readutf8_n... */
#endif /* !____localdep_unicode_readutf8_n_defined */

/* Dependency: "unicode_readutf8_rev" from "unicode" */
#ifndef ____localdep_unicode_readutf8_rev_defined
#define ____localdep_unicode_readutf8_rev_defined 1
#if defined(__CRT_HAVE_unicode_readutf8_rev)
/* Same as `unicode_readutf8', but read backwards, with `*ptext'
 * starting out as a pointer after the character to be read, before
 * being updated to point to the start of the character that was read */
__CREDIRECT(__ATTR_NONNULL((1)),__CHAR32_TYPE__,__NOTHROW_NCX,__localdep_unicode_readutf8_rev,(/*utf-8*/char const **__restrict __ptext),unicode_readutf8_rev,(__ptext))
#else /* LIBC: unicode_readutf8_rev */
#include <local/unicode/unicode_readutf8_rev.h>
/* Same as `unicode_readutf8', but read backwards, with `*ptext'
 * starting out as a pointer after the character to be read, before
 * being updated to point to the start of the character that was read */
#define __localdep_unicode_readutf8_rev (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(unicode_readutf8_rev))
#endif /* unicode_readutf8_rev... */
#endif /* !____localdep_unicode_readutf8_rev_defined */

__NAMESPACE_LOCAL_BEGIN
#include <hybrid/typecore.h>
#ifndef __EOF
#ifdef EOF
#define __EOF  EOF
#else
#define __EOF (-1)
#endif
#endif
struct __vsnscanf_data {
	char const *__ptr;
	char const *__end;
};
__LOCAL_LIBC(vsnscanf_getc) __SSIZE_TYPE__ (__LIBCCALL __vsnscanf_getc)(void *__arg) {
	__CHAR32_TYPE__ __result;
	__result = __localdep_unicode_readutf8_n(
		&((struct __vsnscanf_data *)__arg)->__ptr,
		((struct __vsnscanf_data *)__arg)->__end);
	return __result ? __result : __EOF;
}
__LOCAL_LIBC(vsnscanf_ungetc) __SSIZE_TYPE__ (__LIBCCALL __vsnscanf_ungetc)(void *__arg, __CHAR32_TYPE__ __UNUSED(__ch)) {
	__localdep_unicode_readutf8_rev(&((struct __vsnscanf_data *)__arg)->__ptr);
	return 0;
}
__LOCAL_LIBC(_vsnscanf) __ATTR_WUNUSED __ATTR_LIBC_SCANF(3, 4) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(_vsnscanf))(char const *__restrict __input,
                                                       __SIZE_TYPE__ __inputlen,
                                                       char const *__restrict __format,
                                                       __builtin_va_list __args) {
#line 2107 "kos/src/libc/magic/stdio.c"
	struct __vsnscanf_data __data;
	__data.__ptr = __input;
	__data.__end = __input + __inputlen;
	return __localdep_format_vscanf(&__vsnscanf_getc, &__vsnscanf_ungetc, (void *)&__data, __format, __args);
}
__NAMESPACE_LOCAL_END
#endif /* !__local__vsnscanf_defined */
