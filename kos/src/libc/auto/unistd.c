/* HASH CRC-32:0x5a528ec3 */
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
#ifndef GUARD_LIBC_AUTO_UNISTD_C
#define GUARD_LIBC_AUTO_UNISTD_C 1

#include "../api.h"
#include <hybrid/typecore.h>
#include <kos/types.h>
#include "unistd.h"

DECL_BEGIN

#ifndef __KERNEL__
INTERN ATTR_CONST WUNUSED
ATTR_WEAK ATTR_SECTION(".text.crt.system.configuration.getdtablesize") int
NOTHROW_NCX(LIBCCALL libc_getdtablesize)(void) {
#line 1429 "kos/src/libc/magic/unistd.c"
#if defined(__KOS__)
	return 0x7fffffff; /* INT_MAX */
#elif defined(__linux__) || defined(__linux) || defined(linux)
	return 0x10000;    /* UINT16_MAX + 1 */
#else
	return 256;        /* UINT8_MAX + 1 */
#endif
}

/* Copy `n_bytes & ~1' (FLOOR_ALIGN(n_bytes, 2)) from `from' to `to',
 * exchanging the order of even and odd bytes ("123456" --> "214365")
 * When `n_bytes <= 1', don't do anything and return immediately */
INTERN NONNULL((1, 2))
ATTR_WEAK ATTR_SECTION(".text.crt.string.memory.swab") void
NOTHROW_NCX(LIBCCALL libc_swab)(void const *__restrict from,
                                void *__restrict to,
                                __STDC_INT_AS_SSIZE_T n_bytes) {
#line 1691 "kos/src/libc/magic/unistd.c"
	n_bytes &= ~1;
	while (n_bytes >= 2) {
		byte_t a, b;
		a = ((byte_t *)from)[--n_bytes];
		b = ((byte_t *)from)[--n_bytes];
		((byte_t *)to)[n_bytes+0] = a;
		((byte_t *)to)[n_bytes+1] = b;
	}
}

#endif /* !__KERNEL__ */
#ifndef __KERNEL__
DEFINE_PUBLIC_WEAK_ALIAS(getdtablesize, libc_getdtablesize);
DEFINE_PUBLIC_WEAK_ALIAS(swab, libc_swab);
DEFINE_PUBLIC_WEAK_ALIAS(_swab, libc_swab);
#endif /* !__KERNEL__ */

DECL_END

#endif /* !GUARD_LIBC_AUTO_UNISTD_C */
