/* HASH 0x1646f9d */
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
#ifndef GUARD_LIBC_AUTO_STDIO_C
#define GUARD_LIBC_AUTO_STDIO_C 1

#include "../api.h"
#include <hybrid/typecore.h>
#include <kos/types.h>
#include "stdio.h"
#include "format-printer.h"
#include "unicode.h"

DECL_BEGIN

/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
INTERN ATTR_LIBC_PRINTF(2, 0) NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.printf.vsprintf") __STDC_INT_AS_SSIZE_T
NOTHROW_NCX(LIBCCALL libc_vsprintf)(char *__restrict dest,
                                    char const *__restrict format,
                                    va_list args) {
#line 940 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SSIZE_T result;
	result = (__STDC_INT_AS_SSIZE_T)libc_format_vprintf(&libc_format_sprintf_printer,
	                                                 (void *)&dest,
	                                                 format,
	                                                 args);
	if (result >= 0)
		*dest = '\0';
	return result;
}

/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
INTERN ATTR_LIBC_PRINTF(2, 3) NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.printf.sprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc_sprintf)(char *__restrict buf,
                                    char const *__restrict format,
                                    ...) {
#line 957 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc_vsprintf(buf, format, args);
	va_end(args);
	return result;
}

#ifndef ____format_snprintf_data_defined
#define ____format_snprintf_data_defined 1
struct __format_snprintf_data {
	char         *__sd_buffer; /* [0..sd_bufsiz] Pointer to the next memory location to which to write. */
	__SIZE_TYPE__ __sd_bufsiz; /* Remaining buffer size. */
};
#endif /* !____format_snprintf_data_defined */
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
INTERN ATTR_LIBC_PRINTF(3, 0) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.printf.vsnprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc_vsnprintf)(char *__restrict buf,
                                     size_t buflen,
                                     char const *__restrict format,
                                     va_list args) {
#line 979 "kos/src/libc/magic/stdio.c"
	struct __format_snprintf_data data;
	__STDC_INT_AS_SSIZE_T result;
	data.__sd_buffer = buf;
	data.__sd_bufsiz = buflen;
	result = (__STDC_INT_AS_SSIZE_T)libc_format_vprintf(&libc_format_snprintf_printer,
	                                                (void *)&data,
	                                                 format,
	                                                 args);
	if (result >= 0 && data.__sd_bufsiz != 0)
		*data.__sd_buffer = '\0';
	return result;
}

/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
INTERN ATTR_LIBC_PRINTF(3, 4) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.printf.snprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc_snprintf)(char *__restrict buf,
                                     size_t buflen,
                                     char const *__restrict format,
                                     ...) {
#line 999 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc_vsnprintf(buf, buflen, format, args);
	va_end(args);
	return result;
}

#ifndef __KERNEL__
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.FILE.locked.write.utility.fflush") int
(LIBCCALL libc_fflush)(FILE *stream) __THROWS(...) {
#line 354 "kos/src/libc/magic/stdio.c"
	return stream ? 0 : libc__flushall();
}

#include <hybrid/typecore.h>
#ifndef __EOF
#ifdef EOF
#define __EOF  EOF
#else
#define __EOF (-1)
#endif
#endif
__LOCAL_LIBC(vsscanf_getc) __SSIZE_TYPE__ (__LIBCCALL __vsscanf_getc)(void *__arg) {
	__CHAR32_TYPE__ __result = libc_unicode_readutf8((char const **)__arg);
	return __result ? __result : __EOF;
}
__LOCAL_LIBC(vsscanf_ungetc) __SSIZE_TYPE__ (__LIBCCALL __vsscanf_ungetc)(void *__arg, __CHAR32_TYPE__ __UNUSED(__ch)) {
	libc_unicode_readutf8_rev((char const **)__arg);
	return 0;
}
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
INTERN ATTR_LIBC_SCANF(2, 0) WUNUSED NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.scanf.vsscanf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc_vsscanf)(char const *__restrict input,
                                   char const *__restrict format,
                                   va_list args) {
#line 918 "kos/src/libc/magic/stdio.c"
	return libc_format_vscanf(&__vsscanf_getc, &__vsscanf_ungetc, (void *)&input, format, args);
}

