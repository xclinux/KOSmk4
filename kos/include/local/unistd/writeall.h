/* HASH CRC-32:0x65fc9b93 */
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
#ifndef __local_writeall_defined
#if (defined(__CRT_HAVE_write) || defined(__CRT_HAVE__write) || defined(__CRT_HAVE___write)) && (defined(__CRT_HAVE_lseek) || defined(__CRT_HAVE_lseek64) || defined(__CRT_HAVE__lseek) || defined(__CRT_HAVE___lseek) || defined(__CRT_HAVE__lseeki64))
#define __local_writeall_defined 1
#include <__crt.h>
#include <parts/errno.h>
/* Dependency: "write" */
#ifndef ____localdep_write_defined
#define ____localdep_write_defined 1
#ifdef __CRT_HAVE_write
/* >> write(2)
 * Write data to a given file descriptor `FD' and return the number of bytes written */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_write,(__fd_t __fd, void const *__buf, __SIZE_TYPE__ __bufsize),write,(__fd,__buf,__bufsize))
#elif defined(__CRT_HAVE__write)
/* >> write(2)
 * Write data to a given file descriptor `FD' and return the number of bytes written */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_write,(__fd_t __fd, void const *__buf, __SIZE_TYPE__ __bufsize),_write,(__fd,__buf,__bufsize))
#elif defined(__CRT_HAVE___write)
/* >> write(2)
 * Write data to a given file descriptor `FD' and return the number of bytes written */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_write,(__fd_t __fd, void const *__buf, __SIZE_TYPE__ __bufsize),__write,(__fd,__buf,__bufsize))
#else /* LIBC: write */
#undef ____localdep_write_defined
#endif /* write... */
#endif /* !____localdep_write_defined */

__NAMESPACE_LOCAL_BEGIN
/* >> writeall(3)
 * Same as `write(2)', however keep on writing until `write()' indicates EOF (causing
 * `writeall()' to immediately return `0') or the entirety of the given buffer has been
 * written (in which case `bufsize' is returned). */
__LOCAL_LIBC(writeall) __ATTR_NONNULL((2)) __SSIZE_TYPE__
__NOTHROW_RPC(__LIBCCALL __LIBC_LOCAL_NAME(writeall))(__fd_t __fd,
                                                      void const *__buf,
                                                      __SIZE_TYPE__ __bufsize) {
#line 614 "kos/src/libc/magic/unistd.c"
	__SSIZE_TYPE__ __result, __temp;
	__result = __localdep_write(__fd, __buf, __bufsize);
	if (__result > 0 && (__SIZE_TYPE__)__result < __bufsize) {
		/* Keep on writing */
		for (;;) {
			__temp = __localdep_write(__fd,
			             (__BYTE_TYPE__ *)__buf + (__SIZE_TYPE__)__result,
			             __bufsize - (__SIZE_TYPE__)__result);
			if (__temp <= 0) {
				__result = __temp;
				break;
			}
			__result += __temp;
			if ((__SIZE_TYPE__)__result >= __bufsize)
				break;
		}
	}
	return __result;
}
__NAMESPACE_LOCAL_END
#endif /* (__CRT_HAVE_write || __CRT_HAVE__write || __CRT_HAVE___write) && (__CRT_HAVE_lseek || __CRT_HAVE_lseek64 || __CRT_HAVE__lseek || __CRT_HAVE___lseek || __CRT_HAVE__lseeki64) */
#endif /* !__local_writeall_defined */
