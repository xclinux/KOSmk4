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
#ifndef GUARD_APPS_SYSTEM_TEST_MAIN_C
#define GUARD_APPS_SYSTEM_TEST_MAIN_C 1
#define _KOS_SOURCE 1

#include <hybrid/compiler.h>

#include <stdio.h>
#include <sys/syslog.h>
#include <system-test/ctest.h>

DECL_BEGIN

INTDEF struct testdecl __system_tests_begin[];
INTDEF struct testdecl __system_tests_end[];

PRIVATE void run_all_tests(void) {
	struct testdecl *iter;
	for (iter = __system_tests_begin; iter < __system_tests_end; ++iter) {
		syslog(LOG_DEBUG, "[test:%s] %s:%d\n",
		       iter->td_name,
		       iter->td_file, iter->td_line);
		(*iter->td_func)();
	}
}

int main(int argc, char *argv[], char *envp[]) {
	/* A special application who's sole purpose is to perform a series of
	 * automated system tests to ensure that the various sub-systems of
	 * KOS are functioning properly. */

	run_all_tests();
	printf("All tests OK\n");
	return 0;
}

DECL_END

#endif /* !GUARD_APPS_SYSTEM_TEST_MAIN_C */
