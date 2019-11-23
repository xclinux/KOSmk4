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
#ifndef GUARD_LIBC_USER_MATH_C
#define GUARD_LIBC_USER_MATH_C 1

#include "../api.h"
#include "math.h"

DECL_BEGIN





/*[[[start:implementation]]]*/

/*[[[head:acos,hash:CRC-32=0x88d62ec7]]]*/
/* Arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acos") double
NOTHROW(LIBCCALL libc_acos)(double x)
/*[[[body:acos]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("acos"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:acos]]]*/

/*[[[head:asin,hash:CRC-32=0xaac56241]]]*/
/* Arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asin") double
NOTHROW(LIBCCALL libc_asin)(double x)
/*[[[body:asin]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("asin"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:asin]]]*/

/*[[[head:atan,hash:CRC-32=0x745b0aa4]]]*/
/* Arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atan") double
NOTHROW(LIBCCALL libc_atan)(double x)
/*[[[body:atan]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("atan"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:atan]]]*/

/*[[[head:atan2,hash:CRC-32=0x1c515759]]]*/
/* Arc tangent of Y/X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atan2") double
NOTHROW(LIBCCALL libc_atan2)(double y,
                             double x)
/*[[[body:atan2]]]*/
{
	(void)y;
	(void)x;
	CRT_UNIMPLEMENTED("atan2"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:atan2]]]*/

/*[[[head:cos,hash:CRC-32=0xe248ac71]]]*/
/* Cosine of X */
INTERN __DECL_SIMD_cos WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cos") double
NOTHROW(LIBCCALL libc_cos)(double x)
/*[[[body:cos]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("cos"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:cos]]]*/

/*[[[head:sin,hash:CRC-32=0x317d501d]]]*/
/* Sine of X */
INTERN __DECL_SIMD_sin WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sin") double
NOTHROW(LIBCCALL libc_sin)(double x)
/*[[[body:sin]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("sin"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:sin]]]*/

/*[[[head:tan,hash:CRC-32=0xe8522a3f]]]*/
/* Tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tan") double
NOTHROW(LIBCCALL libc_tan)(double x)
/*[[[body:tan]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("tan"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:tan]]]*/

/*[[[head:acosf,hash:CRC-32=0xf6f60d87]]]*/
/* Arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acosf") float
NOTHROW(LIBCCALL libc_acosf)(float x)
/*[[[body:acosf]]]*/
/*AUTO*/{
	return (float)libc_acos((double)x);
}
/*[[[end:acosf]]]*/

/*[[[head:asinf,hash:CRC-32=0xd4e54101]]]*/
/* Arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asinf") float
NOTHROW(LIBCCALL libc_asinf)(float x)
/*[[[body:asinf]]]*/
/*AUTO*/{
	return (float)libc_asin((double)x);
}
/*[[[end:asinf]]]*/

/*[[[head:atanf,hash:CRC-32=0xa7b29e4]]]*/
/* Arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atanf") float
NOTHROW(LIBCCALL libc_atanf)(float x)
/*[[[body:atanf]]]*/
/*AUTO*/{
	return (float)libc_atan((double)x);
}
/*[[[end:atanf]]]*/

/*[[[head:atan2f,hash:CRC-32=0x27214a55]]]*/
/* Arc tangent of Y/X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atan2f") float
NOTHROW(LIBCCALL libc_atan2f)(float y,
                              float x)
/*[[[body:atan2f]]]*/
/*AUTO*/{
	return (float)libc_atan2((double)y, (double)x);
}
/*[[[end:atan2f]]]*/

/*[[[head:cosf,hash:CRC-32=0xda92a9fe]]]*/
/* Cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cosf") float
NOTHROW(LIBCCALL libc_cosf)(float x)
/*[[[body:cosf]]]*/
/*AUTO*/{
	return (float)libc_cos((double)x);
}
/*[[[end:cosf]]]*/

/*[[[head:sinf,hash:CRC-32=0xc7fccf9a]]]*/
/* Sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sinf") float
NOTHROW(LIBCCALL libc_sinf)(float x)
/*[[[body:sinf]]]*/
/*AUTO*/{
	return (float)libc_sin((double)x);
}
/*[[[end:sinf]]]*/

/*[[[head:tanf,hash:CRC-32=0xadcd8f2]]]*/
/* Tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tanf") float
NOTHROW(LIBCCALL libc_tanf)(float x)
/*[[[body:tanf]]]*/
/*AUTO*/{
	return (float)libc_tan((double)x);
}
/*[[[end:tanf]]]*/

/*[[[head:acosl,hash:CRC-32=0x5a1e754e]]]*/
/* Arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acosl") long double
NOTHROW(LIBCCALL libc_acosl)(long double x)
/*[[[body:acosl]]]*/
/*AUTO*/{
	return (long double)libc_acos((double)x);
}
/*[[[end:acosl]]]*/

/*[[[head:asinl,hash:CRC-32=0x4df61848]]]*/
/* Arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asinl") long double
NOTHROW(LIBCCALL libc_asinl)(long double x)
/*[[[body:asinl]]]*/
/*AUTO*/{
	return (long double)libc_asin((double)x);
}
/*[[[end:asinl]]]*/

/*[[[head:atanl,hash:CRC-32=0x685d6abb]]]*/
/* Arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atanl") long double
NOTHROW(LIBCCALL libc_atanl)(long double x)
/*[[[body:atanl]]]*/
/*AUTO*/{
	return (long double)libc_atan((double)x);
}
/*[[[end:atanl]]]*/

/*[[[head:atan2l,hash:CRC-32=0x4f4d6e56]]]*/
/* Arc tangent of Y/X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atan2l") long double
NOTHROW(LIBCCALL libc_atan2l)(long double y,
                              long double x)
/*[[[body:atan2l]]]*/
/*AUTO*/{
	return (long double)libc_atan2((double)y, (double)x);
}
/*[[[end:atan2l]]]*/

/*[[[head:cosl,hash:CRC-32=0xa69df706]]]*/
/* Cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cosl") long double
NOTHROW(LIBCCALL libc_cosl)(long double x)
/*[[[body:cosl]]]*/
/*AUTO*/{
	return (long double)libc_cos((double)x);
}
/*[[[end:cosl]]]*/

/*[[[head:sinl,hash:CRC-32=0x83d7d10f]]]*/
/* Sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sinl") long double
NOTHROW(LIBCCALL libc_sinl)(long double x)
/*[[[body:sinl]]]*/
/*AUTO*/{
	return (long double)libc_sin((double)x);
}
/*[[[end:sinl]]]*/

/*[[[head:tanl,hash:CRC-32=0x30bcaef9]]]*/
/* Tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tanl") long double
NOTHROW(LIBCCALL libc_tanl)(long double x)
/*[[[body:tanl]]]*/
/*AUTO*/{
	return (long double)libc_tan((double)x);
}
/*[[[end:tanl]]]*/

/*[[[head:cosh,hash:CRC-32=0x35f03d52]]]*/
/* Hyperbolic cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cosh") double
NOTHROW(LIBCCALL libc_cosh)(double x)
/*[[[body:cosh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("cosh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:cosh]]]*/

/*[[[head:sinh,hash:CRC-32=0xcf3909d1]]]*/
/* Hyperbolic sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sinh") double
NOTHROW(LIBCCALL libc_sinh)(double x)
/*[[[body:sinh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("sinh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:sinh]]]*/

/*[[[head:tanh,hash:CRC-32=0xa4803ab9]]]*/
/* Hyperbolic tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tanh") double
NOTHROW(LIBCCALL libc_tanh)(double x)
/*[[[body:tanh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("tanh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:tanh]]]*/

/*[[[head:coshf,hash:CRC-32=0x4bd01e12]]]*/
/* Hyperbolic cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.coshf") float
NOTHROW(LIBCCALL libc_coshf)(float x)
/*[[[body:coshf]]]*/
/*AUTO*/{
	return (float)libc_cosh((double)x);
}
/*[[[end:coshf]]]*/

/*[[[head:sinhf,hash:CRC-32=0xb1192a91]]]*/
/* Hyperbolic sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sinhf") float
NOTHROW(LIBCCALL libc_sinhf)(float x)
/*[[[body:sinhf]]]*/
/*AUTO*/{
	return (float)libc_sinh((double)x);
}
/*[[[end:sinhf]]]*/

/*[[[head:tanhf,hash:CRC-32=0xdaa019f9]]]*/
/* Hyperbolic tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tanhf") float
NOTHROW(LIBCCALL libc_tanhf)(float x)
/*[[[body:tanhf]]]*/
/*AUTO*/{
	return (float)libc_tanh((double)x);
}
/*[[[end:tanhf]]]*/

/*[[[head:coshl,hash:CRC-32=0xad6fd731]]]*/
/* Hyperbolic cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.coshl") long double
NOTHROW(LIBCCALL libc_coshl)(long double x)
/*[[[body:coshl]]]*/
/*AUTO*/{
	return (long double)libc_cosh((double)x);
}
/*[[[end:coshl]]]*/

/*[[[head:sinhl,hash:CRC-32=0x5d90214]]]*/
/* Hyperbolic sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sinhl") long double
NOTHROW(LIBCCALL libc_sinhl)(long double x)
/*[[[body:sinhl]]]*/
/*AUTO*/{
	return (long double)libc_sinh((double)x);
}
/*[[[end:sinhl]]]*/

/*[[[head:tanhl,hash:CRC-32=0x451ab1a5]]]*/
/* Hyperbolic tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tanhl") long double
NOTHROW(LIBCCALL libc_tanhl)(long double x)
/*[[[body:tanhl]]]*/
/*AUTO*/{
	return (long double)libc_tanh((double)x);
}
/*[[[end:tanhl]]]*/

/*[[[head:acosh,hash:CRC-32=0xe89ce1cd]]]*/
/* Hyperbolic arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acosh") double
NOTHROW(LIBCCALL libc_acosh)(double x)
/*[[[body:acosh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("acosh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:acosh]]]*/

/*[[[head:asinh,hash:CRC-32=0x2b184690]]]*/
/* Hyperbolic arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asinh") double
NOTHROW(LIBCCALL libc_asinh)(double x)
/*[[[body:asinh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("asinh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:asinh]]]*/

/*[[[head:atanh,hash:CRC-32=0xf4c76e6d]]]*/
/* Hyperbolic arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atanh") double
NOTHROW(LIBCCALL libc_atanh)(double x)
/*[[[body:atanh]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("atanh"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:atanh]]]*/

/*[[[head:acoshf,hash:CRC-32=0x52993c1]]]*/
/* Hyperbolic arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acoshf") float
NOTHROW(LIBCCALL libc_acoshf)(float x)
/*[[[body:acoshf]]]*/
/*AUTO*/{
	return (float)libc_acosh((double)x);
}
/*[[[end:acoshf]]]*/

/*[[[head:asinhf,hash:CRC-32=0xc6ad349c]]]*/
/* Hyperbolic arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asinhf") float
NOTHROW(LIBCCALL libc_asinhf)(float x)
/*[[[body:asinhf]]]*/
/*AUTO*/{
	return (float)libc_asinh((double)x);
}
/*[[[end:asinhf]]]*/

/*[[[head:atanhf,hash:CRC-32=0x19721c61]]]*/
/* Hyperbolic arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atanhf") float
NOTHROW(LIBCCALL libc_atanhf)(float x)
/*[[[body:atanhf]]]*/
/*AUTO*/{
	return (float)libc_atanh((double)x);
}
/*[[[end:atanhf]]]*/

/*[[[head:acoshl,hash:CRC-32=0x4b3782bc]]]*/
/* Hyperbolic arc cosine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.acoshl") long double
NOTHROW(LIBCCALL libc_acoshl)(long double x)
/*[[[body:acoshl]]]*/
/*AUTO*/{
	return (long double)libc_acosh((double)x);
}
/*[[[end:acoshl]]]*/