/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
INTERN ATTR_LIBC_SCANF(2, 3) NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.unicode.static.format.scanf.sscanf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc_sscanf)(char const *__restrict input,
                                   char const *__restrict format,
                                   ...) {
#line 930 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc_vsscanf(input, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_WEAK ATTR_SECTION(".text.crt.FILE.unlocked.seek.seek.flushall_unlocked") int
(LIBCCALL libc_flushall_unlocked)(void) __THROWS(...) {
#line 1745 "kos/src/libc/magic/stdio.c"
#if defined(__CRT_HAVE_fflush_unlocked) || defined(__CRT_HAVE__fflush_nolock)
	return libc_fflush_unlocked(NULL);
#else
	return libc__flushall();
#endif
}

INTERN ATTR_WEAK ATTR_SECTION(".text.crt.dos.FILE.locked.write.utility._flushall") int
(LIBCCALL libc__flushall)(void) __THROWS(...) {
#line 1988 "kos/src/libc/magic/stdio.c"
#if defined(__CRT_HAVE_fflush) || defined(__CRT_HAVE_fflush_unlocked) || defined(__CRT_HAVE__fflush_nolock)
	return libc_fflush(NULL);
#else
	return 0;
#endif
}

INTERN ATTR_LIBC_SCANF(2, 4) WUNUSED NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.scanf._vsscanf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsscanf_l)(char const *__restrict input,
                                      char const *__restrict format,
                                      locale_t locale,
                                      va_list args) {
#line 2071 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc_vsscanf(input, format, args);
}

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
	__result = libc_unicode_readutf8_n(
		&((struct __vsnscanf_data *)__arg)->__ptr,
		((struct __vsnscanf_data *)__arg)->__end);
	return __result ? __result : __EOF;
}
__LOCAL_LIBC(vsnscanf_ungetc) __SSIZE_TYPE__ (__LIBCCALL __vsnscanf_ungetc)(void *__arg, __CHAR32_TYPE__ __UNUSED(__ch)) {
	libc_unicode_readutf8_rev(&((struct __vsnscanf_data *)__arg)->__ptr);
	return 0;
}
INTERN WUNUSED ATTR_LIBC_SCANF(3, 4) NONNULL((1, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.scanf._vsnscanf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnscanf)(char const *__restrict input,
                                     size_t inputlen,
                                     char const *__restrict format,
                                     va_list args) {
#line 2109 "kos/src/libc/magic/stdio.c"
	struct __vsnscanf_data data;
	data.__ptr = input;
	data.__end = input + inputlen;
	return libc_format_vscanf(&__vsnscanf_getc, &__vsnscanf_ungetc, (void *)&data, format, args);
}

INTERN ATTR_LIBC_SCANF(3, 5) NONNULL((1, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.scanf._vsnscanf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnscanf_l)(char const *__restrict input,
                                       size_t inputlen,
                                       char const *__restrict format,
                                       locale_t locale,
                                       va_list args) {
#line 2122 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc__vsnscanf(input, inputlen, format, args);
}

INTERN ATTR_LIBC_SCANF(3, 4) NONNULL((1, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.scanf._snscanf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snscanf)(char const *__restrict input,
                                     size_t inputlen,
                                     char const *__restrict format,
                                     ...) {
#line 2144 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vsnscanf(input, inputlen, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_SCANF(3, 5) NONNULL((1, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.scanf._snscanf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snscanf_l)(char const *__restrict input,
                                       size_t inputlen,
                                       char const *__restrict format,
                                       locale_t locale,
                                       ...) {
#line 2149 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsnscanf_l(input, inputlen, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(2, 0) NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vsprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsprintf_l)(char *__restrict buf,
                                       char const *__restrict format,
                                       locale_t locale,
                                       va_list args) {
#line 2177 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc_vsprintf(buf, format, args);
}

INTERN ATTR_LIBC_PRINTF_P(3, 0) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._vsprintf_p") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsprintf_p)(char *__restrict buf,
                                       size_t bufsize,
                                       char const *__restrict format,
                                       va_list args) {
#line 2190 "kos/src/libc/magic/stdio.c"
	(void)buf;
	(void)bufsize;
	(void)format;
	(void)args;
	/* TODO */
	return 0;
}

INTERN ATTR_LIBC_PRINTF_P(3, 0) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vsprintf_p_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsprintf_p_l)(char *__restrict buf,
                                         size_t bufsize,
                                         char const *__restrict format,
                                         locale_t locale,
                                         va_list args) {
#line 2202 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc__vsprintf_p(buf, bufsize, format, args);
}

INTERN ATTR_LIBC_PRINTF(2, 4) NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._sprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__sprintf_l)(char *__restrict buf,
                                       char const *__restrict format,
                                       locale_t locale,
                                       ...) {
#line 2209 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsprintf_l(buf, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(3, 5) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._sprintf_s_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__sprintf_s_l)(char *__restrict buf,
                                         size_t bufsize,
                                         char const *__restrict format,
                                         locale_t locale,
                                         ...) {
#line 2210 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsprintf_s_l(buf, bufsize, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF_P(3, 4) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._sprintf_p") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__sprintf_p)(char *__restrict buf,
                                       size_t bufsize,
                                       char const *__restrict format,
                                       ...) {
#line 2211 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vsprintf_p(buf, bufsize, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF_P(3, 5) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._sprintf_p_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__sprintf_p_l)(char *__restrict buf,
                                         size_t bufsize,
                                         char const *__restrict format,
                                         locale_t locale,
                                         ...) {
#line 2212 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsprintf_p_l(buf, bufsize, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(1, 0) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._vscprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vscprintf)(char const *__restrict format,
                                      va_list args) {
#line 2217 "kos/src/libc/magic/stdio.c"
	return libc_vsnprintf(NULL, 0, format, args);
}

