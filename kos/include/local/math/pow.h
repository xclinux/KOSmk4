/* HASH CRC-32:0x445a07a6 */
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
#ifndef __local_pow_defined
#include <ieee754.h>
#if defined(__IEEE754_DOUBLE_TYPE_IS_DOUBLE__) || defined(__IEEE754_FLOAT_TYPE_IS_DOUBLE__) || defined(__IEEE854_LONG_DOUBLE_TYPE_IS_DOUBLE__)
#define __local_pow_defined 1
#include <bits/math-vector.h>
#include <libm/pow.h>
__NAMESPACE_LOCAL_BEGIN
/* Return X to the Y power */
__LOCAL_LIBC(pow) __DECL_SIMD_pow __ATTR_WUNUSED double
__NOTHROW(__LIBCCALL __LIBC_LOCAL_NAME(pow))(double __x,
                                             double __y) {
#line 632 "kos/src/libc/magic/math.c"
	__COMPILER_IMPURE(); /* XXX: Math error handling */
#ifdef __IEEE754_DOUBLE_TYPE_IS_DOUBLE__
	return (double)__ieee754_pow((__IEEE754_DOUBLE_TYPE__)__x, (__IEEE754_DOUBLE_TYPE__)__y);
#elif defined(__IEEE754_FLOAT_TYPE_IS_DOUBLE__)
	return (double)__ieee754_powf((__IEEE754_FLOAT_TYPE__)__x, (__IEEE754_FLOAT_TYPE__)__y);
#else /* ... */
	return (double)__ieee854_powl((__IEEE854_LONG_DOUBLE_TYPE__)__x, (__IEEE854_LONG_DOUBLE_TYPE__)__y);
#endif /* !... */
}
__NAMESPACE_LOCAL_END
#endif /* __IEEE754_DOUBLE_TYPE_IS_DOUBLE__ || __IEEE754_FLOAT_TYPE_IS_DOUBLE__ || __IEEE854_LONG_DOUBLE_TYPE_IS_DOUBLE__ */
#endif /* !__local_pow_defined */