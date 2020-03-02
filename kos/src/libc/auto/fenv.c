/* HASH CRC-32:0x6be14bf8 */
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
#ifndef GUARD_LIBC_AUTO_FENV_C
#define GUARD_LIBC_AUTO_FENV_C 1

#include "../api.h"
#include <hybrid/typecore.h>
#include <kos/types.h>
#include "fenv.h"

DECL_BEGIN

#ifndef __KERNEL__
#include <bits/fenv-inline.h>
/* Clear the supported exceptions represented by EXCEPTS */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.feclearexcept") int
NOTHROW(LIBCCALL libc_feclearexcept)(int excepts) {
#line 86 "kos/src/libc/magic/fenv.c"
	__inline_feclearexcept(excepts);
	return 0;
}

#include <bits/fenv-inline.h>
/* Raise the supported exceptions represented by EXCEPTS */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.feraiseexcept") int
(LIBCCALL libc_feraiseexcept)(int excepts) __THROWS(...) {
#line 93 "kos/src/libc/magic/fenv.c"
	__inline_feraiseexcept(excepts);
	return 0;
}

#include <bits/fenv-inline.h>
/* Store implementation-defined representation of the exception
 * flags indicated by EXCEPTS in the object pointed to by FLAGP */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fegetexceptflag") int
NOTHROW_NCX(LIBCCALL libc_fegetexceptflag)(fexcept_t *flagp,
                                           int excepts) {
#line 101 "kos/src/libc/magic/fenv.c"
#ifdef __inline_fegetexceptflag
	__inline_fegetexceptflag(flagp, excepts);
#else /* __inline_fegetexceptflag */
	*flagp = 0;
	(void)excepts;
#endif /* !__inline_fegetexceptflag */
	return 0;
}

#include <bits/fenv-inline.h>
/* Set complete status for exceptions indicated by EXCEPTS according
 * to the representation in the object pointed to by FLAGP */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fesetexceptflag") int
NOTHROW_NCX(LIBCCALL libc_fesetexceptflag)(fexcept_t const *flagp,
                                           int excepts) {
#line 114 "kos/src/libc/magic/fenv.c"
#ifdef __inline_fesetexceptflag
	__inline_fesetexceptflag(flagp, excepts);
#else /* __inline_fesetexceptflag */
	(void)flagp;
	(void)excepts;
	COMPILER_IMPURE();
#endif /* !__inline_fesetexceptflag */
	return 0;
}

#include <bits/fenv-inline.h>
/* Determine which of subset of the exceptions
 * specified by EXCEPTS are currently set */
INTERN ATTR_PURE WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fetestexcept") int
NOTHROW(LIBCCALL libc_fetestexcept)(int excepts) {
#line 129 "kos/src/libc/magic/fenv.c"
	return __inline_fetestexcept(excepts);
}

#include <bits/fenv-inline.h>
/* Get current rounding direction
 * @return: One of...
 *             ... `FE_TONEAREST':  round()
 *             ... `FE_DOWNWARD':   floor()
 *             ... `FE_UPWARD':     ceil()
 *             ... `FE_TOWARDZERO': trunc() */
INTERN ATTR_PURE WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fegetround") int
NOTHROW(LIBCCALL libc_fegetround)(void) {
#line 141 "kos/src/libc/magic/fenv.c"
	return __inline_fegetround();
}

#include <bits/fenv-inline.h>
/* Establish the rounding direction represented by `rounding_direction'
 * @param: rounding_direction: One of...
 *             ... `FE_TONEAREST':  round()
 *             ... `FE_DOWNWARD':   floor()
 *             ... `FE_UPWARD':     ceil()
 *             ... `FE_TOWARDZERO': trunc() */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fesetround") int
NOTHROW(LIBCCALL libc_fesetround)(int rounding_direction) {
#line 153 "kos/src/libc/magic/fenv.c"
	return __inline_fesetround(rounding_direction);
}

#include <bits/fenv-inline.h>
/* Store the current floating-point environment in the object pointed to by ENVP */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fegetenv") int
NOTHROW_NCX(LIBCCALL libc_fegetenv)(fenv_t *envp) {
#line 159 "kos/src/libc/magic/fenv.c"
	__inline_fegetenv(envp);
	return 0;
}

