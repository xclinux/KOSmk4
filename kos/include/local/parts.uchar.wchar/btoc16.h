/* HASH CRC-32:0x4936e218 */
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
#ifndef __local_btoc16_defined
#define __local_btoc16_defined 1
#include <__crt.h>
__NAMESPACE_LOCAL_BEGIN
__LOCAL_LIBC(btoc16) __ATTR_CONST __ATTR_WUNUSED __WINT_TYPE__
__NOTHROW_NCX(__LIBDCALL __LIBC_LOCAL_NAME(btoc16))(int __ch) {
	if (__ch >= 0 && __ch <= 0x7f)
		return (__WINT_TYPE__)__ch;
#if 2 == 4
	return (__CCAST(__WINT_TYPE__)0xffffffffu);
#else /* __SIZEOF_WCHAR_T__ == 4 */
	return (__CCAST(__WINT_TYPE__)0xffff);
#endif /* __SIZEOF_WCHAR_T__ != 4 */
}
__NAMESPACE_LOCAL_END
#ifndef __local___localdep_btoc16_defined
#define __local___localdep_btoc16_defined 1
#define __localdep_btoc16 __LIBC_LOCAL_NAME(btoc16)
#endif /* !__local___localdep_btoc16_defined */
#endif /* !__local_btoc16_defined */