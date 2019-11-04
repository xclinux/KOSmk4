/* HASH CRC-32:0x26bbfd25 */
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
#ifndef __local_cnd_timedwait_defined
#if defined(__CRT_HAVE_pthread_cond_timedwait) || defined(__CRT_HAVE_pthread_cond_timedwait64)
#define __local_cnd_timedwait_defined 1
#include <bits/pthreadtypes.h>
#include <bits/timespec.h>
#include <bits/threads.h>

#include <bits/pthreadtypes.h>

#include <bits/timespec.h>
/* Dependency: "pthread_cond_timedwait" from "pthread" */
#ifndef ____localdep_pthread_cond_timedwait_defined
#define ____localdep_pthread_cond_timedwait_defined 1
#if defined(__CRT_HAVE_pthread_cond_timedwait64) && (defined(__USE_TIME_BITS64))
/* Wait for condition variable COND to be signaled or broadcast until
 * ABSTIME. MUTEX is assumed to be locked before. ABSTIME is an
 * absolute time specification; zero is the beginning of the epoch
 * (00:00:00 GMT, January 1, 1970). */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),int,__NOTHROW_RPC,__localdep_pthread_cond_timedwait,(__pthread_cond_t *__restrict __cond, __pthread_mutex_t *__restrict __mutex, struct __TM_TYPE(timespec) const *__restrict __abstime),pthread_cond_timedwait64,(__cond,__mutex,__abstime))
#elif defined(__CRT_HAVE_pthread_cond_timedwait) && (!defined(__USE_TIME_BITS64))
/* Wait for condition variable COND to be signaled or broadcast until
 * ABSTIME. MUTEX is assumed to be locked before. ABSTIME is an
 * absolute time specification; zero is the beginning of the epoch
 * (00:00:00 GMT, January 1, 1970). */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),int,__NOTHROW_RPC,__localdep_pthread_cond_timedwait,(__pthread_cond_t *__restrict __cond, __pthread_mutex_t *__restrict __mutex, struct __TM_TYPE(timespec) const *__restrict __abstime),pthread_cond_timedwait,(__cond,__mutex,__abstime))
#elif defined(__CRT_HAVE_pthread_cond_timedwait) || defined(__CRT_HAVE_pthread_cond_timedwait64)
#include <local/pthread/pthread_cond_timedwait.h>
/* Wait for condition variable COND to be signaled or broadcast until
 * ABSTIME. MUTEX is assumed to be locked before. ABSTIME is an
 * absolute time specification; zero is the beginning of the epoch
 * (00:00:00 GMT, January 1, 1970). */
#define __localdep_pthread_cond_timedwait (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(pthread_cond_timedwait))
#else /* CUSTOM: pthread_cond_timedwait */
#undef ____localdep_pthread_cond_timedwait_defined
#endif /* pthread_cond_timedwait... */
#endif /* !____localdep_pthread_cond_timedwait_defined */

__NAMESPACE_LOCAL_BEGIN
/* Block current thread on the condition variable until condition variable
 * pointed by COND is signaled or time pointed by TIME_POINT is reached
 * s.a. `pthread_cond_timedwait()' */
__LOCAL_LIBC(cnd_timedwait) __ATTR_NONNULL((1, 2, 3)) int
__NOTHROW_RPC(__LIBCCALL __LIBC_LOCAL_NAME(cnd_timedwait))(__cnd_t *__restrict __cond,
                                                           __mtx_t *__restrict __mutex,
                                                           struct __TM_TYPE(timespec) const *__restrict __time_point) {
#line 432 "kos/src/libc/magic/threads.c"
	int __error;
	__error = __localdep_pthread_cond_timedwait((__pthread_cond_t *)__cond,
	                               (__pthread_mutex_t *)__mutex,
	                               __time_point);
	if __likely(!__error)
		return 0; /* thrd_success */
	if (__error == __ETIMEDOUT)
		return 4; /* thrd_timedout */
	return 2; /* thrd_error */
}
__NAMESPACE_LOCAL_END
#endif /* defined(__CRT_HAVE_pthread_cond_timedwait) || defined(__CRT_HAVE_pthread_cond_timedwait64) */
#endif /* !__local_cnd_timedwait_defined */