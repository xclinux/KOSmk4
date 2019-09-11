/* HASH 0x2082e1bc */
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
#ifndef __local_c32execle_defined
#if ((defined(__CRT_HAVE_wexecve) && __SIZEOF_WCHAR_T__ == 4) || (defined(__CRT_HAVE__wexecve) && __SIZEOF_WCHAR_T__ == 4))
#define __local_c32execle_defined 1
#include <parts/redirect-exec.h>
/* Dependency: "c32execve" from "parts.uchar.process" */
#ifndef ____localdep_c32execve_defined
#define ____localdep_c32execve_defined 1
#if defined(__CRT_HAVE_wexecve) && (__SIZEOF_WCHAR_T__ == 4)
__CREDIRECT(__ATTR_NONNULL((2, 3)) __ATTR_NONNULL((1, 2, 3)),int,__NOTHROW_RPC,__localdep_c32execve,(__CHAR32_TYPE__ const *__restrict __path, __T32ARGV, __T32ENVP),wexecve,(__path, ___argv, ___envp))
#elif defined(__CRT_HAVE__wexecve) && (__SIZEOF_WCHAR_T__ == 4)
__CREDIRECT(__ATTR_NONNULL((2, 3)) __ATTR_NONNULL((1, 2, 3)),int,__NOTHROW_RPC,__localdep_c32execve,(__CHAR32_TYPE__ const *__restrict __path, __T32ARGV, __T32ENVP),_wexecve,(__path, ___argv, ___envp))
#else /* LIBC: c32execve */
#undef ____localdep_c32execve_defined
#endif /* c32execve... */
#endif /* !____localdep_c32execve_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(c32execle) __ATTR_SENTINEL __ATTR_NONNULL((1)) int
__NOTHROW_RPC(__VLIBCCALL __LIBC_LOCAL_NAME(c32execle))(__CHAR32_TYPE__ const *__restrict __path,
                                                        __CHAR32_TYPE__ const *__args,
                                                        ... /*, (char32_t *)NULL, char32_t **environ*/) {
#line 140 "kos/src/libc/magic/parts.uchar.process.c"
	__REDIRECT_EXECLE(__CHAR32_TYPE__, __localdep_c32execve, __path, __args)
}
__NAMESPACE_LOCAL_END
#endif /* ((defined(__CRT_HAVE_wexecve) && __SIZEOF_WCHAR_T__ == 4) || (defined(__CRT_HAVE__wexecve) && __SIZEOF_WCHAR_T__ == 4)) */
#endif /* !__local_c32execle_defined */