INTERN ATTR_LIBC_PRINTF(1, 2) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._scprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__scprintf)(char const *__restrict format,
                                      ...) {
#line 2224 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vscprintf(format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(1, 0) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vscprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vscprintf_l)(char const *__restrict format,
                                        locale_t locale,
                                        va_list args) {
#line 2231 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc__vscprintf(format, args);
}

INTERN ATTR_LIBC_PRINTF_P(1, 0) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._vscprintf_p") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vscprintf_p)(char const *__restrict format,
                                        va_list args) {
#line 2238 "kos/src/libc/magic/stdio.c"
	(void)format;
	(void)args;
	/* TODO */
	return 0;
}

INTERN ATTR_LIBC_PRINTF_P(1, 0) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vscprintf_p_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vscprintf_p_l)(char const *__restrict format,
                                          locale_t locale,
                                          va_list args) {
#line 2247 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc__vscprintf_p(format, args);
}

INTERN ATTR_LIBC_PRINTF(1, 3) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._scprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__scprintf_l)(char const *__restrict format,
                                        locale_t locale,
                                        ...) {
#line 2254 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vscprintf_l(format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF_P(1, 2) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._scprintf_p") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__scprintf_p)(char const *__restrict format,
                                        ...) {
#line 2258 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vscprintf_p(format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF_P(1, 3) WUNUSED NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._scprintf_p_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__scprintf_p_l)(char const *__restrict format,
                                          locale_t locale,
                                          ...) {
#line 2262 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vscprintf_p_l(format, locale, args);
	va_end(args);
	return result;
}

/* WARNING: This function returns the number of written character. - Not the required buffer size! */
INTERN ATTR_LIBC_PRINTF(3, 0) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._vsnprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnprintf)(char *__restrict buf,
                                      size_t bufsize,
                                      char const *__restrict format,
                                      va_list args) {
#line 2269 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	result = libc_vsnprintf(buf, bufsize, format, args);
	if (result > bufsize)
		result = bufsize;
	return result;
}

