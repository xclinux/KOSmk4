/* HASH 0x40184a8a */
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
#ifndef __local_spawnlp_defined
#if (defined(__CRT_HAVE_spawnvp) || defined(__CRT_HAVE__spawnvp))
#define __local_spawnlp_defined 1
#include <parts/redirect-exec.h>
/* Dependency: "spawnvp" */
#ifndef ____localdep_spawnvp_defined
#define ____localdep_spawnvp_defined 1
#if defined(__CRT_HAVE_spawnvp)
__CREDIRECT(__ATTR_NONNULL((2, 3)),__pid_t,__NOTHROW_RPC,__localdep_spawnvp,(int __mode, char const *__restrict __file, __TARGV),spawnvp,(__mode,__file, ___argv))
#elif defined(__CRT_HAVE__spawnvp)
__CREDIRECT(__ATTR_NONNULL((2, 3)),__pid_t,__NOTHROW_RPC,__localdep_spawnvp,(int __mode, char const *__restrict __file, __TARGV),_spawnvp,(__mode,__file, ___argv))
#else /* LIBC: spawnvp */
#undef ____localdep_spawnvp_defined
#endif /* spawnvp... */
#endif /* !____localdep_spawnvp_defined */

__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(spawnlp) __ATTR_SENTINEL __ATTR_NONNULL((2)) __pid_t
__NOTHROW_RPC(__VLIBCCALL __LIBC_LOCAL_NAME(spawnlp))(int __mode,
                                                      char const *__restrict __file,
                                                      char const *__args,
                                                      ... /*, (char *)NULL*/) {
#line 249 "kos/src/libc/magic/process.c"
	__REDIRECT_SPAWNLP(char, __localdep_spawnvp, __mode, __file, __args)
}
__NAMESPACE_LOCAL_END
#endif /* (defined(__CRT_HAVE_spawnvp) || defined(__CRT_HAVE__spawnvp)) */
#endif /* !__local_spawnlp_defined */