/*[[[head:asinhl,hash:CRC-32=0xff2fdca7]]]*/
/* Hyperbolic arc sine of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.asinhl") long double
NOTHROW(LIBCCALL libc_asinhl)(long double x)
/*[[[body:asinhl]]]*/
/*AUTO*/{
	return (long double)libc_asinh((double)x);
}
/*[[[end:asinhl]]]*/

/*[[[head:atanhl,hash:CRC-32=0xf363c33]]]*/
/* Hyperbolic arc tangent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.atanhl") long double
NOTHROW(LIBCCALL libc_atanhl)(long double x)
/*[[[body:atanhl]]]*/
/*AUTO*/{
	return (long double)libc_atanh((double)x);
}
/*[[[end:atanhl]]]*/

/*[[[head:exp,hash:CRC-32=0xf45efc33]]]*/
/* Exponential function of X */
INTERN __DECL_SIMD_exp WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp") double
NOTHROW(LIBCCALL libc_exp)(double x)
/*[[[body:exp]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("exp"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:exp]]]*/

/*[[[head:frexp,hash:CRC-32=0x2d719468]]]*/
/* Break VALUE into a normalized fraction and an integral power of 2 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.frexp") double
NOTHROW_NCX(LIBCCALL libc_frexp)(double x,
                                 int *pexponent)
/*[[[body:frexp]]]*/
{
	(void)x;
	(void)pexponent;
	CRT_UNIMPLEMENTED("frexp"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:frexp]]]*/

/*[[[head:ldexp,hash:CRC-32=0xc0e8e543]]]*/
/* X times (two to the EXP power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ldexp") double
NOTHROW(LIBCCALL libc_ldexp)(double x,
                             int exponent)
/*[[[body:ldexp]]]*/
{
	(void)x;
	(void)exponent;
	CRT_UNIMPLEMENTED("ldexp"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:ldexp]]]*/

/*[[[head:log,hash:CRC-32=0x699f7ca1]]]*/
/* Natural logarithm of X */
INTERN __DECL_SIMD_log WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log") double
NOTHROW(LIBCCALL libc_log)(double x)
/*[[[body:log]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("log"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:log]]]*/

/*[[[head:log10,hash:CRC-32=0xc6dcd19d]]]*/
/* Base-ten logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log10") double
NOTHROW(LIBCCALL libc_log10)(double x)
/*[[[body:log10]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("log10"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:log10]]]*/

/*[[[head:modf,hash:CRC-32=0x64c43d74]]]*/
/* Break VALUE into integral and fractional parts */
INTERN WUNUSED NONNULL((2))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.modf") double
NOTHROW_NCX(LIBCCALL libc_modf)(double x,
                                double *iptr)
/*[[[body:modf]]]*/
{
	(void)x;
	(void)iptr;
	CRT_UNIMPLEMENTED("modf"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:modf]]]*/

/*[[[head:expf,hash:CRC-32=0x4a01c40d]]]*/
/* Exponential function of X */
INTERN __DECL_SIMD_expf WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.expf") float
NOTHROW(LIBCCALL libc_expf)(float x)
/*[[[body:expf]]]*/
/*AUTO*/{
	return (float)libc_exp((double)x);
}
/*[[[end:expf]]]*/

/*[[[head:frexpf,hash:CRC-32=0x58c0578b]]]*/
/* Break VALUE into a normalized fraction and an integral power of 2 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.frexpf") float
NOTHROW_NCX(LIBCCALL libc_frexpf)(float x,
                                  int *pexponent)
/*[[[body:frexpf]]]*/
/*AUTO*/{
	return (float)libc_frexp((double)x, pexponent);
}
/*[[[end:frexpf]]]*/

/*[[[head:ldexpf,hash:CRC-32=0x15170467]]]*/
/* X times (two to the EXP power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ldexpf") float
NOTHROW(LIBCCALL libc_ldexpf)(float x,
                              int exponent)
/*[[[body:ldexpf]]]*/
/*AUTO*/{
	return (float)libc_ldexp((double)x, exponent);
}
/*[[[end:ldexpf]]]*/

/*[[[head:logf,hash:CRC-32=0xc1888e0e]]]*/
/* Natural logarithm of X */
INTERN __DECL_SIMD_logf WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.logf") float
NOTHROW(LIBCCALL libc_logf)(float x)
/*[[[body:logf]]]*/
/*AUTO*/{
	return (float)libc_log((double)x);
}
/*[[[end:logf]]]*/

/*[[[head:log10f,hash:CRC-32=0x2b69a391]]]*/
/* Base-ten logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log10f") float
NOTHROW(LIBCCALL libc_log10f)(float x)
/*[[[body:log10f]]]*/
/*AUTO*/{
	return (float)libc_log10((double)x);
}
/*[[[end:log10f]]]*/

/*[[[head:modff,hash:CRC-32=0xe8cdeb6a]]]*/
/* Break VALUE into integral and fractional parts */
INTERN NONNULL((2))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.modff") float
NOTHROW_NCX(LIBCCALL libc_modff)(float x,
                                 float *iptr)
/*[[[body:modff]]]*/
/*AUTO*/{
	double ipart;
	float result;
	result = (float)libc_modf(x, &ipart);
	*iptr  = (float)ipart;
	return result;
}
/*[[[end:modff]]]*/

/*[[[head:expl,hash:CRC-32=0xdb9a9ae9]]]*/
/* Exponential function of X */
INTERN __DECL_SIMD_expl WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.expl") long double
NOTHROW(LIBCCALL libc_expl)(long double x)
/*[[[body:expl]]]*/
/*AUTO*/{
	return (long double)libc_exp((double)x);
}
/*[[[end:expl]]]*/

/*[[[head:frexpl,hash:CRC-32=0xdcecfaa1]]]*/
/* Break VALUE into a normalized fraction and an integral power of 2 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.frexpl") long double
NOTHROW_NCX(LIBCCALL libc_frexpl)(long double x,
                                  int *pexponent)
/*[[[body:frexpl]]]*/
/*AUTO*/{
	return (long double)libc_frexp((double)x, pexponent);
}
/*[[[end:frexpl]]]*/

/*[[[head:ldexpl,hash:CRC-32=0x5488a605]]]*/
/* X times (two to the EXP power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ldexpl") long double
NOTHROW(LIBCCALL libc_ldexpl)(long double x,
                              int exponent)
/*[[[body:ldexpl]]]*/
/*AUTO*/{
	return (long double)libc_ldexp((double)x, exponent);
}
/*[[[end:ldexpl]]]*/

/*[[[head:logl,hash:CRC-32=0x62bea645]]]*/
/* Natural logarithm of X */
INTERN __DECL_SIMD_logl WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.logl") long double
NOTHROW(LIBCCALL libc_logl)(long double x)
/*[[[body:logl]]]*/
/*AUTO*/{
	return (long double)libc_log((double)x);
}
/*[[[end:logl]]]*/

/*[[[head:log10l,hash:CRC-32=0x35a0da4f]]]*/
/* Base-ten logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log10l") long double
NOTHROW(LIBCCALL libc_log10l)(long double x)
/*[[[body:log10l]]]*/
/*AUTO*/{
	return (long double)libc_log10((double)x);
}
/*[[[end:log10l]]]*/

/*[[[head:modfl,hash:CRC-32=0xa7330b50]]]*/
/* Break VALUE into integral and fractional parts */
INTERN NONNULL((2))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.modfl") long double
NOTHROW_NCX(LIBCCALL libc_modfl)(long double x,
                                 long double *iptr)
/*[[[body:modfl]]]*/
/*AUTO*/{
	double ipart;
	long double result;
	result = (long double)libc_modf(x, &ipart);
	*iptr  = (long double)ipart;
	return result;
}
/*[[[end:modfl]]]*/

/*[[[head:expm1,hash:CRC-32=0x108960e]]]*/
/* Return exp(X) - 1 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.expm1") double
NOTHROW(LIBCCALL libc_expm1)(double x)
/*[[[body:expm1]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("expm1"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:expm1]]]*/

/*[[[head:log1p,hash:CRC-32=0x54f70709]]]*/
/* Return log(1 + X) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log1p") double
NOTHROW(LIBCCALL libc_log1p)(double x)
/*[[[body:log1p]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("log1p"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:log1p]]]*/

/*[[[head:logb,hash:CRC-32=0x2858b9e3]]]*/
/* Return the base 2 signed integral exponent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.logb") double
NOTHROW(LIBCCALL libc_logb)(double x)
/*[[[body:logb]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("logb"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:logb]]]*/

/*[[[head:expm1f,hash:CRC-32=0xecbde402]]]*/
/* Return exp(X) - 1 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.expm1f") float
NOTHROW(LIBCCALL libc_expm1f)(float x)
/*[[[body:expm1f]]]*/
/*AUTO*/{
	return (float)libc_expm1((double)x);
}
/*[[[end:expm1f]]]*/

/*[[[head:log1pf,hash:CRC-32=0xb9427505]]]*/
/* Return log(1 + X) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log1pf") float
NOTHROW(LIBCCALL libc_log1pf)(float x)
/*[[[body:log1pf]]]*/
/*AUTO*/{
	return (float)libc_log1p((double)x);
}
/*[[[end:log1pf]]]*/

/*[[[head:logbf,hash:CRC-32=0x56789aa3]]]*/
/* Return the base 2 signed integral exponent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.logbf") float
NOTHROW(LIBCCALL libc_logbf)(float x)
/*[[[body:logbf]]]*/
/*AUTO*/{
	return (float)libc_logb((double)x);
}
/*[[[end:logbf]]]*/

/*[[[head:expm1l,hash:CRC-32=0xc076b59f]]]*/
/* Return exp(X) - 1 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.expm1l") long double
NOTHROW(LIBCCALL libc_expm1l)(long double x)
/*[[[body:expm1l]]]*/
/*AUTO*/{
	return (long double)libc_expm1((double)x);
}
/*[[[end:expm1l]]]*/

/*[[[head:log1pl,hash:CRC-32=0x721c599e]]]*/
/* Return log(1 + X) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log1pl") long double
NOTHROW(LIBCCALL libc_log1pl)(long double x)
/*[[[body:log1pl]]]*/
/*AUTO*/{
	return (long double)libc_log1p((double)x);
}
/*[[[end:log1pl]]]*/

/*[[[head:logbl,hash:CRC-32=0x7e6d1ac5]]]*/
/* Return the base 2 signed integral exponent of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.logbl") long double
NOTHROW(LIBCCALL libc_logbl)(long double x)
/*[[[body:logbl]]]*/
/*AUTO*/{
	return (long double)libc_logb((double)x);
}
/*[[[end:logbl]]]*/

/*[[[head:exp2,hash:CRC-32=0x14d86950]]]*/
/* Compute base-2 exponential of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp2") double
NOTHROW(LIBCCALL libc_exp2)(double x)
/*[[[body:exp2]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("exp2"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:exp2]]]*/

/*[[[head:log2,hash:CRC-32=0xd8092bb]]]*/
/* Compute base-2 logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log2") double
NOTHROW(LIBCCALL libc_log2)(double x)
/*[[[body:log2]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("log2"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:log2]]]*/

/*[[[head:exp2f,hash:CRC-32=0x6af84a10]]]*/
/* Compute base-2 exponential of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp2f") float
NOTHROW(LIBCCALL libc_exp2f)(float x)
/*[[[body:exp2f]]]*/
/*AUTO*/{
	return (float)libc_exp2((double)x);
}
/*[[[end:exp2f]]]*/

/*[[[head:log2f,hash:CRC-32=0x73a0b1fb]]]*/
/* Compute base-2 logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log2f") float
NOTHROW(LIBCCALL libc_log2f)(float x)
/*[[[body:log2f]]]*/
/*AUTO*/{
	return (float)libc_log2((double)x);
}
/*[[[end:log2f]]]*/

/*[[[head:exp2l,hash:CRC-32=0x3bd5eb11]]]*/
/* Compute base-2 exponential of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp2l") long double
NOTHROW(LIBCCALL libc_exp2l)(long double x)
/*[[[body:exp2l]]]*/
/*AUTO*/{
	return (long double)libc_exp2((double)x);
}
/*[[[end:exp2l]]]*/

