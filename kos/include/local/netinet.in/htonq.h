/* HASH CRC-32:0xa0f89048 */
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
#ifndef __local_htonq_defined
#define __local_htonq_defined 1
#include <hybrid/__byteswap.h>
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(htonq) __ATTR_CONST __UINT64_TYPE__
__NOTHROW_NCX(__LIBCCALL __LIBC_LOCAL_NAME(htonq))(__UINT64_TYPE__ __hostlong) {
#line 264 "kos/src/libc/magic/netinet.in.c"
	return (__UINT64_TYPE__)__hybrid_htobe64(__hostlong);
}
__NAMESPACE_LOCAL_END
#endif /* !__local_htonq_defined */