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
#ifndef GUARD_LIBC_USER_SYS_TIMES_C
#define GUARD_LIBC_USER_SYS_TIMES_C 1

#include "../api.h"
#include "sys.times.h"

#include <kos/syscalls.h>

DECL_BEGIN





/*[[[start:implementation]]]*/

/*[[[head:libc_times,hash:CRC-32=0x8c1e9e6b]]]*/
/* Store the CPU time used by this process and all its
 * dead children (and their dead children) in BUFFER.
 * Return the elapsed real time, or (clock_t) -1 for errors.
 * All times are in CLK_TCKths of a second */
INTERN ATTR_SECTION(".text.crt.unsorted") clock_t
NOTHROW_NCX(LIBCCALL libc_times)(struct tms *buffer)
/*[[[body:libc_times]]]*/
{
	clock_t result;
	result = sys_times(buffer);
	return libc_seterrno_syserr2(result, (clock_t)-1);
}
/*[[[end:libc_times]]]*/

/*[[[end:implementation]]]*/



/*[[[start:exports,hash:CRC-32=0x71047dcf]]]*/
DEFINE_PUBLIC_ALIAS(times, libc_times);
/*[[[end:exports]]]*/

DECL_END

#endif /* !GUARD_LIBC_USER_SYS_TIMES_C */
