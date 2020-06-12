/* HASH CRC-32:0x6892af1b */
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
#ifndef __local__strerror_defined
#define __local__strerror_defined 1
#include <__crt.h>
#if defined(__CRT_HAVE__strerror_s) || defined(__libc_geterrno)
__NAMESPACE_LOCAL_BEGIN
/* Dependency: _strerror_s from string */
#ifndef __local___localdep__strerror_s_defined
#define __local___localdep__strerror_s_defined 1
#ifdef __CRT_HAVE__strerror_s
__CREDIRECT(__ATTR_NONNULL((1)),__errno_t,__NOTHROW_RPC,__localdep__strerror_s,(char *__restrict __buf, __SIZE_TYPE__ __buflen, char const *__message),_strerror_s,(__buf,__buflen,__message))
#else /* __CRT_HAVE__strerror_s */
__NAMESPACE_LOCAL_END
#include <parts/errno.h>
__NAMESPACE_LOCAL_BEGIN
#ifdef __libc_geterrno
__NAMESPACE_LOCAL_END
#include <local/string/_strerror_s.h>
__NAMESPACE_LOCAL_BEGIN
#define __localdep__strerror_s __LIBC_LOCAL_NAME(_strerror_s)
#else /* __libc_geterrno */
#undef __local___localdep__strerror_s_defined
#endif /* !__libc_geterrno */
#endif /* !__CRT_HAVE__strerror_s */
#endif /* !__local___localdep__strerror_s_defined */
__NAMESPACE_LOCAL_END
#ifndef __local_strerror_buf_defined
#define __local_strerror_buf_defined 1
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC_DATA(__strerror_buf) char __strerror_buf[64] = { 0 };
__NAMESPACE_LOCAL_END
#endif /* !__local_strerror_buf_defined */
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(_strerror) __ATTR_WUNUSED char *
__NOTHROW_RPC(__LIBCCALL __LIBC_LOCAL_NAME(_strerror))(char const *__message) {
	__localdep__strerror_s(__NAMESPACE_LOCAL_SYM __strerror_buf,
	            __COMPILER_LENOF(__NAMESPACE_LOCAL_SYM __strerror_buf),
	            __message);
	return __NAMESPACE_LOCAL_SYM __strerror_buf;
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep__strerror_defined
#define __local___localdep__strerror_defined 1
#define __localdep__strerror __LIBC_LOCAL_NAME(_strerror)
#endif /* !__local___localdep__strerror_defined */
#else /* __CRT_HAVE__strerror_s || __libc_geterrno */
#undef __local__strerror_defined
#endif /* !__CRT_HAVE__strerror_s && !__libc_geterrno */
#endif /* !__local__strerror_defined */
