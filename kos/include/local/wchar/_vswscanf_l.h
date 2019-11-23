/* HASH CRC-32:0x74a22822 */
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
#ifndef __local__vswscanf_l_defined
#define __local__vswscanf_l_defined 1
/* Dependency: "vswscanf" from "wchar" */
#ifndef ____localdep_vswscanf_defined
#define ____localdep_vswscanf_defined 1
#ifdef __std___localdep_vswscanf_defined
__NAMESPACE_STD_USING(__localdep_vswscanf)
#elif defined(__CRT_HAVE_vswscanf)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __ATTR_LIBC_WSCANF(2, 0),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,__localdep_vswscanf,(__WCHAR_TYPE__ const *__restrict __src, __WCHAR_TYPE__ const *__restrict __format, __builtin_va_list __args),vswscanf,(__src,__format,__args))
#else /* LIBC: vswscanf */
#include <local/wchar/vswscanf.h>
#define __localdep_vswscanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vswscanf))
#endif /* vswscanf... */
#endif /* !____localdep_vswscanf_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(_vswscanf_l) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(_vswscanf_l))(__WCHAR_TYPE__ const *__src,
                                                         __WCHAR_TYPE__ const *__format,
                                                         __locale_t __locale,
                                                         __builtin_va_list __args) {
#line 2101 "kos/src/libc/magic/wchar.c"
	(void)__locale;
	return __localdep_vswscanf(__src, __format, __args);
}
__NAMESPACE_LOCAL_END
#endif /* !__local__vswscanf_l_defined */