/*[[[head:log2l,hash:CRC-32=0xa89e9f05]]]*/
/* Compute base-2 logarithm of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.log2l") long double
NOTHROW(LIBCCALL libc_log2l)(long double x)
/*[[[body:log2l]]]*/
/*AUTO*/{
	return (long double)libc_log2((double)x);
}
/*[[[end:log2l]]]*/

/*[[[head:pow,hash:CRC-32=0x743cfb7]]]*/
/* Return X to the Y power */
INTERN __DECL_SIMD_pow WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.pow") double
NOTHROW(LIBCCALL libc_pow)(double x,
                           double y)
/*[[[body:pow]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("pow"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:pow]]]*/

/*[[[head:sqrt,hash:CRC-32=0xefe20169]]]*/
/* Return the square root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sqrt") double
NOTHROW(LIBCCALL libc_sqrt)(double x)
/*[[[body:sqrt]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("sqrt"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:sqrt]]]*/

/*[[[head:powf,hash:CRC-32=0x54629525]]]*/
/* Return X to the Y power */
INTERN __DECL_SIMD_powf WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.powf") float
NOTHROW(LIBCCALL libc_powf)(float x,
                            float y)
/*[[[body:powf]]]*/
/*AUTO*/{
	return (float)libc_pow((double)x, (double)y);
}
/*[[[end:powf]]]*/

/*[[[head:sqrtf,hash:CRC-32=0x91c22229]]]*/
/* Return the square root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sqrtf") float
NOTHROW(LIBCCALL libc_sqrtf)(float x)
/*[[[body:sqrtf]]]*/
/*AUTO*/{
	return (float)libc_sqrt((double)x);
}
/*[[[end:sqrtf]]]*/

/*[[[head:powl,hash:CRC-32=0xa719e4ff]]]*/
/* Return X to the Y power */
INTERN __DECL_SIMD_powl WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.powl") long double
NOTHROW(LIBCCALL libc_powl)(long double x,
                            long double y)
/*[[[body:powl]]]*/
/*AUTO*/{
	return (long double)libc_pow((double)x, (double)y);
}
/*[[[end:powl]]]*/

/*[[[head:sqrtl,hash:CRC-32=0xe08e1c84]]]*/
/* Return the square root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sqrtl") long double
NOTHROW(LIBCCALL libc_sqrtl)(long double x)
/*[[[body:sqrtl]]]*/
/*AUTO*/{
	return (long double)libc_sqrt((double)x);
}
/*[[[end:sqrtl]]]*/

/*[[[head:hypot,hash:CRC-32=0xcdfb90c6]]]*/
/* Return `sqrt(X*X + Y*Y)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.hypot") double
NOTHROW(LIBCCALL libc_hypot)(double x,
                             double y)
/*[[[body:hypot]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("hypot"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:hypot]]]*/

/*[[[head:hypotf,hash:CRC-32=0xf68b8dca]]]*/
/* Return `sqrt(X*X + Y*Y)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.hypotf") float
NOTHROW(LIBCCALL libc_hypotf)(float x,
                              float y)
/*[[[body:hypotf]]]*/
/*AUTO*/{
	return (float)libc_hypot((double)x, (double)y);
}
/*[[[end:hypotf]]]*/

/*[[[head:hypotl,hash:CRC-32=0x93edfa1b]]]*/
/* Return `sqrt(X*X + Y*Y)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.hypotl") long double
NOTHROW(LIBCCALL libc_hypotl)(long double x,
                              long double y)
/*[[[body:hypotl]]]*/
/*AUTO*/{
	return (long double)libc_hypot((double)x, (double)y);
}
/*[[[end:hypotl]]]*/

/*[[[head:cbrt,hash:CRC-32=0x8384dd80]]]*/
/* Return the cube root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cbrt") double
NOTHROW(LIBCCALL libc_cbrt)(double x)
/*[[[body:cbrt]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("cbrt"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:cbrt]]]*/

/*[[[head:cbrtf,hash:CRC-32=0xfda4fec0]]]*/
/* Return the cube root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cbrtf") float
NOTHROW(LIBCCALL libc_cbrtf)(float x)
/*[[[body:cbrtf]]]*/
/*AUTO*/{
	return (float)libc_cbrt((double)x);
}
/*[[[end:cbrtf]]]*/

/*[[[head:cbrtl,hash:CRC-32=0x54a3b0d0]]]*/
/* Return the cube root of X */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.cbrtl") long double
NOTHROW(LIBCCALL libc_cbrtl)(long double x)
/*[[[body:cbrtl]]]*/
/*AUTO*/{
	return (long double)libc_cbrt((double)x);
}
/*[[[end:cbrtl]]]*/

/*[[[head:fmod,hash:CRC-32=0x123ff152]]]*/
/* Floating-point modulo remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.fmod") double
NOTHROW(LIBCCALL libc_fmod)(double x,
                            double y)
/*[[[body:fmod]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("fmod"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:fmod]]]*/

/*[[[head:fmodf,hash:CRC-32=0xde5505a8]]]*/
/* Floating-point modulo remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.fmodf") float
NOTHROW(LIBCCALL libc_fmodf)(float x,
                             float y)
/*[[[body:fmodf]]]*/
/*AUTO*/{
	return (float)libc_fmod((double)x, (double)y);
}
/*[[[end:fmodf]]]*/

/*[[[head:fmodl,hash:CRC-32=0xa29bf110]]]*/
/* Floating-point modulo remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.fmodl") long double
NOTHROW(LIBCCALL libc_fmodl)(long double x,
                             long double y)
/*[[[body:fmodl]]]*/
/*AUTO*/{
	return (long double)libc_fmod((double)x, (double)y);
}
/*[[[end:fmodl]]]*/

/*[[[head:erf,hash:CRC-32=0x9569a0d]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erf") double
NOTHROW(LIBCCALL libc_erf)(double x)
/*[[[body:erf]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("erf"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:erf]]]*/

/*[[[head:erfc,hash:CRC-32=0xe04a40b2]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erfc") double
NOTHROW(LIBCCALL libc_erfc)(double x)
/*[[[body:erfc]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("erfc"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:erfc]]]*/

/*[[[head:lgamma,hash:CRC-32=0xe257d9c1]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgamma") double
NOTHROW(LIBCCALL libc_lgamma)(double x)
/*[[[body:lgamma]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("lgamma"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:lgamma]]]*/

/*[[[head:erff,hash:CRC-32=0xebd868c0]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erff") float
NOTHROW(LIBCCALL libc_erff)(float x)
/*[[[body:erff]]]*/
/*AUTO*/{
	return (float)libc_erf((double)x);
}
/*[[[end:erff]]]*/

/*[[[head:erfcf,hash:CRC-32=0x9e6a63f2]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erfcf") float
NOTHROW(LIBCCALL libc_erfcf)(float x)
/*[[[body:erfcf]]]*/
/*AUTO*/{
	return (float)libc_erfc((double)x);
}
/*[[[end:erfcf]]]*/

/*[[[head:lgammaf,hash:CRC-32=0x701b3327]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgammaf") float
NOTHROW(LIBCCALL libc_lgammaf)(float x)
/*[[[body:lgammaf]]]*/
/*AUTO*/{
	return (float)libc_lgamma((double)x);
}
/*[[[end:lgammaf]]]*/

/*[[[head:erfl,hash:CRC-32=0x63df9e93]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erfl") long double
NOTHROW(LIBCCALL libc_erfl)(long double x)
/*[[[body:erfl]]]*/
/*AUTO*/{
	return (long double)libc_erf((double)x);
}
/*[[[end:erfl]]]*/

/*[[[head:erfcl,hash:CRC-32=0x6524ca7c]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.erfcl") long double
NOTHROW(LIBCCALL libc_erfcl)(long double x)
/*[[[body:erfcl]]]*/
/*AUTO*/{
	return (long double)libc_erfc((double)x);
}
/*[[[end:erfcl]]]*/

/*[[[head:lgammal,hash:CRC-32=0x63650f84]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgammal") long double
NOTHROW(LIBCCALL libc_lgammal)(long double x)
/*[[[body:lgammal]]]*/
/*AUTO*/{
	return (long double)libc_lgamma((double)x);
}
/*[[[end:lgammal]]]*/

/*[[[head:tgamma,hash:CRC-32=0x46ef45a6]]]*/
/* True gamma function */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tgamma") double
NOTHROW(LIBCCALL libc_tgamma)(double x)
/*[[[body:tgamma]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("tgamma"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:tgamma]]]*/

/*[[[head:tgammaf,hash:CRC-32=0xd4a3af40]]]*/
/* True gamma function */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tgammaf") float
NOTHROW(LIBCCALL libc_tgammaf)(float x)
/*[[[body:tgammaf]]]*/
/*AUTO*/{
	return (float)libc_tgamma((double)x);
}
/*[[[end:tgammaf]]]*/

/*[[[head:tgammal,hash:CRC-32=0xe1147c70]]]*/
/* True gamma function */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.tgammal") long double
NOTHROW(LIBCCALL libc_tgammal)(long double x)
/*[[[body:tgammal]]]*/
/*AUTO*/{
	return (long double)libc_tgamma((double)x);
}
/*[[[end:tgammal]]]*/

/*[[[head:rint,hash:CRC-32=0x7287a050]]]*/
/* Return the integer nearest X in the direction of the prevailing rounding mode */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.rint") double
NOTHROW(LIBCCALL libc_rint)(double x)
/*[[[body:rint]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("rint"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:rint]]]*/

/*[[[head:nextafter,hash:CRC-32=0x13f8d9c8]]]*/
/* Return X + epsilon if X < Y, X - epsilon if X > Y */
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nextafter") double
NOTHROW(LIBCCALL libc_nextafter)(double x,
                                 double y)
/*[[[body:nextafter]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("nextafter"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:nextafter]]]*/

/*[[[head:remainder,hash:CRC-32=0x1ad8a24a]]]*/
/* Return the remainder of integer divison X / Y with infinite precision */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remainder") double
NOTHROW(LIBCCALL libc_remainder)(double x,
                                 double y)
/*[[[body:remainder]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("remainder"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:remainder]]]*/

/*[[[head:ilogb,hash:CRC-32=0xa01280c]]]*/
/* Return the binary exponent of X, which must be nonzero */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ilogb") int
NOTHROW(LIBCCALL libc_ilogb)(double x)
/*[[[body:ilogb]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("ilogb"); /* TODO */
	libc_seterrno(ENOSYS);
	return -1;
}
/*[[[end:ilogb]]]*/

/*[[[head:rintf,hash:CRC-32=0xca78310]]]*/
/* Return the integer nearest X in the direction of the prevailing rounding mode */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.rintf") float
NOTHROW(LIBCCALL libc_rintf)(float x)
/*[[[body:rintf]]]*/
/*AUTO*/{
	return (float)libc_rint((double)x);
}
/*[[[end:rintf]]]*/

/*[[[head:nextafterf,hash:CRC-32=0x3560cd52]]]*/
/* Return X + epsilon if X < Y, X - epsilon if X > Y */
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nextafterf") float
NOTHROW(LIBCCALL libc_nextafterf)(float x,
                                  float y)
/*[[[body:nextafterf]]]*/
/*AUTO*/{
	return (float)libc_nextafter((double)x, (double)y);
}
/*[[[end:nextafterf]]]*/

/*[[[head:remainderf,hash:CRC-32=0x3c40b6d0]]]*/
/* Return the remainder of integer divison X / Y with infinite precision */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remainderf") float
NOTHROW(LIBCCALL libc_remainderf)(float x,
                                  float y)
/*[[[body:remainderf]]]*/
/*AUTO*/{
	return (float)libc_remainder((double)x, (double)y);
}
/*[[[end:remainderf]]]*/

/*[[[head:ilogbf,hash:CRC-32=0x39b39213]]]*/
/* Return the binary exponent of X, which must be nonzero */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ilogbf") int
NOTHROW(LIBCCALL libc_ilogbf)(float x)
/*[[[body:ilogbf]]]*/
/*AUTO*/{
	return (int)libc_ilogb((double)x);
}
/*[[[end:ilogbf]]]*/

