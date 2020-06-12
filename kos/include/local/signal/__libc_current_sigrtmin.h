/* HASH CRC-32:0xe7f31aca */
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
#ifndef __local___libc_current_sigrtmin_defined
#define __local___libc_current_sigrtmin_defined 1
#include <__crt.h>
#include <bits/signum-values.h>
#ifdef __SIGRTMIN
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(__libc_current_sigrtmin) __ATTR_CONST __ATTR_WUNUSED int
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(__libc_current_sigrtmin))(void) {
	return __SIGRTMIN;
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep___libc_current_sigrtmin_defined
#define __local___localdep___libc_current_sigrtmin_defined 1
#define __localdep___libc_current_sigrtmin __LIBC_LOCAL_NAME(__libc_current_sigrtmin)
#endif /* !__local___localdep___libc_current_sigrtmin_defined */
#else /* __SIGRTMIN */
#undef __local___libc_current_sigrtmin_defined
#endif /* !__SIGRTMIN */
#endif /* !__local___libc_current_sigrtmin_defined */