INTERN ATTR_LIBC_PRINTF(3, 0) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vsnprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnprintf_l)(char *__restrict buf,
                                        size_t bufsize,
                                        char const *__restrict format,
                                        locale_t locale,
                                        va_list args) {
#line 2280 "kos/src/libc/magic/stdio.c"
	(void)locale;
	return libc__vsnprintf(buf, bufsize, format, args);
}

INTERN ATTR_LIBC_PRINTF(4, 0) NONNULL((4))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._vsnprintf_s") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnprintf_s)(char *__restrict buf,
                                        size_t bufsize,
                                        size_t buflen,
                                        char const *__restrict format,
                                        va_list args) {
#line 2293 "kos/src/libc/magic/stdio.c"
	(void)buflen;
	return libc__vsnprintf(buf, bufsize, format, args);
}

INTERN ATTR_LIBC_PRINTF(4, 0) NONNULL((4))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._vsnprintf_s_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(LIBCCALL libc__vsnprintf_s_l)(char *__restrict buf,
                                          size_t bufsize,
                                          size_t buflen,
                                          char const *__restrict format,
                                          locale_t locale,
                                          va_list args) {
#line 2300 "kos/src/libc/magic/stdio.c"
	(void)buflen;
	(void)locale;
	return libc__vsnprintf(buf, bufsize, format, args);
}

INTERN ATTR_LIBC_PRINTF(3, 4) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._snprintf") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf)(char *__restrict buf,
                                      size_t bufsize,
                                      char const *__restrict format,
                                      ...) {
#line 2307 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vsnprintf(buf, bufsize, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(3, 5) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._snprintf_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf_l)(char *__restrict buf,
                                        size_t bufsize,
                                        char const *__restrict format,
                                        locale_t locale,
                                        ...) {
#line 2310 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsnprintf_l(buf, bufsize, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(3, 4) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._snprintf_c") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf_c)(char *__restrict buf,
                                        size_t bufsize,
                                        char const *__restrict format,
                                        ...) {
#line 2313 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vsnprintf_c(buf, bufsize, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(3, 5) NONNULL((3))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._snprintf_c_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf_c_l)(char *__restrict buf,
                                          size_t bufsize,
                                          char const *__restrict format,
                                          locale_t locale,
                                          ...) {
#line 2316 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsnprintf_c_l(buf, bufsize, format, locale, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(4, 5) NONNULL((4))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.static.format.printf._snprintf_s") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf_s)(char *__restrict buf,
                                        size_t bufsize,
                                        size_t buflen,
                                        char const *__restrict format,
                                        ...) {
#line 2319 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, format);
	result = libc__vsnprintf_s(buf, bufsize, buflen, format, args);
	va_end(args);
	return result;
}

INTERN ATTR_LIBC_PRINTF(4, 6) NONNULL((4))
ATTR_WEAK ATTR_SECTION(".text.crt.dos.unicode.locale.format.printf._snprintf_s_l") __STDC_INT_AS_SIZE_T
NOTHROW_NCX(VLIBCCALL libc__snprintf_s_l)(char *__restrict buf,
                                          size_t bufsize,
                                          size_t buflen,
                                          char const *__restrict format,
                                          locale_t locale,
                                          ...) {
#line 2322 "kos/src/libc/magic/stdio.c"
	__STDC_INT_AS_SIZE_T result;
	va_list args;
	va_start(args, locale);
	result = libc__vsnprintf_s_l(buf, bufsize, buflen, format, locale, args);
	va_end(args);
	return result;
}

