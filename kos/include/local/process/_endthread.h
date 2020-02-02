/* HASH CRC-32:0xa37a2b4b */
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
#ifndef __local__endthread_defined
#ifdef __CRT_HAVE__endthreadex
#define __local__endthread_defined 1
/* Dependency: "_endthreadex" */
#ifndef ____localdep__endthreadex_defined
#define ____localdep__endthreadex_defined 1
#ifdef __CRT_HAVE__endthreadex
__CREDIRECT_VOID(,__NOTHROW_NCX,__localdep__endthreadex,(__UINT32_TYPE__ __exitcode),_endthreadex,(__exitcode))
#else /* LIBC: _endthreadex */
#undef ____localdep__endthreadex_defined
#endif /* _endthreadex... */
#endif /* !____localdep__endthreadex_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(_endthread) void
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(_endthread))(void) {
#line 94 "kos/src/libc/magic/process.c"
	__localdep__endthreadex(0);
}
__NAMESPACE_LOCAL_END
#endif /* __CRT_HAVE__endthreadex */
#endif /* !__local__endthread_defined */