/*[[[head:rintl,hash:CRC-32=0x5af35907]]]*/
/* Return the integer nearest X in the direction of the prevailing rounding mode */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.rintl") long double
NOTHROW(LIBCCALL libc_rintl)(long double x)
/*[[[body:rintl]]]*/
/*AUTO*/{
	return (long double)libc_rint((double)x);
}
/*[[[end:rintl]]]*/

/*[[[head:nextafterl,hash:CRC-32=0xa31c91f0]]]*/
/* Return X + epsilon if X < Y, X - epsilon if X > Y */
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nextafterl") long double
NOTHROW(LIBCCALL libc_nextafterl)(long double x,
                                  long double y)
/*[[[body:nextafterl]]]*/
/*AUTO*/{
	return (long double)libc_nextafter((double)x, (double)y);
}
/*[[[end:nextafterl]]]*/

/*[[[head:remainderl,hash:CRC-32=0x87040f7a]]]*/
/* Return the remainder of integer divison X / Y with infinite precision */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remainderl") long double
NOTHROW(LIBCCALL libc_remainderl)(long double x,
                                  long double y)
/*[[[body:remainderl]]]*/
/*AUTO*/{
	return (long double)libc_remainder((double)x, (double)y);
}
/*[[[end:remainderl]]]*/

/*[[[head:ilogbl,hash:CRC-32=0x9773b0cb]]]*/
/* Return the binary exponent of X, which must be nonzero */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ilogbl") int
NOTHROW(LIBCCALL libc_ilogbl)(long double x)
/*[[[body:ilogbl]]]*/
/*AUTO*/{
	return (int)libc_ilogb((double)x);
}
/*[[[end:ilogbl]]]*/

/*[[[head:nexttoward,hash:CRC-32=0x9585ce4d]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nexttoward") double
NOTHROW(LIBCCALL libc_nexttoward)(double x,
                                  long double y)
/*[[[body:nexttoward]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("nexttoward"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:nexttoward]]]*/

/*[[[head:scalbn,hash:CRC-32=0x79d5ec80]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbn") double
NOTHROW(LIBCCALL libc_scalbn)(double x,
                              int n)
/*[[[body:scalbn]]]*/
{
	(void)x;
	(void)n;
	CRT_UNIMPLEMENTED("scalbn"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:scalbn]]]*/

/*[[[head:scalbln,hash:CRC-32=0xc6fb39c7]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbln") double
NOTHROW(LIBCCALL libc_scalbln)(double x,
                               long int n)
/*[[[body:scalbln]]]*/
{
	(void)x;
	(void)n;
	CRT_UNIMPLEMENTED("scalbln"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:scalbln]]]*/

/*[[[head:nearbyint,hash:CRC-32=0x2322fd6e]]]*/
/* Round X to integral value in floating-point format using current
 * rounding direction, but do not raise inexact exception */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nearbyint") double
NOTHROW(LIBCCALL libc_nearbyint)(double x)
/*[[[body:nearbyint]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("nearbyint"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:nearbyint]]]*/

/*[[[head:remquo,hash:CRC-32=0xd01fffc4]]]*/
/* Compute remainder of X and Y and put in *QUO a value with sign
 * of x/y and magnitude congruent `mod 2^n' to the magnitude of
 * the integral quotient x/y, with n >= 3 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remquo") double
NOTHROW(LIBCCALL libc_remquo)(double x,
                              double y,
                              int *pquo)
/*[[[body:remquo]]]*/
{
	(void)x;
	(void)y;
	(void)pquo;
	CRT_UNIMPLEMENTED("remquo"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:remquo]]]*/

/*[[[head:lrint,hash:CRC-32=0xbea5c52b]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lrint") long int
NOTHROW(LIBCCALL libc_lrint)(double x)
/*[[[body:lrint]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("lrint"); /* TODO */
	libc_seterrno(ENOSYS);
	return -1;
}
/*[[[end:lrint]]]*/




/*[[[head:llrint,hash:CRC-32=0xf0268cce]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.llrint") __LONGLONG
NOTHROW(LIBCCALL libc_llrint)(double x)
/*[[[body:llrint]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("llrint"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:llrint]]]*/


/*[[[head:nexttowardf,hash:CRC-32=0x4aed3157]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nexttowardf") float
NOTHROW(LIBCCALL libc_nexttowardf)(float x,
                                   long double y)
/*[[[body:nexttowardf]]]*/
/*AUTO*/{
	return (float)libc_nexttoward((double)x, y);
}
/*[[[end:nexttowardf]]]*/

/*[[[head:scalbnf,hash:CRC-32=0x73966882]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbnf") float
NOTHROW(LIBCCALL libc_scalbnf)(float x,
                               int n)
/*[[[body:scalbnf]]]*/
/*AUTO*/{
	return (float)libc_scalbn((double)x, n);
}
/*[[[end:scalbnf]]]*/

/*[[[head:scalblnf,hash:CRC-32=0xcc8c9398]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalblnf") float
NOTHROW(LIBCCALL libc_scalblnf)(float x,
                                long int n)
/*[[[body:scalblnf]]]*/
/*AUTO*/{
	return (float)libc_scalbln((double)x, n);
}
/*[[[end:scalblnf]]]*/

/*[[[head:nearbyintf,hash:CRC-32=0x7207853c]]]*/
/* Round X to integral value in floating-point format using current
 * rounding direction, but do not raise inexact exception */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nearbyintf") float
NOTHROW(LIBCCALL libc_nearbyintf)(float x)
/*[[[body:nearbyintf]]]*/
/*AUTO*/{
	return (float)libc_nearbyint((double)x);
}
/*[[[end:nearbyintf]]]*/

/*[[[head:remquof,hash:CRC-32=0x4f335ffe]]]*/
/* Compute remainder of X and Y and put in *QUO a value with sign
 * of x/y and magnitude congruent `mod 2^n' to the magnitude of
 * the integral quotient x/y, with n >= 3 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remquof") float
NOTHROW(LIBCCALL libc_remquof)(float x,
                               float y,
                               int *pquo)
/*[[[body:remquof]]]*/
/*AUTO*/{
	return (float)libc_remquo((double)x, (double)y, pquo);
}
/*[[[end:remquof]]]*/

/*[[[head:lrintf,hash:CRC-32=0x37fe5ef4]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lrintf") long int
NOTHROW(LIBCCALL libc_lrintf)(float x)
/*[[[body:lrintf]]]*/
/*AUTO*/{
	return (long int)libc_lrint((double)x);
}
/*[[[end:lrintf]]]*/




/*[[[head:llrintf,hash:CRC-32=0x47e863e4]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.llrintf") __LONGLONG
NOTHROW(LIBCCALL libc_llrintf)(float x)
/*[[[body:llrintf]]]*/
/*AUTO*/{
	return (__LONGLONG)libc_llrint((double)x);
}
/*[[[end:llrintf]]]*/


/*[[[head:nexttowardl,hash:CRC-32=0x99b1b1f]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nexttowardl") long double
NOTHROW(LIBCCALL libc_nexttowardl)(long double x,
                                   long double y)
/*[[[body:nexttowardl]]]*/
/*AUTO*/{
	return (long double)libc_nexttoward((double)x, (double)y);
}
/*[[[end:nexttowardl]]]*/

/*[[[head:scalbnl,hash:CRC-32=0xa99133e5]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbnl") long double
NOTHROW(LIBCCALL libc_scalbnl)(long double x,
                               int n)
/*[[[body:scalbnl]]]*/
/*AUTO*/{
	return (long double)libc_scalbn((double)x, n);
}
/*[[[end:scalbnl]]]*/

/*[[[head:scalblnl,hash:CRC-32=0x4f085193]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalblnl") long double
NOTHROW(LIBCCALL libc_scalblnl)(long double x,
                                long int n)
/*[[[body:scalblnl]]]*/
/*AUTO*/{
	return (long double)libc_scalbln((double)x, n);
}
/*[[[end:scalblnl]]]*/

/*[[[head:nearbyintl,hash:CRC-32=0x34907788]]]*/
/* Round X to integral value in floating-point format using current
 * rounding direction, but do not raise inexact exception */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.nearbyintl") long double
NOTHROW(LIBCCALL libc_nearbyintl)(long double x)
/*[[[body:nearbyintl]]]*/
/*AUTO*/{
	return (long double)libc_nearbyint((double)x);
}
/*[[[end:nearbyintl]]]*/

/*[[[head:remquol,hash:CRC-32=0x2a8287b2]]]*/
/* Compute remainder of X and Y and put in *QUO a value with sign
 * of x/y and magnitude congruent `mod 2^n' to the magnitude of
 * the integral quotient x/y, with n >= 3 */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.remquol") long double
NOTHROW(LIBCCALL libc_remquol)(long double x,
                               long double y,
                               int *pquo)
/*[[[body:remquol]]]*/
/*AUTO*/{
	return (long double)libc_remquo((double)x, (double)y, pquo);
}
/*[[[end:remquol]]]*/

/*[[[head:lrintl,hash:CRC-32=0xc2810d9]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lrintl") long int
NOTHROW(LIBCCALL libc_lrintl)(long double x)
/*[[[body:lrintl]]]*/
/*AUTO*/{
	return (long int)libc_lrint((double)x);
}
/*[[[end:lrintl]]]*/




/*[[[head:llrintl,hash:CRC-32=0x65c1458b]]]*/
/* Round X to nearest integral value according to current rounding direction */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.llrintl") __LONGLONG
NOTHROW(LIBCCALL libc_llrintl)(long double x)
/*[[[body:llrintl]]]*/
/*AUTO*/{
	return (__LONGLONG)libc_llrint((double)x);
}
/*[[[end:llrintl]]]*/