#endif /* !__KERNEL__ */
#undef sprintf
#undef snprintf
#undef sprintf_s
DEFINE_PUBLIC_WEAK_ALIAS(vsprintf, libc_vsprintf);
DEFINE_PUBLIC_WEAK_ALIAS(sprintf, libc_sprintf);
DEFINE_PUBLIC_WEAK_ALIAS(vsnprintf, libc_vsnprintf);
DEFINE_PUBLIC_WEAK_ALIAS(vsprintf_s, libc_vsnprintf);
DEFINE_PUBLIC_WEAK_ALIAS(snprintf, libc_snprintf);
DEFINE_PUBLIC_WEAK_ALIAS(sprintf_s, libc_snprintf);
#ifndef __KERNEL__
#undef sscanf
#undef _snscanf
#undef _snscanf_s
#undef _snscanf_l
#undef _snscanf_s_l
#undef _sprintf_l
#undef _sprintf_s_l
#undef _sprintf_p
#undef _sprintf_p_l
#undef _scprintf
#undef _scprintf_l
#undef _scprintf_p
#undef _scprintf_p_l
#undef _snprintf
#undef _snprintf_l
#undef _snprintf_c
#undef _snprintf_c_l
#undef _snprintf_s
#undef _snprintf_s_l
DEFINE_PUBLIC_WEAK_ALIAS(fflush, libc_fflush);
DEFINE_PUBLIC_WEAK_ALIAS(fflush_unlocked, libc_fflush);
DEFINE_PUBLIC_WEAK_ALIAS(_fflush_nolock, libc_fflush);
DEFINE_PUBLIC_WEAK_ALIAS(vsscanf, libc_vsscanf);
DEFINE_PUBLIC_WEAK_ALIAS(_vsscanf, libc_vsscanf);
DEFINE_PUBLIC_WEAK_ALIAS(_vsscanf_s, libc_vsscanf);
DEFINE_PUBLIC_WEAK_ALIAS(sscanf, libc_sscanf);
DEFINE_PUBLIC_WEAK_ALIAS(flushall_unlocked, libc_flushall_unlocked);
DEFINE_PUBLIC_WEAK_ALIAS(_flushall, libc__flushall);
DEFINE_PUBLIC_WEAK_ALIAS(_snscanf, libc__snscanf);
DEFINE_PUBLIC_WEAK_ALIAS(_snscanf_s, libc__snscanf);
DEFINE_PUBLIC_WEAK_ALIAS(_snscanf_l, libc__snscanf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_snscanf_s_l, libc__snscanf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsprintf_l, libc__vsprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsprintf_p, libc__vsprintf_p);
DEFINE_PUBLIC_WEAK_ALIAS(_vsprintf_p_l, libc__vsprintf_p_l);
DEFINE_PUBLIC_WEAK_ALIAS(_sprintf_l, libc__sprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_sprintf_s_l, libc__sprintf_s_l);
DEFINE_PUBLIC_WEAK_ALIAS(_sprintf_p, libc__sprintf_p);
DEFINE_PUBLIC_WEAK_ALIAS(_sprintf_p_l, libc__sprintf_p_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vscprintf, libc__vscprintf);
DEFINE_PUBLIC_WEAK_ALIAS(_scprintf, libc__scprintf);
DEFINE_PUBLIC_WEAK_ALIAS(_vscprintf_l, libc__vscprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vscprintf_p, libc__vscprintf_p);
DEFINE_PUBLIC_WEAK_ALIAS(_vscprintf_p_l, libc__vscprintf_p_l);
DEFINE_PUBLIC_WEAK_ALIAS(_scprintf_l, libc__scprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_scprintf_p, libc__scprintf_p);
DEFINE_PUBLIC_WEAK_ALIAS(_scprintf_p_l, libc__scprintf_p_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf, libc__vsnprintf);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf_c, libc__vsnprintf);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf_l, libc__vsnprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsprintf_s_l, libc__vsnprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf_c_l, libc__vsnprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf_s, libc__vsnprintf_s);
DEFINE_PUBLIC_WEAK_ALIAS(_vsnprintf_s_l, libc__vsnprintf_s_l);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf, libc__snprintf);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf_l, libc__snprintf_l);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf_c, libc__snprintf_c);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf_c_l, libc__snprintf_c_l);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf_s, libc__snprintf_s);
DEFINE_PUBLIC_WEAK_ALIAS(_snprintf_s_l, libc__snprintf_s_l);
#endif /* !__KERNEL__ */

DECL_END

#endif /* !GUARD_LIBC_AUTO_STDIO_C */
