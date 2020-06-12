/* HASH CRC-32:0x273f4775 */
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
#ifndef __local_scanf_unlocked_defined
#define __local_scanf_unlocked_defined 1
#include <__crt.h>
#if defined(__CRT_HAVE_vscanf_unlocked) || defined(__CRT_HAVE__vscanf) || (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_vfscanf_unlocked) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE___vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s) || defined(__CRT_HAVE__IO_vfscanf) || ((defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || (defined(__CRT_HAVE_getc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_HAVE_fgetc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_HAVE__IO_getc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE__IO_fread) || defined(__CRT_HAVE_fread)) && (defined(__CRT_HAVE_ungetc_unlocked) || defined(__CRT_HAVE__ungetc_nolock) || defined(__CRT_HAVE_ungetc) || defined(__CRT_HAVE__IO_ungetc)))))
#include <features.h>
__NAMESPACE_LOCAL_BEGIN
/* Dependency: vscanf_unlocked from stdio */
#ifndef __local___localdep_vscanf_unlocked_defined
#define __local___localdep_vscanf_unlocked_defined 1
#ifdef __CRT_HAVE_vscanf_unlocked
__CREDIRECT(__ATTR_WUNUSED __ATTR_LIBC_SCANF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__THROWING,__localdep_vscanf_unlocked,(char const *__restrict __format, __builtin_va_list __args),vscanf_unlocked,(__format,__args))
#elif defined(__CRT_HAVE__vscanf)
__CREDIRECT(__ATTR_WUNUSED __ATTR_LIBC_SCANF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__THROWING,__localdep_vscanf_unlocked,(char const *__restrict __format, __builtin_va_list __args),_vscanf,(__format,__args))
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_vfscanf_unlocked) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE___vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s) || defined(__CRT_HAVE__IO_vfscanf) || ((defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || (defined(__CRT_HAVE_getc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_HAVE_fgetc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_HAVE__IO_getc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))) || (defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE__IO_fread) || defined(__CRT_HAVE_fread)) && (defined(__CRT_HAVE_ungetc_unlocked) || defined(__CRT_HAVE__ungetc_nolock) || defined(__CRT_HAVE_ungetc) || defined(__CRT_HAVE__IO_ungetc))))
__NAMESPACE_LOCAL_END
#include <local/stdio/vscanf_unlocked.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep_vscanf_unlocked __LIBC_LOCAL_NAME(vscanf_unlocked)
#else /* ... */
#undef __local___localdep_vscanf_unlocked_defined
#endif /* !... */
#endif /* !__local___localdep_vscanf_unlocked_defined */
__LOCAL_LIBC(scanf_unlocked) __ATTR_WUNUSED __ATTR_LIBC_SCANF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T
(__VLIBCCALL __LIBC_LOCAL_NAME(scanf_unlocked))(char const *__restrict __format, ...) __THROWS(...) {
	__STDC_INT_AS_SIZE_T __result;
	__builtin_va_list __args;
	__builtin_va_start(__args, __format);
	__result = __localdep_vscanf_unlocked(__format, __args);
	__builtin_va_end(__args);
	return __result;
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_scanf_unlocked_defined
#define __local___localdep_scanf_unlocked_defined 1
#define __localdep_scanf_unlocked __LIBC_LOCAL_NAME(scanf_unlocked)
#endif /* !__local___localdep_scanf_unlocked_defined */
#else /* __CRT_HAVE_vscanf_unlocked || __CRT_HAVE__vscanf || (!__NO_STDSTREAMS && (__CRT_HAVE_vfscanf_unlocked || __CRT_HAVE_vfscanf || __CRT_HAVE___vfscanf || __CRT_HAVE__vfscanf || __CRT_HAVE__vfscanf_s || __CRT_HAVE__IO_vfscanf || ((__CRT_HAVE_fgetc_unlocked || __CRT_HAVE_getc_unlocked || (__CRT_HAVE_getc && (!__CRT_DOS || !__CRT_HAVE__filbuf)) || (__CRT_HAVE_fgetc && (!__CRT_DOS || !__CRT_HAVE__filbuf)) || (__CRT_HAVE__IO_getc && (!__CRT_DOS || !__CRT_HAVE__filbuf)) || (__CRT_DOS && __CRT_HAVE__filbuf) || __CRT_HAVE_fread_unlocked || __CRT_HAVE__fread_nolock || __CRT_HAVE__IO_fread || __CRT_HAVE_fread) && (__CRT_HAVE_ungetc_unlocked || __CRT_HAVE__ungetc_nolock || __CRT_HAVE_ungetc || __CRT_HAVE__IO_ungetc)))) */
#undef __local_scanf_unlocked_defined
#endif /* !__CRT_HAVE_vscanf_unlocked && !__CRT_HAVE__vscanf && (__NO_STDSTREAMS || (!__CRT_HAVE_vfscanf_unlocked && !__CRT_HAVE_vfscanf && !__CRT_HAVE___vfscanf && !__CRT_HAVE__vfscanf && !__CRT_HAVE__vfscanf_s && !__CRT_HAVE__IO_vfscanf && ((!__CRT_HAVE_fgetc_unlocked && !__CRT_HAVE_getc_unlocked && (!__CRT_HAVE_getc || (__CRT_DOS && __CRT_HAVE__filbuf)) && (!__CRT_HAVE_fgetc || (__CRT_DOS && __CRT_HAVE__filbuf)) && (!__CRT_HAVE__IO_getc || (__CRT_DOS && __CRT_HAVE__filbuf)) && (!__CRT_DOS || !__CRT_HAVE__filbuf) && !__CRT_HAVE_fread_unlocked && !__CRT_HAVE__fread_nolock && !__CRT_HAVE__IO_fread && !__CRT_HAVE_fread) || (!__CRT_HAVE_ungetc_unlocked && !__CRT_HAVE__ungetc_nolock && !__CRT_HAVE_ungetc && !__CRT_HAVE__IO_ungetc)))) */
#endif /* !__local_scanf_unlocked_defined */