/*[[[head:sincos,hash:CRC-32=0x7d55e0c]]]*/
/* Cosine and sine of X */
INTERN __DECL_SIMD_sincos NONNULL((2, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sincos") void
NOTHROW(LIBCCALL libc_sincos)(double x,
                              double *psinx,
                              double *pcosx)
/*[[[body:sincos]]]*/
{
	(void)x;
	(void)psinx;
	(void)pcosx;
	CRT_UNIMPLEMENTED("sincos"); /* TODO */
	libc_seterrno(ENOSYS);
}
/*[[[end:sincos]]]*/

/*[[[head:exp10,hash:CRC-32=0xede6e866]]]*/
/* A function missing in all standards: compute exponent to base ten */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp10") double
NOTHROW(LIBCCALL libc_exp10)(double x)
/*[[[body:exp10]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("exp10"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:exp10]]]*/

/*[[[head:pow10,hash:CRC-32=0xcae94563]]]*/
/* Another name occasionally used */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.pow10") double
NOTHROW(LIBCCALL libc_pow10)(double x)
/*[[[body:pow10]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("pow10"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:pow10]]]*/

/*[[[head:sincosf,hash:CRC-32=0xebf947f3]]]*/
/* Cosine and sine of X */
INTERN __DECL_SIMD_sincosf NONNULL((2, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sincosf") void
NOTHROW(LIBCCALL libc_sincosf)(float x,
                               float *psinx,
                               float *pcosx)
/*[[[body:sincosf]]]*/
/*AUTO*/{
	double sinx, cosx;
	libc_sincos((double)x, &sinx, &cosx);
	*psinx = (float)sinx;
	*pcosx = (float)cosx;
}
/*[[[end:sincosf]]]*/

/*[[[head:exp10f,hash:CRC-32=0x539a6a]]]*/
/* A function missing in all standards: compute exponent to base ten */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp10f") float
NOTHROW(LIBCCALL libc_exp10f)(float x)
/*[[[body:exp10f]]]*/
/*AUTO*/{
	return (float)libc_exp10((double)x);
}
/*[[[end:exp10f]]]*/

/*[[[head:pow10f,hash:CRC-32=0x275c376f]]]*/
/* Another name occasionally used */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.pow10f") float
NOTHROW(LIBCCALL libc_pow10f)(float x)
/*[[[body:pow10f]]]*/
/*AUTO*/{
	return (float)libc_pow10((double)x);
}
/*[[[end:pow10f]]]*/

/*[[[head:sincosl,hash:CRC-32=0x3eca8b77]]]*/
/* Cosine and sine of X */
INTERN __DECL_SIMD_sincosl NONNULL((2, 3))
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.sincosl") void
NOTHROW(LIBCCALL libc_sincosl)(long double x,
                               long double *psinx,
                               long double *pcosx)
/*[[[body:sincosl]]]*/
/*AUTO*/{
	double sinx, cosx;
	libc_sincos((double)x, &sinx, &cosx);
	*psinx = (long double)sinx;
	*pcosx = (long double)cosx;
}
/*[[[end:sincosl]]]*/

/*[[[head:exp10l,hash:CRC-32=0x532de8f9]]]*/
/* A function missing in all standards: compute exponent to base ten */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.exp10l") long double
NOTHROW(LIBCCALL libc_exp10l)(long double x)
/*[[[body:exp10l]]]*/
/*AUTO*/{
	return (long double)libc_exp10((double)x);
}
/*[[[end:exp10l]]]*/

/*[[[head:pow10l,hash:CRC-32=0x8f9a1dab]]]*/
/* Another name occasionally used */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.pow10l") long double
NOTHROW(LIBCCALL libc_pow10l)(long double x)
/*[[[body:pow10l]]]*/
/*AUTO*/{
	return (long double)libc_pow10((double)x);
}
/*[[[end:pow10l]]]*/

/*[[[head:drem,hash:CRC-32=0x61a10eba]]]*/
/* Return the remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.drem") double
NOTHROW(LIBCCALL libc_drem)(double x,
                            double y)
/*[[[body:drem]]]*/
{
	(void)x;
	(void)y;
	CRT_UNIMPLEMENTED("drem"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:drem]]]*/

/*[[[head:significand,hash:CRC-32=0x12c908f2]]]*/
/* Return the fractional part of X after dividing out `ilogb (X)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.significand") double
NOTHROW(LIBCCALL libc_significand)(double x)
/*[[[body:significand]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("significand"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:significand]]]*/

/*[[[head:dremf,hash:CRC-32=0xadcbfa40]]]*/
/* Return the remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.dremf") float
NOTHROW(LIBCCALL libc_dremf)(float x,
                             float y)
/*[[[body:dremf]]]*/
/*AUTO*/{
	return (float)libc_drem((double)x, (double)y);
}
/*[[[end:dremf]]]*/

/*[[[head:significandf,hash:CRC-32=0x4c835be]]]*/
/* Return the fractional part of X after dividing out `ilogb (X)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.significandf") float
NOTHROW(LIBCCALL libc_significandf)(float x)
/*[[[body:significandf]]]*/
/*AUTO*/{
	return (float)libc_significand((double)x);
}
/*[[[end:significandf]]]*/

/*[[[head:dreml,hash:CRC-32=0x4479566d]]]*/
/* Return the remainder of X/Y */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.dreml") long double
NOTHROW(LIBCCALL libc_dreml)(long double x,
                             long double y)
/*[[[body:dreml]]]*/
/*AUTO*/{
	return (long double)libc_drem((double)x, (double)y);
}
/*[[[end:dreml]]]*/

/*[[[head:significandl,hash:CRC-32=0x603e4b39]]]*/
/* Return the fractional part of X after dividing out `ilogb (X)' */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.significandl") long double
NOTHROW(LIBCCALL libc_significandl)(long double x)
/*[[[body:significandl]]]*/
/*AUTO*/{
	return (long double)libc_significand((double)x);
}
/*[[[end:significandl]]]*/

/*[[[head:j0,hash:CRC-32=0x39953800]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j0") double
NOTHROW(LIBCCALL libc_j0)(double x)
/*[[[body:j0]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("j0"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:j0]]]*/

/*[[[head:j1,hash:CRC-32=0xddf9effc]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j1") double
NOTHROW(LIBCCALL libc_j1)(double x)
/*[[[body:j1]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("j1"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:j1]]]*/

/*[[[head:jn,hash:CRC-32=0xe273777d]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.jn") double
NOTHROW(LIBCCALL libc_jn)(int n,
                          double x)
/*[[[body:jn]]]*/
{
	(void)n;
	(void)x;
	CRT_UNIMPLEMENTED("jn"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:jn]]]*/

/*[[[head:y0,hash:CRC-32=0xaaf646ae]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y0") double
NOTHROW(LIBCCALL libc_y0)(double x)
/*[[[body:y0]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("y0"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:y0]]]*/

/*[[[head:y1,hash:CRC-32=0x4e9a9152]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y1") double
NOTHROW(LIBCCALL libc_y1)(double x)
/*[[[body:y1]]]*/
{
	(void)x;
	CRT_UNIMPLEMENTED("y1"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:y1]]]*/

/*[[[head:yn,hash:CRC-32=0xce1454d2]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.yn") double
NOTHROW(LIBCCALL libc_yn)(int n,
                          double x)
/*[[[body:yn]]]*/
{
	(void)n;
	(void)x;
	CRT_UNIMPLEMENTED("yn"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:yn]]]*/

/*[[[head:j0f,hash:CRC-32=0x7cccee09]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j0f") float
NOTHROW(LIBCCALL libc_j0f)(float x)
/*[[[body:j0f]]]*/
/*AUTO*/{
	return (float)libc_j0((double)x);
}
/*[[[end:j0f]]]*/

/*[[[head:j1f,hash:CRC-32=0x98a039f5]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j1f") float
NOTHROW(LIBCCALL libc_j1f)(float x)
/*[[[body:j1f]]]*/
/*AUTO*/{
	return (float)libc_j1((double)x);
}
/*[[[end:j1f]]]*/

/*[[[head:jnf,hash:CRC-32=0x9c47c776]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.jnf") float
NOTHROW(LIBCCALL libc_jnf)(int n,
                           float x)
/*[[[body:jnf]]]*/
/*AUTO*/{
	return (float)libc_jn(n, (double)x);
}
/*[[[end:jnf]]]*/

/*[[[head:y0f,hash:CRC-32=0xefaf90a7]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y0f") float
NOTHROW(LIBCCALL libc_y0f)(float x)
/*[[[body:y0f]]]*/
/*AUTO*/{
	return (float)libc_y0((double)x);
}
/*[[[end:y0f]]]*/

/*[[[head:y1f,hash:CRC-32=0xbc3475b]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y1f") float
NOTHROW(LIBCCALL libc_y1f)(float x)
/*[[[body:y1f]]]*/
/*AUTO*/{
	return (float)libc_y1((double)x);
}
/*[[[end:y1f]]]*/

/*[[[head:ynf,hash:CRC-32=0xda021e2c]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ynf") float
NOTHROW(LIBCCALL libc_ynf)(int n,
                           float x)
/*[[[body:ynf]]]*/
/*AUTO*/{
	return (float)libc_yn(n, (double)x);
}
/*[[[end:ynf]]]*/

/*[[[head:j0l,hash:CRC-32=0x78e97068]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j0l") long double
NOTHROW(LIBCCALL libc_j0l)(long double x)
/*[[[body:j0l]]]*/
/*AUTO*/{
	return (long double)libc_j0((double)x);
}
/*[[[end:j0l]]]*/

/*[[[head:j1l,hash:CRC-32=0xdd7cc91a]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.j1l") long double
NOTHROW(LIBCCALL libc_j1l)(long double x)
/*[[[body:j1l]]]*/
/*AUTO*/{
	return (long double)libc_j1((double)x);
}
/*[[[end:j1l]]]*/

/*[[[head:jnl,hash:CRC-32=0x690c871]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.jnl") long double
NOTHROW(LIBCCALL libc_jnl)(int n,
                           long double x)
/*[[[body:jnl]]]*/
/*AUTO*/{
	return (long double)libc_jn(n, (double)x);
}
/*[[[end:jnl]]]*/

/*[[[head:y0l,hash:CRC-32=0x515c838d]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y0l") long double
NOTHROW(LIBCCALL libc_y0l)(long double x)
/*[[[body:y0l]]]*/
/*AUTO*/{
	return (long double)libc_y0((double)x);
}
/*[[[end:y0l]]]*/

/*[[[head:y1l,hash:CRC-32=0xf4c93aff]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.y1l") long double
NOTHROW(LIBCCALL libc_y1l)(long double x)
/*[[[body:y1l]]]*/
/*AUTO*/{
	return (long double)libc_y1((double)x);
}
/*[[[end:y1l]]]*/

/*[[[head:ynl,hash:CRC-32=0xeb5299da]]]*/
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.ynl") long double
NOTHROW(LIBCCALL libc_ynl)(int n,
                           long double x)
/*[[[body:ynl]]]*/
/*AUTO*/{
	return (long double)libc_yn(n, (double)x);
}
/*[[[end:ynl]]]*/

/*[[[head:lgamma_r,hash:CRC-32=0x73e4b102]]]*/
/* Reentrant version of lgamma. This function uses the global variable
 * `signgam'.  The reentrant version instead takes a pointer and stores
 * the value through it */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgamma_r") double
NOTHROW_NCX(LIBCCALL libc_lgamma_r)(double x,
                                    int *signgamp)
/*[[[body:lgamma_r]]]*/
{
	(void)x;
	(void)signgamp;
	CRT_UNIMPLEMENTED("lgamma_r"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:lgamma_r]]]*/

/*[[[head:lgammaf_r,hash:CRC-32=0xcbceb0ca]]]*/
/* Reentrant version of lgamma. This function uses the global variable
 * `signgam'.  The reentrant version instead takes a pointer and stores
 * the value through it */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgammaf_r") float
NOTHROW_NCX(LIBCCALL libc_lgammaf_r)(float x,
                                     int *signgamp)
/*[[[body:lgammaf_r]]]*/
/*AUTO*/{
	return (float)libc_lgamma_r((double)x, signgamp);
}
/*[[[end:lgammaf_r]]]*/

/*[[[head:lgammal_r,hash:CRC-32=0x73706da2]]]*/
/* Reentrant version of lgamma. This function uses the global variable
 * `signgam'.  The reentrant version instead takes a pointer and stores
 * the value through it */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.lgammal_r") long double
NOTHROW_NCX(LIBCCALL libc_lgammal_r)(long double x,
                                     int *signgamp)
/*[[[body:lgammal_r]]]*/
/*AUTO*/{
	return (long double)libc_lgamma_r((double)x, signgamp);
}
/*[[[end:lgammal_r]]]*/

/*[[[head:scalb,hash:CRC-32=0xff9f47e4]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalb") double
NOTHROW(LIBCCALL libc_scalb)(double x,
                             double n)
/*[[[body:scalb]]]*/
{
	(void)x;
	(void)n;
	CRT_UNIMPLEMENTED("scalb"); /* TODO */
	libc_seterrno(ENOSYS);
	return 0;
}
/*[[[end:scalb]]]*/

/*[[[head:scalbf,hash:CRC-32=0xc4ef5ae8]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbf") float
NOTHROW(LIBCCALL libc_scalbf)(float x,
                              float n)
/*[[[body:scalbf]]]*/
/*AUTO*/{
	return (float)libc_scalb((double)x, (double)n);
}
/*[[[end:scalbf]]]*/

/*[[[head:scalbl,hash:CRC-32=0x96d23798]]]*/
/* Return X times (2 to the Nth power) */
INTERN WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.scalbl") long double
NOTHROW(LIBCCALL libc_scalbl)(long double x,
                              long double n)
/*[[[body:scalbl]]]*/
/*AUTO*/{
	return (long double)libc_scalb((double)x, (double)n);
}
/*[[[end:scalbl]]]*/

/*[[[head:__fpclassify,hash:CRC-32=0x26882c0b]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__fpclassify") int
NOTHROW(LIBCCALL libc___fpclassify)(double val)
/*[[[body:__fpclassify]]]*/
{
	(void)val;
	CRT_UNIMPLEMENTED("__fpclassify"); /* TODO */
	libc_seterrno(ENOSYS);
	return -1;
}
/*[[[end:__fpclassify]]]*/

