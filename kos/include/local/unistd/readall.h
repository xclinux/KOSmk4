/* HASH CRC-32:0x28c69b3b */
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
#ifndef __local_readall_defined
#if (defined(__CRT_HAVE_read) || defined(__CRT_HAVE__read) || defined(__CRT_HAVE___read)) && (defined(__CRT_HAVE_lseek) || defined(__CRT_HAVE_lseek64) || defined(__CRT_HAVE__lseek) || defined(__CRT_HAVE___lseek) || defined(__CRT_HAVE__lseeki64))
#define __local_readall_defined 1
#include <parts/errno.h>
/* Dependency: "read" */
#ifndef ____localdep_read_defined
#define ____localdep_read_defined 1
#ifdef __CRT_HAVE_read
/* >> read(2)
 * Read data from a given file descriptor `FD' and return the number of bytes read.
 * A return value of ZERO(0) is indicative of EOF */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_read,(__fd_t __fd, void *__buf, __SIZE_TYPE__ __bufsize),read,(__fd,__buf,__bufsize))
#elif defined(__CRT_HAVE__read)
/* >> read(2)
 * Read data from a given file descriptor `FD' and return the number of bytes read.
 * A return value of ZERO(0) is indicative of EOF */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_read,(__fd_t __fd, void *__buf, __SIZE_TYPE__ __bufsize),_read,(__fd,__buf,__bufsize))
#elif defined(__CRT_HAVE___read)
/* >> read(2)
 * Read data from a given file descriptor `FD' and return the number of bytes read.
 * A return value of ZERO(0) is indicative of EOF */
__CREDIRECT(__ATTR_NONNULL((2)),__SSIZE_TYPE__,__NOTHROW_RPC,__localdep_read,(__fd_t __fd, void *__buf, __SIZE_TYPE__ __bufsize),__read,(__fd,__buf,__bufsize))
#else /* LIBC: read */
#undef ____localdep_read_defined
#endif /* read... */
#endif /* !____localdep_read_defined */

/* Dependency: "lseek" from "unistd" */
#ifndef ____localdep_lseek_defined
#define ____localdep_lseek_defined 1
#if defined(__CRT_HAVE_lseek64) && defined(__USE_FILE_OFFSET64)
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
__CREDIRECT(,__off64_t,__NOTHROW_NCX,__localdep_lseek,(__fd_t __fd, __off64_t __offset, int __whence),lseek64,(__fd,__offset,__whence))
#elif defined(__CRT_HAVE__lseeki64) && defined(__USE_FILE_OFFSET64)
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
__CREDIRECT(,__off64_t,__NOTHROW_NCX,__localdep_lseek,(__fd_t __fd, __off64_t __offset, int __whence),_lseeki64,(__fd,__offset,__whence))
#elif defined(__CRT_HAVE_lseek) && !defined(__USE_FILE_OFFSET64)
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
__CREDIRECT(,__off32_t,__NOTHROW_NCX,__localdep_lseek,(__fd_t __fd, __off32_t __offset, int __whence),lseek,(__fd,__offset,__whence))
#elif defined(__CRT_HAVE__lseek) && !defined(__USE_FILE_OFFSET64)
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
__CREDIRECT(,__off32_t,__NOTHROW_NCX,__localdep_lseek,(__fd_t __fd, __off32_t __offset, int __whence),_lseek,(__fd,__offset,__whence))
#elif defined(__CRT_HAVE___lseek) && !defined(__USE_FILE_OFFSET64)
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
__CREDIRECT(,__off32_t,__NOTHROW_NCX,__localdep_lseek,(__fd_t __fd, __off32_t __offset, int __whence),__lseek,(__fd,__offset,__whence))
#elif defined(__CRT_HAVE_lseek64) || defined(__CRT_HAVE__lseeki64) || defined(__CRT_HAVE_lseek) || defined(__CRT_HAVE__lseek) || defined(__CRT_HAVE___lseek)
#include <local/unistd/lseek.h>
/* >> lseek(2)
 * Change the position of the file read/write pointer within a file referred to by `FD' */
#define __localdep_lseek (*(__FS_TYPE(off)(__LIBCCALL*)(__fd_t, __off32_t, int))&(__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(lseek)))
#else /* CUSTOM: lseek */
#undef ____localdep_lseek_defined
#endif /* lseek... */
#endif /* !____localdep_lseek_defined */

__NAMESPACE_LOCAL_BEGIN
/* >> readall(3)
 * Same as `read(2)', however keep on reading until `read()' indicates EOF (causing
 * `readall()' to immediately return `0') or the entirety of the given buffer has been
 * filled (in which case `bufsize' is returned).
 * If an error occurrs before all data could be read, try to use SEEK_CUR to rewind
 * the file descriptor by the amount of data that had already been loaded. - Errors
 * during this phase are silently ignored and don't cause `errno' to change */
__LOCAL_LIBC(readall) __ATTR_NONNULL((2)) __SSIZE_TYPE__
__NOTHROW_RPC(__LIBCCALL __LIBC_LOCAL_NAME(readall))(__fd_t __fd,
                                                     void *__buf,
                                                     __SIZE_TYPE__ __bufsize) {
#line 563 "kos/src/libc/magic/unistd.c"
	__SSIZE_TYPE__ __result, __temp;
	__result = __localdep_read(__fd, __buf, __bufsize);
	if (__result > 0 && (__SIZE_TYPE__)__result < __bufsize) {
		/* Keep on reading */
		for (;;) {
			__temp = __localdep_read(__fd,
			            (__BYTE_TYPE__ *)__buf + (__SIZE_TYPE__)__result,
			            __bufsize - (__SIZE_TYPE__)__result);
			if (__temp <= 0) {
#ifdef __errno
				int __old_error = __errno;
#endif /* __errno */
				/* Try to un-read data that had already been loaded. */
				__localdep_lseek(__fd, -(__FS_TYPE(off))(__FS_TYPE(pos))__result, 1);
#ifdef __errno
				__errno = __old_error;
#endif /* __errno */
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
#endif /* (__CRT_HAVE_read || __CRT_HAVE__read || __CRT_HAVE___read) && (__CRT_HAVE_lseek || __CRT_HAVE_lseek64 || __CRT_HAVE__lseek || __CRT_HAVE___lseek || __CRT_HAVE__lseeki64) */
#endif /* !__local_readall_defined */
