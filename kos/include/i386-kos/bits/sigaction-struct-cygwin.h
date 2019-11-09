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
#ifndef _I386_KOS_BITS_SIGACTION_STRUCT_CYGWIN_H
#define _I386_KOS_BITS_SIGACTION_STRUCT_CYGWIN_H 1

#include <__stdinc.h>
#include <__crt.h>
#include <features.h>
#include <bits/types.h>
#include <bits/sigset.h>

#ifdef __CRT_CYG_PRIMARY
#define __OFFSET_SIGACTION_HANDLER   __OFFSET_SIGACTION_CYGWIN_HANDLER
#define __OFFSET_SIGACTION_SIGACTION __OFFSET_SIGACTION_CYGWIN_SIGACTION
#define __OFFSET_SIGACTION_MASK      __OFFSET_SIGACTION_CYGWIN_MASK
#define __OFFSET_SIGACTION_FLAGS     __OFFSET_SIGACTION_CYGWIN_FLAGS
#define __SIZEOF_SIGACTION           __SIZEOF_SIGACTION_CYGWIN
#define __ALIGNOF_SIGACTION          __ALIGNOF_SIGACTION_CYGWIN
#define __sighandler_cygwin_t        __sighandler_t
#define __sigaction_cygwin           sigaction
#endif /* __CRT_CYG_PRIMARY */

__SYSDECL_BEGIN

#define __OFFSET_SIGACTION_CYGWIN_HANDLER   0
#define __OFFSET_SIGACTION_CYGWIN_SIGACTION 0
#define __OFFSET_SIGACTION_CYGWIN_MASK      __SIZEOF_POINTER__
#define __OFFSET_SIGACTION_CYGWIN_FLAGS     (__SIZEOF_POINTER__+128)
#define __SIZEOF_SIGACTION_CYGWIN           (__SIZEOF_POINTER__+132)
#define __ALIGNOF_SIGACTION_CYGWIN          __SIZEOF_POINTER__

#ifdef __CC__
typedef void (*__sighandler_cygwin_t)(int __signo);

/* Structure describing the action to be taken when a signal arrives. */
struct __sigaction_cygwin /*[NAME(sigaction_cygwin)][PREFIX(sa_)]*/ {
	/* Signal handler. */
#ifdef __USE_POSIX199309
	union {
		/* Used if SA_SIGINFO is not set. */
		__sighandler_cygwin_t sa_handler;
		/* Used if SA_SIGINFO is set. */
		void (*sa_sigaction)(int __signo, struct __siginfo_cygwin_struct *__info, void *__ctx);
	};
#else /* __USE_POSIX199309 */
	__sighandler_cygwin_t sa_handler;
#endif /* !__USE_POSIX199309 */
	/* XXX: Doesn't sigset_t have a different size in cygwin? */
	__sigset_t sa_mask;  /* Additional set of signals to be blocked. */
	__uint32_t sa_flags; /* Special flags. */
};
#endif /* __CC__ */

__SYSDECL_END

#endif /* !_I386_KOS_BITS_SIGACTION_STRUCT_CYGWIN_H */