/*[[[head:__signbit,hash:CRC-32=0x54612ad2]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__signbit") int
NOTHROW(LIBCCALL libc___signbit)(double val)
/*[[[body:__signbit]]]*/
{
	(void)val;
	CRT_UNIMPLEMENTED("__signbit"); /* TODO */
	libc_seterrno(ENOSYS);
	return -1;
}
/*[[[end:__signbit]]]*/

/*[[[head:__fpclassifyf,hash:CRC-32=0x491d4019]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__fpclassifyf") int
NOTHROW(LIBCCALL libc___fpclassifyf)(float val)
/*[[[body:__fpclassifyf]]]*/
/*AUTO*/{
	return (int)libc___fpclassify((double)val);
}
/*[[[end:__fpclassifyf]]]*/

/*[[[head:__signbitf,hash:CRC-32=0xf104586b]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__signbitf") int
NOTHROW(LIBCCALL libc___signbitf)(float val)
/*[[[body:__signbitf]]]*/
/*AUTO*/{
	return (int)libc___signbit((double)val);
}
/*[[[end:__signbitf]]]*/

/*[[[head:__fpclassifyl,hash:CRC-32=0x737230ea]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__fpclassifyl") int
NOTHROW(LIBCCALL libc___fpclassifyl)(long double val)
/*[[[body:__fpclassifyl]]]*/
/*AUTO*/{
	return (int)libc___fpclassify((double)val);
}
/*[[[end:__fpclassifyl]]]*/

/*[[[head:__signbitl,hash:CRC-32=0x8e6361a7]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__signbitl") int
NOTHROW(LIBCCALL libc___signbitl)(long double val)
/*[[[body:__signbitl]]]*/
/*AUTO*/{
	return (int)libc___signbit((double)val);
}
/*[[[end:__signbitl]]]*/

/*[[[head:__issignaling,hash:CRC-32=0xe4abcaf2]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__issignaling") int
NOTHROW(LIBCCALL libc___issignaling)(double val)
/*[[[body:__issignaling]]]*/
{
	(void)val;
	CRT_UNIMPLEMENTED("__issignaling"); /* TODO */
	libc_seterrno(ENOSYS);
	return -1;
}
/*[[[end:__issignaling]]]*/

/*[[[head:__issignalingf,hash:CRC-32=0x666b1cec]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__issignalingf") int
NOTHROW(LIBCCALL libc___issignalingf)(float val)
/*[[[body:__issignalingf]]]*/
/*AUTO*/{
	return (int)libc___issignaling((double)val);
}
/*[[[end:__issignalingf]]]*/

/*[[[head:__issignalingl,hash:CRC-32=0x12574df5]]]*/
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.math.math.__issignalingl") int
NOTHROW(LIBCCALL libc___issignalingl)(long double val)
/*[[[body:__issignalingl]]]*/
/*AUTO*/{
	return (int)libc___issignaling((double)val);
}
/*[[[end:__issignalingl]]]*/

/*[[[end:implementation]]]*/



