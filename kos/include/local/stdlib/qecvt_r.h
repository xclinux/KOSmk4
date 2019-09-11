/* HASH 0x24b43c5c */
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
#ifndef __local_qecvt_r_defined
#define __local_qecvt_r_defined 1
/* Dependency: "dos_ecvt_s" from "stdlib" */
#ifndef ____localdep_dos_ecvt_s_defined
#define ____localdep_dos_ecvt_s_defined 1
#if defined(__CRT_HAVE__ecvt_s)
__CREDIRECT(__ATTR_NONNULL((1, 5, 6)),__errno_t,__NOTHROW_NCX,__localdep_dos_ecvt_s,(char *__buf, __SIZE_TYPE__ __buflen, double __val, int __ndigit, int *__restrict __decptr, int *__restrict __sign),_ecvt_s,(__buf,__buflen,__val,__ndigit,__decptr,__sign))
#else /* LIBC: _ecvt_s */
#undef ____localdep_dos_ecvt_s_defined
#endif /* dos_ecvt_s... */
#endif /* !____localdep_dos_ecvt_s_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(qecvt_r) __ATTR_NONNULL((3, 4, 5)) int
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(qecvt_r))(long double __val,
                                                     int __ndigit,
                                                     int *__restrict __decptr,
                                                     int *__restrict __sign,
                                                     char *__restrict __buf,
                                                     __SIZE_TYPE__ __len) {
#line 987 "kos/src/libc/magic/stdlib.c"
#if defined(__CRT_HAVE__ecvt_s) && !defined(__BUILDING_LIBC)
	return __localdep_dos_ecvt_s(__buf, __len, (double)__val, __ndigit, __decptr, __sign) ? -1 : 0;
#else
	/* TODO: Implementation */
	return 0;
#endif
}
__NAMESPACE_LOCAL_END
#endif /* !__local_qecvt_r_defined */
