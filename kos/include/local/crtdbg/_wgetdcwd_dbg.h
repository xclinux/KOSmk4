/* HASH CRC-32:0xe687cb1e */
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
#ifndef __local__wgetdcwd_dbg_defined
#define __local__wgetdcwd_dbg_defined 1
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(_wgetdcwd_dbg) __ATTR_WUNUSED __WCHAR16_TYPE__ *
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(_wgetdcwd_dbg))(int __driveno,
                                                           __WCHAR16_TYPE__ *__buf,
                                                           __STDC_INT_AS_SIZE_T __buflen,
                                                           int __block_type,
                                                           char const *__filename,
                                                           int __line) {
#line 505 "kos/src/libc/magic/crtdbg.c"
	(void)__block_type;
	(void)__filename;
	(void)__line;
	(void)__driveno;
	(void)__buf;
	(void)__buflen;
	/* TODO: c16getdcwd() */
	return __NULLPTR;
}
__NAMESPACE_LOCAL_END
#endif /* !__local__wgetdcwd_dbg_defined */