/*[[[start:exports,hash:CRC-32=0x8deaff5e]]]*/
DEFINE_PUBLIC_WEAK_ALIAS(acos, libc_acos);
DEFINE_PUBLIC_WEAK_ALIAS(__acos, libc_acos);
DEFINE_PUBLIC_WEAK_ALIAS(asin, libc_asin);
DEFINE_PUBLIC_WEAK_ALIAS(__asin, libc_asin);
DEFINE_PUBLIC_WEAK_ALIAS(atan, libc_atan);
DEFINE_PUBLIC_WEAK_ALIAS(__atan, libc_atan);
DEFINE_PUBLIC_WEAK_ALIAS(atan2, libc_atan2);
DEFINE_PUBLIC_WEAK_ALIAS(__atan2, libc_atan2);
DEFINE_PUBLIC_WEAK_ALIAS(cos, libc_cos);
DEFINE_PUBLIC_WEAK_ALIAS(__cos, libc_cos);
DEFINE_PUBLIC_WEAK_ALIAS(sin, libc_sin);
DEFINE_PUBLIC_WEAK_ALIAS(__sin, libc_sin);
DEFINE_PUBLIC_WEAK_ALIAS(tan, libc_tan);
DEFINE_PUBLIC_WEAK_ALIAS(__tan, libc_tan);
DEFINE_PUBLIC_WEAK_ALIAS(acosf, libc_acosf);
DEFINE_PUBLIC_WEAK_ALIAS(__acosf, libc_acosf);
DEFINE_PUBLIC_WEAK_ALIAS(asinf, libc_asinf);
DEFINE_PUBLIC_WEAK_ALIAS(__asinf, libc_asinf);
DEFINE_PUBLIC_WEAK_ALIAS(atanf, libc_atanf);
DEFINE_PUBLIC_WEAK_ALIAS(__atanf, libc_atanf);
DEFINE_PUBLIC_WEAK_ALIAS(atan2f, libc_atan2f);
DEFINE_PUBLIC_WEAK_ALIAS(__atan2f, libc_atan2f);
DEFINE_PUBLIC_WEAK_ALIAS(cosf, libc_cosf);
DEFINE_PUBLIC_WEAK_ALIAS(__cosf, libc_cosf);
DEFINE_PUBLIC_WEAK_ALIAS(sinf, libc_sinf);
DEFINE_PUBLIC_WEAK_ALIAS(__sinf, libc_sinf);
DEFINE_PUBLIC_WEAK_ALIAS(tanf, libc_tanf);
DEFINE_PUBLIC_WEAK_ALIAS(__tanf, libc_tanf);
DEFINE_PUBLIC_WEAK_ALIAS(acosl, libc_acosl);
DEFINE_PUBLIC_WEAK_ALIAS(__acosl, libc_acosl);
DEFINE_PUBLIC_WEAK_ALIAS(asinl, libc_asinl);
DEFINE_PUBLIC_WEAK_ALIAS(__asinl, libc_asinl);
DEFINE_PUBLIC_WEAK_ALIAS(atanl, libc_atanl);
DEFINE_PUBLIC_WEAK_ALIAS(__atanl, libc_atanl);
DEFINE_PUBLIC_WEAK_ALIAS(atan2l, libc_atan2l);
DEFINE_PUBLIC_WEAK_ALIAS(__atan2l, libc_atan2l);
DEFINE_PUBLIC_WEAK_ALIAS(cosl, libc_cosl);
DEFINE_PUBLIC_WEAK_ALIAS(__cosl, libc_cosl);
DEFINE_PUBLIC_WEAK_ALIAS(sinl, libc_sinl);
DEFINE_PUBLIC_WEAK_ALIAS(__sinl, libc_sinl);
DEFINE_PUBLIC_WEAK_ALIAS(tanl, libc_tanl);
DEFINE_PUBLIC_WEAK_ALIAS(__tanl, libc_tanl);
DEFINE_PUBLIC_WEAK_ALIAS(cosh, libc_cosh);
DEFINE_PUBLIC_WEAK_ALIAS(__cosh, libc_cosh);
DEFINE_PUBLIC_WEAK_ALIAS(sinh, libc_sinh);
DEFINE_PUBLIC_WEAK_ALIAS(__sinh, libc_sinh);
DEFINE_PUBLIC_WEAK_ALIAS(tanh, libc_tanh);
DEFINE_PUBLIC_WEAK_ALIAS(__tanh, libc_tanh);
DEFINE_PUBLIC_WEAK_ALIAS(coshf, libc_coshf);
DEFINE_PUBLIC_WEAK_ALIAS(__coshf, libc_coshf);
DEFINE_PUBLIC_WEAK_ALIAS(sinhf, libc_sinhf);
DEFINE_PUBLIC_WEAK_ALIAS(__sinhf, libc_sinhf);
DEFINE_PUBLIC_WEAK_ALIAS(tanhf, libc_tanhf);
DEFINE_PUBLIC_WEAK_ALIAS(__tanhf, libc_tanhf);
DEFINE_PUBLIC_WEAK_ALIAS(coshl, libc_coshl);
DEFINE_PUBLIC_WEAK_ALIAS(__coshl, libc_coshl);
DEFINE_PUBLIC_WEAK_ALIAS(sinhl, libc_sinhl);
DEFINE_PUBLIC_WEAK_ALIAS(__sinhl, libc_sinhl);
DEFINE_PUBLIC_WEAK_ALIAS(tanhl, libc_tanhl);
DEFINE_PUBLIC_WEAK_ALIAS(__tanhl, libc_tanhl);
DEFINE_PUBLIC_WEAK_ALIAS(acosh, libc_acosh);
DEFINE_PUBLIC_WEAK_ALIAS(__acosh, libc_acosh);
DEFINE_PUBLIC_WEAK_ALIAS(asinh, libc_asinh);
DEFINE_PUBLIC_WEAK_ALIAS(__asinh, libc_asinh);
DEFINE_PUBLIC_WEAK_ALIAS(atanh, libc_atanh);
DEFINE_PUBLIC_WEAK_ALIAS(__atanh, libc_atanh);
DEFINE_PUBLIC_WEAK_ALIAS(acoshf, libc_acoshf);
DEFINE_PUBLIC_WEAK_ALIAS(__acoshf, libc_acoshf);
DEFINE_PUBLIC_WEAK_ALIAS(asinhf, libc_asinhf);
DEFINE_PUBLIC_WEAK_ALIAS(__asinhf, libc_asinhf);
DEFINE_PUBLIC_WEAK_ALIAS(atanhf, libc_atanhf);
DEFINE_PUBLIC_WEAK_ALIAS(__atanhf, libc_atanhf);
DEFINE_PUBLIC_WEAK_ALIAS(acoshl, libc_acoshl);
DEFINE_PUBLIC_WEAK_ALIAS(__acoshl, libc_acoshl);
DEFINE_PUBLIC_WEAK_ALIAS(asinhl, libc_asinhl);
DEFINE_PUBLIC_WEAK_ALIAS(__asinhl, libc_asinhl);
DEFINE_PUBLIC_WEAK_ALIAS(atanhl, libc_atanhl);
DEFINE_PUBLIC_WEAK_ALIAS(__atanhl, libc_atanhl);
DEFINE_PUBLIC_WEAK_ALIAS(exp, libc_exp);
DEFINE_PUBLIC_WEAK_ALIAS(__exp, libc_exp);
DEFINE_PUBLIC_WEAK_ALIAS(frexp, libc_frexp);
DEFINE_PUBLIC_WEAK_ALIAS(__frexp, libc_frexp);
DEFINE_PUBLIC_WEAK_ALIAS(ldexp, libc_ldexp);
DEFINE_PUBLIC_WEAK_ALIAS(__ldexp, libc_ldexp);
DEFINE_PUBLIC_WEAK_ALIAS(log, libc_log);
DEFINE_PUBLIC_WEAK_ALIAS(__log, libc_log);
DEFINE_PUBLIC_WEAK_ALIAS(log10, libc_log10);
DEFINE_PUBLIC_WEAK_ALIAS(__log10, libc_log10);
DEFINE_PUBLIC_WEAK_ALIAS(modf, libc_modf);
DEFINE_PUBLIC_WEAK_ALIAS(__modf, libc_modf);
DEFINE_PUBLIC_WEAK_ALIAS(expf, libc_expf);
DEFINE_PUBLIC_WEAK_ALIAS(__expf, libc_expf);
DEFINE_PUBLIC_WEAK_ALIAS(frexpf, libc_frexpf);
DEFINE_PUBLIC_WEAK_ALIAS(__frexpf, libc_frexpf);
DEFINE_PUBLIC_WEAK_ALIAS(ldexpf, libc_ldexpf);
DEFINE_PUBLIC_WEAK_ALIAS(__ldexpf, libc_ldexpf);
DEFINE_PUBLIC_WEAK_ALIAS(logf, libc_logf);
DEFINE_PUBLIC_WEAK_ALIAS(__logf, libc_logf);
DEFINE_PUBLIC_WEAK_ALIAS(log10f, libc_log10f);
DEFINE_PUBLIC_WEAK_ALIAS(__log10f, libc_log10f);
DEFINE_PUBLIC_WEAK_ALIAS(modff, libc_modff);
DEFINE_PUBLIC_WEAK_ALIAS(__modff, libc_modff);
DEFINE_PUBLIC_WEAK_ALIAS(expl, libc_expl);
DEFINE_PUBLIC_WEAK_ALIAS(__expl, libc_expl);
DEFINE_PUBLIC_WEAK_ALIAS(frexpl, libc_frexpl);
DEFINE_PUBLIC_WEAK_ALIAS(__frexpl, libc_frexpl);
DEFINE_PUBLIC_WEAK_ALIAS(ldexpl, libc_ldexpl);
DEFINE_PUBLIC_WEAK_ALIAS(__ldexpl, libc_ldexpl);
DEFINE_PUBLIC_WEAK_ALIAS(logl, libc_logl);
DEFINE_PUBLIC_WEAK_ALIAS(__logl, libc_logl);
DEFINE_PUBLIC_WEAK_ALIAS(log10l, libc_log10l);
DEFINE_PUBLIC_WEAK_ALIAS(__log10l, libc_log10l);
DEFINE_PUBLIC_WEAK_ALIAS(modfl, libc_modfl);
DEFINE_PUBLIC_WEAK_ALIAS(__modfl, libc_modfl);
DEFINE_PUBLIC_WEAK_ALIAS(expm1, libc_expm1);
DEFINE_PUBLIC_WEAK_ALIAS(__expm1, libc_expm1);
DEFINE_PUBLIC_WEAK_ALIAS(log1p, libc_log1p);
DEFINE_PUBLIC_WEAK_ALIAS(__log1p, libc_log1p);
DEFINE_PUBLIC_WEAK_ALIAS(logb, libc_logb);
DEFINE_PUBLIC_WEAK_ALIAS(_logb, libc_logb);
DEFINE_PUBLIC_WEAK_ALIAS(__logb, libc_logb);
DEFINE_PUBLIC_WEAK_ALIAS(expm1f, libc_expm1f);
DEFINE_PUBLIC_WEAK_ALIAS(__expm1f, libc_expm1f);
DEFINE_PUBLIC_WEAK_ALIAS(log1pf, libc_log1pf);
DEFINE_PUBLIC_WEAK_ALIAS(__log1pf, libc_log1pf);
DEFINE_PUBLIC_WEAK_ALIAS(logbf, libc_logbf);
DEFINE_PUBLIC_WEAK_ALIAS(__logbf, libc_logbf);
DEFINE_PUBLIC_WEAK_ALIAS(expm1l, libc_expm1l);
DEFINE_PUBLIC_WEAK_ALIAS(__expm1l, libc_expm1l);
DEFINE_PUBLIC_WEAK_ALIAS(log1pl, libc_log1pl);
DEFINE_PUBLIC_WEAK_ALIAS(__log1pl, libc_log1pl);
DEFINE_PUBLIC_WEAK_ALIAS(logbl, libc_logbl);
DEFINE_PUBLIC_WEAK_ALIAS(__logbl, libc_logbl);
DEFINE_PUBLIC_WEAK_ALIAS(exp2, libc_exp2);
DEFINE_PUBLIC_WEAK_ALIAS(__exp2, libc_exp2);
DEFINE_PUBLIC_WEAK_ALIAS(log2, libc_log2);
DEFINE_PUBLIC_WEAK_ALIAS(__log2, libc_log2);
DEFINE_PUBLIC_WEAK_ALIAS(exp2f, libc_exp2f);
DEFINE_PUBLIC_WEAK_ALIAS(__exp2f, libc_exp2f);
DEFINE_PUBLIC_WEAK_ALIAS(log2f, libc_log2f);
DEFINE_PUBLIC_WEAK_ALIAS(__log2f, libc_log2f);
DEFINE_PUBLIC_WEAK_ALIAS(exp2l, libc_exp2l);
DEFINE_PUBLIC_WEAK_ALIAS(__exp2l, libc_exp2l);
DEFINE_PUBLIC_WEAK_ALIAS(log2l, libc_log2l);
DEFINE_PUBLIC_WEAK_ALIAS(__log2l, libc_log2l);
DEFINE_PUBLIC_WEAK_ALIAS(pow, libc_pow);
DEFINE_PUBLIC_WEAK_ALIAS(__pow, libc_pow);
DEFINE_PUBLIC_WEAK_ALIAS(sqrt, libc_sqrt);
DEFINE_PUBLIC_WEAK_ALIAS(__sqrt, libc_sqrt);
DEFINE_PUBLIC_WEAK_ALIAS(powf, libc_powf);
DEFINE_PUBLIC_WEAK_ALIAS(__powf, libc_powf);
DEFINE_PUBLIC_WEAK_ALIAS(sqrtf, libc_sqrtf);
DEFINE_PUBLIC_WEAK_ALIAS(__sqrtf, libc_sqrtf);
DEFINE_PUBLIC_WEAK_ALIAS(powl, libc_powl);
DEFINE_PUBLIC_WEAK_ALIAS(__powl, libc_powl);
DEFINE_PUBLIC_WEAK_ALIAS(sqrtl, libc_sqrtl);
DEFINE_PUBLIC_WEAK_ALIAS(__sqrtl, libc_sqrtl);
DEFINE_PUBLIC_WEAK_ALIAS(hypot, libc_hypot);
DEFINE_PUBLIC_WEAK_ALIAS(__hypot, libc_hypot);
DEFINE_PUBLIC_WEAK_ALIAS(hypotf, libc_hypotf);
DEFINE_PUBLIC_WEAK_ALIAS(__hypotf, libc_hypotf);
DEFINE_PUBLIC_WEAK_ALIAS(hypotl, libc_hypotl);
DEFINE_PUBLIC_WEAK_ALIAS(__hypotl, libc_hypotl);
DEFINE_PUBLIC_WEAK_ALIAS(cbrt, libc_cbrt);
DEFINE_PUBLIC_WEAK_ALIAS(__cbrt, libc_cbrt);
DEFINE_PUBLIC_WEAK_ALIAS(cbrtf, libc_cbrtf);
DEFINE_PUBLIC_WEAK_ALIAS(__cbrtf, libc_cbrtf);
DEFINE_PUBLIC_WEAK_ALIAS(cbrtl, libc_cbrtl);
DEFINE_PUBLIC_WEAK_ALIAS(__cbrtl, libc_cbrtl);
DEFINE_PUBLIC_WEAK_ALIAS(fmod, libc_fmod);
DEFINE_PUBLIC_WEAK_ALIAS(__fmod, libc_fmod);
DEFINE_PUBLIC_WEAK_ALIAS(fmodf, libc_fmodf);
DEFINE_PUBLIC_WEAK_ALIAS(__fmodf, libc_fmodf);
DEFINE_PUBLIC_WEAK_ALIAS(fmodl, libc_fmodl);
DEFINE_PUBLIC_WEAK_ALIAS(__fmodl, libc_fmodl);
DEFINE_PUBLIC_WEAK_ALIAS(erf, libc_erf);
DEFINE_PUBLIC_WEAK_ALIAS(__erf, libc_erf);
DEFINE_PUBLIC_WEAK_ALIAS(erfc, libc_erfc);
DEFINE_PUBLIC_WEAK_ALIAS(__erfc, libc_erfc);
DEFINE_PUBLIC_WEAK_ALIAS(lgamma, libc_lgamma);
DEFINE_PUBLIC_WEAK_ALIAS(gamma, libc_lgamma);
DEFINE_PUBLIC_WEAK_ALIAS(__lgamma, libc_lgamma);
DEFINE_PUBLIC_WEAK_ALIAS(__gamma, libc_lgamma);
DEFINE_PUBLIC_WEAK_ALIAS(erff, libc_erff);
DEFINE_PUBLIC_WEAK_ALIAS(__erff, libc_erff);
DEFINE_PUBLIC_WEAK_ALIAS(erfcf, libc_erfcf);
DEFINE_PUBLIC_WEAK_ALIAS(__erfcf, libc_erfcf);
DEFINE_PUBLIC_WEAK_ALIAS(lgammaf, libc_lgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(gammaf, libc_lgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(__lgammaf, libc_lgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(__gammaf, libc_lgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(erfl, libc_erfl);
DEFINE_PUBLIC_WEAK_ALIAS(__erfl, libc_erfl);
DEFINE_PUBLIC_WEAK_ALIAS(erfcl, libc_erfcl);
DEFINE_PUBLIC_WEAK_ALIAS(__erfcl, libc_erfcl);
DEFINE_PUBLIC_WEAK_ALIAS(lgammal, libc_lgammal);
DEFINE_PUBLIC_WEAK_ALIAS(gammal, libc_lgammal);
DEFINE_PUBLIC_WEAK_ALIAS(__lgammal, libc_lgammal);
DEFINE_PUBLIC_WEAK_ALIAS(__gammal, libc_lgammal);
DEFINE_PUBLIC_WEAK_ALIAS(tgamma, libc_tgamma);
DEFINE_PUBLIC_WEAK_ALIAS(__tgamma, libc_tgamma);
DEFINE_PUBLIC_WEAK_ALIAS(tgammaf, libc_tgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(__tgammaf, libc_tgammaf);
DEFINE_PUBLIC_WEAK_ALIAS(tgammal, libc_tgammal);
DEFINE_PUBLIC_WEAK_ALIAS(__tgammal, libc_tgammal);
DEFINE_PUBLIC_WEAK_ALIAS(rint, libc_rint);
DEFINE_PUBLIC_WEAK_ALIAS(__rint, libc_rint);
DEFINE_PUBLIC_WEAK_ALIAS(nextafter, libc_nextafter);
DEFINE_PUBLIC_WEAK_ALIAS(_nextafter, libc_nextafter);
DEFINE_PUBLIC_WEAK_ALIAS(__nextafter, libc_nextafter);
DEFINE_PUBLIC_WEAK_ALIAS(remainder, libc_remainder);
DEFINE_PUBLIC_WEAK_ALIAS(__remainder, libc_remainder);
DEFINE_PUBLIC_WEAK_ALIAS(ilogb, libc_ilogb);
DEFINE_PUBLIC_WEAK_ALIAS(__ilogb, libc_ilogb);
DEFINE_PUBLIC_WEAK_ALIAS(rintf, libc_rintf);
DEFINE_PUBLIC_WEAK_ALIAS(__rintf, libc_rintf);
DEFINE_PUBLIC_WEAK_ALIAS(nextafterf, libc_nextafterf);
DEFINE_PUBLIC_WEAK_ALIAS(__nextafterf, libc_nextafterf);
DEFINE_PUBLIC_WEAK_ALIAS(remainderf, libc_remainderf);
DEFINE_PUBLIC_WEAK_ALIAS(__remainderf, libc_remainderf);
DEFINE_PUBLIC_WEAK_ALIAS(ilogbf, libc_ilogbf);
DEFINE_PUBLIC_WEAK_ALIAS(__ilogbf, libc_ilogbf);
DEFINE_PUBLIC_WEAK_ALIAS(rintl, libc_rintl);
DEFINE_PUBLIC_WEAK_ALIAS(__rintl, libc_rintl);
DEFINE_PUBLIC_WEAK_ALIAS(nextafterl, libc_nextafterl);
DEFINE_PUBLIC_WEAK_ALIAS(__nextafterl, libc_nextafterl);
DEFINE_PUBLIC_WEAK_ALIAS(remainderl, libc_remainderl);
DEFINE_PUBLIC_WEAK_ALIAS(__remainderl, libc_remainderl);
DEFINE_PUBLIC_WEAK_ALIAS(ilogbl, libc_ilogbl);
DEFINE_PUBLIC_WEAK_ALIAS(__ilogbl, libc_ilogbl);
DEFINE_PUBLIC_WEAK_ALIAS(nexttoward, libc_nexttoward);
DEFINE_PUBLIC_WEAK_ALIAS(__nexttoward, libc_nexttoward);
DEFINE_PUBLIC_WEAK_ALIAS(scalbn, libc_scalbn);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbn, libc_scalbn);
DEFINE_PUBLIC_WEAK_ALIAS(scalbln, libc_scalbln);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbln, libc_scalbln);
DEFINE_PUBLIC_WEAK_ALIAS(nearbyint, libc_nearbyint);
DEFINE_PUBLIC_WEAK_ALIAS(__nearbyint, libc_nearbyint);
DEFINE_PUBLIC_WEAK_ALIAS(remquo, libc_remquo);
DEFINE_PUBLIC_WEAK_ALIAS(__remquo, libc_remquo);
DEFINE_PUBLIC_WEAK_ALIAS(lrint, libc_lrint);
DEFINE_PUBLIC_WEAK_ALIAS(__lrint, libc_lrint);
DEFINE_PUBLIC_WEAK_ALIAS(llrint, libc_llrint);
DEFINE_PUBLIC_WEAK_ALIAS(__llrint, libc_llrint);
DEFINE_PUBLIC_WEAK_ALIAS(nexttowardf, libc_nexttowardf);
DEFINE_PUBLIC_WEAK_ALIAS(__nexttowardf, libc_nexttowardf);
DEFINE_PUBLIC_WEAK_ALIAS(scalbnf, libc_scalbnf);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbnf, libc_scalbnf);
DEFINE_PUBLIC_WEAK_ALIAS(scalblnf, libc_scalblnf);
DEFINE_PUBLIC_WEAK_ALIAS(__scalblnf, libc_scalblnf);
DEFINE_PUBLIC_WEAK_ALIAS(nearbyintf, libc_nearbyintf);
DEFINE_PUBLIC_WEAK_ALIAS(__nearbyintf, libc_nearbyintf);
DEFINE_PUBLIC_WEAK_ALIAS(remquof, libc_remquof);
DEFINE_PUBLIC_WEAK_ALIAS(__remquof, libc_remquof);
DEFINE_PUBLIC_WEAK_ALIAS(lrintf, libc_lrintf);
DEFINE_PUBLIC_WEAK_ALIAS(__lrintf, libc_lrintf);
DEFINE_PUBLIC_WEAK_ALIAS(llrintf, libc_llrintf);
DEFINE_PUBLIC_WEAK_ALIAS(__llrintf, libc_llrintf);
DEFINE_PUBLIC_WEAK_ALIAS(nexttowardl, libc_nexttowardl);
DEFINE_PUBLIC_WEAK_ALIAS(__nexttowardl, libc_nexttowardl);
DEFINE_PUBLIC_WEAK_ALIAS(scalbnl, libc_scalbnl);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbnl, libc_scalbnl);
DEFINE_PUBLIC_WEAK_ALIAS(scalblnl, libc_scalblnl);
DEFINE_PUBLIC_WEAK_ALIAS(__scalblnl, libc_scalblnl);
DEFINE_PUBLIC_WEAK_ALIAS(nearbyintl, libc_nearbyintl);
DEFINE_PUBLIC_WEAK_ALIAS(__nearbyintl, libc_nearbyintl);
DEFINE_PUBLIC_WEAK_ALIAS(remquol, libc_remquol);
DEFINE_PUBLIC_WEAK_ALIAS(__remquol, libc_remquol);
DEFINE_PUBLIC_WEAK_ALIAS(lrintl, libc_lrintl);
DEFINE_PUBLIC_WEAK_ALIAS(__lrintl, libc_lrintl);
DEFINE_PUBLIC_WEAK_ALIAS(llrintl, libc_llrintl);
DEFINE_PUBLIC_WEAK_ALIAS(__llrintl, libc_llrintl);
DEFINE_PUBLIC_WEAK_ALIAS(sincos, libc_sincos);
DEFINE_PUBLIC_WEAK_ALIAS(__sincos, libc_sincos);
DEFINE_PUBLIC_WEAK_ALIAS(exp10, libc_exp10);
DEFINE_PUBLIC_WEAK_ALIAS(__exp10, libc_exp10);
DEFINE_PUBLIC_WEAK_ALIAS(pow10, libc_pow10);
DEFINE_PUBLIC_WEAK_ALIAS(__pow10, libc_pow10);
DEFINE_PUBLIC_WEAK_ALIAS(sincosf, libc_sincosf);
DEFINE_PUBLIC_WEAK_ALIAS(__sincosf, libc_sincosf);
DEFINE_PUBLIC_WEAK_ALIAS(exp10f, libc_exp10f);
DEFINE_PUBLIC_WEAK_ALIAS(__exp10f, libc_exp10f);
DEFINE_PUBLIC_WEAK_ALIAS(pow10f, libc_pow10f);
DEFINE_PUBLIC_WEAK_ALIAS(__pow10f, libc_pow10f);
DEFINE_PUBLIC_WEAK_ALIAS(sincosl, libc_sincosl);
DEFINE_PUBLIC_WEAK_ALIAS(__sincosl, libc_sincosl);
DEFINE_PUBLIC_WEAK_ALIAS(exp10l, libc_exp10l);
DEFINE_PUBLIC_WEAK_ALIAS(__exp10l, libc_exp10l);
DEFINE_PUBLIC_WEAK_ALIAS(pow10l, libc_pow10l);
DEFINE_PUBLIC_WEAK_ALIAS(__pow10l, libc_pow10l);
DEFINE_PUBLIC_WEAK_ALIAS(drem, libc_drem);
DEFINE_PUBLIC_WEAK_ALIAS(__drem, libc_drem);
DEFINE_PUBLIC_WEAK_ALIAS(significand, libc_significand);
DEFINE_PUBLIC_WEAK_ALIAS(__significand, libc_significand);
DEFINE_PUBLIC_WEAK_ALIAS(dremf, libc_dremf);
DEFINE_PUBLIC_WEAK_ALIAS(__dremf, libc_dremf);
DEFINE_PUBLIC_WEAK_ALIAS(significandf, libc_significandf);
DEFINE_PUBLIC_WEAK_ALIAS(__significandf, libc_significandf);
DEFINE_PUBLIC_WEAK_ALIAS(dreml, libc_dreml);
DEFINE_PUBLIC_WEAK_ALIAS(__dreml, libc_dreml);
DEFINE_PUBLIC_WEAK_ALIAS(significandl, libc_significandl);
DEFINE_PUBLIC_WEAK_ALIAS(__significandl, libc_significandl);
DEFINE_PUBLIC_WEAK_ALIAS(j0, libc_j0);
DEFINE_PUBLIC_WEAK_ALIAS(__j0, libc_j0);
DEFINE_PUBLIC_WEAK_ALIAS(j1, libc_j1);
DEFINE_PUBLIC_WEAK_ALIAS(__j1, libc_j1);
DEFINE_PUBLIC_WEAK_ALIAS(jn, libc_jn);
DEFINE_PUBLIC_WEAK_ALIAS(__jn, libc_jn);
DEFINE_PUBLIC_WEAK_ALIAS(y0, libc_y0);
DEFINE_PUBLIC_WEAK_ALIAS(__y0, libc_y0);
DEFINE_PUBLIC_WEAK_ALIAS(y1, libc_y1);
DEFINE_PUBLIC_WEAK_ALIAS(__y1, libc_y1);
DEFINE_PUBLIC_WEAK_ALIAS(yn, libc_yn);
DEFINE_PUBLIC_WEAK_ALIAS(__yn, libc_yn);
DEFINE_PUBLIC_WEAK_ALIAS(j0f, libc_j0f);
DEFINE_PUBLIC_WEAK_ALIAS(__j0f, libc_j0f);
DEFINE_PUBLIC_WEAK_ALIAS(j1f, libc_j1f);
DEFINE_PUBLIC_WEAK_ALIAS(__j1f, libc_j1f);
DEFINE_PUBLIC_WEAK_ALIAS(jnf, libc_jnf);
DEFINE_PUBLIC_WEAK_ALIAS(__jnf, libc_jnf);
DEFINE_PUBLIC_WEAK_ALIAS(y0f, libc_y0f);
DEFINE_PUBLIC_WEAK_ALIAS(__y0f, libc_y0f);
DEFINE_PUBLIC_WEAK_ALIAS(y1f, libc_y1f);
DEFINE_PUBLIC_WEAK_ALIAS(__y1f, libc_y1f);
DEFINE_PUBLIC_WEAK_ALIAS(ynf, libc_ynf);
DEFINE_PUBLIC_WEAK_ALIAS(__ynf, libc_ynf);
DEFINE_PUBLIC_WEAK_ALIAS(j0l, libc_j0l);
DEFINE_PUBLIC_WEAK_ALIAS(__j0l, libc_j0l);
DEFINE_PUBLIC_WEAK_ALIAS(j1l, libc_j1l);
DEFINE_PUBLIC_WEAK_ALIAS(__j1l, libc_j1l);
DEFINE_PUBLIC_WEAK_ALIAS(jnl, libc_jnl);
DEFINE_PUBLIC_WEAK_ALIAS(__jnl, libc_jnl);
DEFINE_PUBLIC_WEAK_ALIAS(y0l, libc_y0l);
DEFINE_PUBLIC_WEAK_ALIAS(__y0l, libc_y0l);
DEFINE_PUBLIC_WEAK_ALIAS(y1l, libc_y1l);
DEFINE_PUBLIC_WEAK_ALIAS(__y1l, libc_y1l);
DEFINE_PUBLIC_WEAK_ALIAS(ynl, libc_ynl);
DEFINE_PUBLIC_WEAK_ALIAS(__ynl, libc_ynl);
DEFINE_PUBLIC_WEAK_ALIAS(lgamma_r, libc_lgamma_r);
DEFINE_PUBLIC_WEAK_ALIAS(__lgamma_r, libc_lgamma_r);
DEFINE_PUBLIC_WEAK_ALIAS(lgammaf_r, libc_lgammaf_r);
DEFINE_PUBLIC_WEAK_ALIAS(__lgammaf_r, libc_lgammaf_r);
DEFINE_PUBLIC_WEAK_ALIAS(lgammal_r, libc_lgammal_r);
DEFINE_PUBLIC_WEAK_ALIAS(__lgammal_r, libc_lgammal_r);
DEFINE_PUBLIC_WEAK_ALIAS(scalb, libc_scalb);
DEFINE_PUBLIC_WEAK_ALIAS(_scalb, libc_scalb);
DEFINE_PUBLIC_WEAK_ALIAS(__scalb, libc_scalb);
DEFINE_PUBLIC_WEAK_ALIAS(scalbf, libc_scalbf);
DEFINE_PUBLIC_WEAK_ALIAS(_scalbf, libc_scalbf);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbf, libc_scalbf);
DEFINE_PUBLIC_WEAK_ALIAS(scalbl, libc_scalbl);
DEFINE_PUBLIC_WEAK_ALIAS(__scalbl, libc_scalbl);
DEFINE_PUBLIC_WEAK_ALIAS(__fpclassify, libc___fpclassify);
DEFINE_PUBLIC_WEAK_ALIAS(__signbit, libc___signbit);
DEFINE_PUBLIC_WEAK_ALIAS(__fpclassifyf, libc___fpclassifyf);
DEFINE_PUBLIC_WEAK_ALIAS(__signbitf, libc___signbitf);
DEFINE_PUBLIC_WEAK_ALIAS(__fpclassifyl, libc___fpclassifyl);
DEFINE_PUBLIC_WEAK_ALIAS(__signbitl, libc___signbitl);
DEFINE_PUBLIC_WEAK_ALIAS(__issignaling, libc___issignaling);
DEFINE_PUBLIC_WEAK_ALIAS(__issignalingf, libc___issignalingf);
DEFINE_PUBLIC_WEAK_ALIAS(__issignalingl, libc___issignalingl);
/*[[[end:exports]]]*/

DECL_END

#endif /* !GUARD_LIBC_USER_MATH_C */
