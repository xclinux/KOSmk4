/* HASH CRC-32:0x1144306b */
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
#ifndef __local_fesetexceptflag_defined
#define __local_fesetexceptflag_defined 1
#include <bits/fenv-inline.h>
__NAMESPACE_LOCAL_BEGIN
/* Set complete status for exceptions indicated by EXCEPTS according
 * to the representation in the object pointed to by FLAGP */
__LOCAL_LIBC(fesetexceptflag) __ATTR_NONNULL((1)) int
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(fesetexceptflag))(fexcept_t const *__flagp,
                                                             int __excepts) {
#line 113 "kos/src/libc/magic/fenv.c"
#ifdef __inline_fesetexceptflag
	__inline_fesetexceptflag(__flagp, __excepts);
#else /* __inline_fesetexceptflag */
	(void)__flagp;
	(void)__excepts;
	__COMPILER_IMPURE();
#endif /* !__inline_fesetexceptflag */
	return 0;
}
__NAMESPACE_LOCAL_END
#endif /* !__local_fesetexceptflag_defined */