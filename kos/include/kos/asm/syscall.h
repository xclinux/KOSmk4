/* HASH 0x93f678da */
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
#ifndef _KOS_ASM_SYSCALL_H
#define _KOS_ASM_SYSCALL_H 1

#include <__stdinc.h>

#undef __HAVE_INLINE_SYSCALLS
#ifdef __WANT_INLINE_SYSCALLS
/* Inline system call support would go here! */
/* #define __CDECLARE_SC(...)       ... */
/* #define __CDECLARE_VOID_SC(...)  ... */
/* #define __CDECLARE_XSC(...)      ... */
/* #define __CDECLARE_VOID_XSC(...) ... */
#endif /* __WANT_INLINE_SYSCALLS */

#endif /* !_KOS_ASM_SYSCALL_H */