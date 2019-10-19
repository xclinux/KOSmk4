/* HASH CRC-32:0xd252f64c */
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
#ifndef __local_ctermid_r_defined
#if defined(__CRT_HAVE_ctermid)
#define __local_ctermid_r_defined 1
/* Dependency: "ctermid" */
#ifndef ____localdep_ctermid_defined
#define ____localdep_ctermid_defined 1
#if defined(__CRT_HAVE_ctermid)
__CREDIRECT(,char *,__NOTHROW_NCX,__localdep_ctermid,(char *__s),ctermid,(__s))
#else /* LIBC: ctermid */
#undef ____localdep_ctermid_defined
#endif /* ctermid... */
#endif /* !____localdep_ctermid_defined */

__NAMESPACE_LOCAL_BEGIN
/* Same as `ctermid', but return `NULL' when `S' is `NULL' */
__LOCAL_LIBC(ctermid_r) char *
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(ctermid_r))(char *__s) {
#line 1656 "kos/src/libc/magic/unistd.c"
	return __s ? __localdep_ctermid(__s) : __NULLPTR;
}
__NAMESPACE_LOCAL_END
#endif /* defined(__CRT_HAVE_ctermid) */
#endif /* !__local_ctermid_r_defined */