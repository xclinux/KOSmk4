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
 *    in a product, an acknowledgement in the product documentation would be  *
 *    appreciated but is not required.                                        *
 * 2. Altered source versions must be plainly marked as such, and must not be *
 *    misrepresented as being the original software.                          *
 * 3. This notice may not be removed or altered from any source distribution. *
 */
#ifndef GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSLOG_H
#define GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSLOG_H 1

#include <kernel/compiler.h>

DECL_BEGIN

#ifdef __CC__

struct syslog_sink;

/* The x86 hook for the arch-specific, default system log sink */
DATDEF struct syslog_sink x86_default_syslog_sink;

#define ARCH_DEFAULT_SYSLOG_SINK (&x86_default_syslog_sink)

#endif /* __CC__ */

DECL_END

#endif /* !GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSLOG_H */