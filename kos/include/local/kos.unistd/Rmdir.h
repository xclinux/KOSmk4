/* HASH CRC-32:0x4918626a */
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
#ifndef __local_Rmdir_defined
#if defined(__CRT_AT_FDCWD) && defined(__CRT_HAVE_UnlinkAt)
#define __local_Rmdir_defined 1
#include <kos/anno.h>
/* Dependency: "UnlinkAt" */
#ifndef ____localdep_UnlinkAt_defined
#define ____localdep_UnlinkAt_defined 1
#ifdef __CRT_HAVE_UnlinkAt
/* >> unlinkat(2)
 * Remove a file, symbolic link, device or FIFO referred to by `DFD:NAME' */
__CREDIRECT_VOID(__ATTR_NONNULL((2)),,__localdep_UnlinkAt,(__fd_t __dfd, char const *__name, __atflag_t __flags),UnlinkAt,(__dfd,__name,__flags)) __THROWS(...)
#else /* LIBC: UnlinkAt */
#undef ____localdep_UnlinkAt_defined
#endif /* UnlinkAt... */
#endif /* !____localdep_UnlinkAt_defined */

__NAMESPACE_LOCAL_BEGIN
/* >> rmdir(2)
 * Remove a directory referred to by `PATH' */
__LOCAL_LIBC(Rmdir) __ATTR_NONNULL((1)) void
(__LIBCCALL __LIBC_LOCAL_NAME(Rmdir))(char const *__path) __THROWS(...) {
#line 246 "kos/src/libc/magic/kos.unistd.c"
	__localdep_UnlinkAt(__CRT_AT_FDCWD, __path, 0x0200); /* AT_REMOVEDIR */
}
__NAMESPACE_LOCAL_END
#endif /* defined(__CRT_AT_FDCWD) && defined(__CRT_HAVE_UnlinkAt) */
#endif /* !__local_Rmdir_defined */