#include <bits/fenv-inline.h>
/* Save the current environment in the object pointed to by ENVP, clear
 * exception flags and install a non-stop mode (if available) for all exceptions */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.feholdexcept") int
NOTHROW_NCX(LIBCCALL libc_feholdexcept)(fenv_t *envp) {
#line 167 "kos/src/libc/magic/fenv.c"
	__inline_feholdexcept(envp);
	return 0;
}

#include <bits/fenv-inline.h>
/* Establish the floating-point environment represented by the object pointed to by ENVP */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fesetenv") int
NOTHROW_NCX(LIBCCALL libc_fesetenv)(fenv_t const *envp) {
#line 174 "kos/src/libc/magic/fenv.c"
	__inline_fesetenv(envp);
	return 0;
}

#include <bits/fenv-inline.h>
/* Save current exceptions in temporary storage, install environment
 * represented by object pointed to by ENVP and raise exceptions
 * according to saved exceptions */
INTERN NONNULL((1))
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.feupdateenv") int
NOTHROW_NCX(LIBCCALL libc_feupdateenv)(fenv_t const *envp) {
#line 183 "kos/src/libc/magic/fenv.c"
	__inline_feupdateenv(envp);
	return 0;
}

#include <bits/fenv-inline.h>
/* Enable individual exceptions.  Will not enable more exceptions than
 * EXCEPTS specifies.  Returns the previous enabled exceptions if all
 * exceptions are successfully set, otherwise returns -1 */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.feenableexcept") int
NOTHROW(LIBCCALL libc_feenableexcept)(int excepts) {
#line 195 "kos/src/libc/magic/fenv.c"
	return __inline_feenableexcept(excepts);
}

#include <bits/fenv-inline.h>
/* Disable individual exceptions.  Will not disable more exceptions than
 * EXCEPTS specifies.  Returns the previous enabled exceptions if all
 * exceptions are successfully disabled, otherwise returns -1 */
INTERN ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fedisableexcept") int
NOTHROW(LIBCCALL libc_fedisableexcept)(int excepts) {
#line 203 "kos/src/libc/magic/fenv.c"
	return __inline_fedisableexcept(excepts);
}

#include <bits/fenv-inline.h>
/* Return enabled exceptions */
INTERN ATTR_PURE WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.fenv.fegetexcept") int
NOTHROW(LIBCCALL libc_fegetexcept)(void) {
#line 210 "kos/src/libc/magic/fenv.c"
	return __inline_fegetexcept();
}

#endif /* !__KERNEL__ */
#ifndef __KERNEL__
DEFINE_PUBLIC_WEAK_ALIAS(feclearexcept, libc_feclearexcept);
DEFINE_PUBLIC_WEAK_ALIAS(feraiseexcept, libc_feraiseexcept);
DEFINE_PUBLIC_WEAK_ALIAS(fegetexceptflag, libc_fegetexceptflag);
DEFINE_PUBLIC_WEAK_ALIAS(fesetexceptflag, libc_fesetexceptflag);
DEFINE_PUBLIC_WEAK_ALIAS(fetestexcept, libc_fetestexcept);
DEFINE_PUBLIC_WEAK_ALIAS(fegetround, libc_fegetround);
DEFINE_PUBLIC_WEAK_ALIAS(fesetround, libc_fesetround);
DEFINE_PUBLIC_WEAK_ALIAS(fegetenv, libc_fegetenv);
DEFINE_PUBLIC_WEAK_ALIAS(feholdexcept, libc_feholdexcept);
DEFINE_PUBLIC_WEAK_ALIAS(fesetenv, libc_fesetenv);
DEFINE_PUBLIC_WEAK_ALIAS(feupdateenv, libc_feupdateenv);
DEFINE_PUBLIC_WEAK_ALIAS(feenableexcept, libc_feenableexcept);
DEFINE_PUBLIC_WEAK_ALIAS(fedisableexcept, libc_fedisableexcept);
DEFINE_PUBLIC_WEAK_ALIAS(fegetexcept, libc_fegetexcept);
#endif /* !__KERNEL__ */

DECL_END

#endif /* !GUARD_LIBC_AUTO_FENV_C */
