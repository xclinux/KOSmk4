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
#ifndef _I386_KOS_BITS_ITIMERSPEC64_H
#define _I386_KOS_BITS_ITIMERSPEC64_H 1

#include <__stdinc.h>
#include <hybrid/typecore.h>

#include "timespec64.h"

#ifdef __x86_64__
#include <features.h>
#define __OFFSET_ITIMERSPEC_INTERVAL   __OFFSET_ITIMERSPECX64_INTERVAL
#define __OFFSET_ITIMERSPEC_VALUE      __OFFSET_ITIMERSPECX64_VALUE
#define __SIZEOF_ITIMERSPEC            __SIZEOF_ITIMERSPECX64
#define __OFFSET_ITIMERSPEC64_INTERVAL __OFFSET_ITIMERSPECX64_INTERVAL
#define __OFFSET_ITIMERSPEC64_VALUE    __OFFSET_ITIMERSPECX64_VALUE
#define __SIZEOF_ITIMERSPEC64          __SIZEOF_ITIMERSPECX64
#define itimerspecx64              itimerspec
#define __itimerspecx64            itimerspec
#define __itimerspec32             itimerspec
#define __itimerspec64             itimerspec
#define __itimerspec_alt           itimerspec
#ifdef __USE_KOS
#define itimerspec32               itimerspec
#endif /* __USE_KOS */
#ifdef __USE_TIME64
#define itimerspec64               itimerspec
#define __OFFSET_ITIMERSPEC64_SEC  __OFFSET_ITIMERSPECX64_SEC
#define __OFFSET_ITIMERSPEC64_NSEC __OFFSET_ITIMERSPECX64_NSEC
#define __SIZEOF_ITIMERSPEC64      __SIZEOF_ITIMERSPECX64
#endif /* __USE_TIME64 */
#define __itimerspec_defined 1
#else /* __x86_64__ */
#define itimerspecx64              __itimerspecx64
#endif /* !__x86_64__ */


#define __OFFSET_ITIMERSPECX64_INTERVAL 0
#define __OFFSET_ITIMERSPECX64_VALUE    16
#define __SIZEOF_ITIMERSPECX64          32

#ifdef __CC__
__DECL_BEGIN

#ifdef __COMPILER_HAVE_PRAGMA_PUSHMACRO
#pragma push_macro("it_interval")
#pragma push_macro("it_value")
#endif /* __COMPILER_HAVE_PRAGMA_PUSHMACRO */
#undef it_interval
#undef it_value

/* itimerspec for x86_64 */
struct itimerspecx64 /*[PREFIX(it_)]*/ {
	struct __timespecx64 it_interval;
	struct __timespecx64 it_value;
};

#ifdef __COMPILER_HAVE_PRAGMA_PUSHMACRO
#pragma pop_macro("it_value")
#pragma pop_macro("it_interval")
#endif /* __COMPILER_HAVE_PRAGMA_PUSHMACRO */

__DECL_END
#endif /* __CC__ */

#ifndef __USE_KOS
#undef itimerspecx64
#endif /* !__USE_KOS */

#endif /* !_I386_KOS_BITS_ITIMERSPEC64_H */
