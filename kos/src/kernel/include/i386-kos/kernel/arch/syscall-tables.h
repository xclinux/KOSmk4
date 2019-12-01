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
#ifndef GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSCALL_TABLES_H
#define GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSCALL_TABLES_H 1

#include <kernel/compiler.h>

#include <asm/unistd.h>

#ifndef __NR32FEAT_SYSCALL_TABLE_COUNT
#include <asm/syscalls32_d.h>
#endif /* !__NR32FEAT_SYSCALL_TABLE_COUNT */


#ifdef CONFIG_BUILDING_KERNEL_CORE
/* Mangled names for assembly wrappers for a given
 * system call, when invoked via the specified mechanism.
 * Any possible combination of these is pre-defined as a
 * weak-internal wrapper that calls the associated `sys_##name'
 * function whilst passing the correct number and combination
 * of arguments, before correctly propagating the system call's
 * return value back into user-space.
 * NOTE: These macros are mainly provided since some system calls
 *       are better implemented in assembly, such as sched_yield
 *       being implemented such that the task's scpustate will
 *       already point back into user-space, as well as other
 *       system calls such as `sigreturn', which don't even have
 *       any real prototype.
 * NOTE: In x86_64, the 386 symbols refer to the symbols that are
 *       called by a process in 32-bit compatibility-mode.
 * For the default implementations, see:
 *  - /src/kernel/core/arch/i386/syscall/wrappers32.S
 *  - /src/kernel/core/arch/i386/syscall/wrappers64.S
 * Register state upon entry:
 *     X86_ASMSYSCALL32_INT80:
 *         i386:    Unchanged (all registers are the same)
 *         x86_64:  Unchanged (all registers are the same) (NOTE: Compatibility-mode)
 *     X86_ASMSYSCALL32_SYSENTER:
 *         i386:    - %esp has been loaded
 *                  - A user-space IRET tail was pushed and created
 *         x86_64:  TODO: Not yet decided
 *     X86_ASMSYSCALL64:
 *         x86_64:  TODO: Not yet decided
 * HINT: The low-level interrupt/entry handlers
 *       for system calls are implemented in:
 *        - /src/kernel/core/arch/i386/syscall/syscall32.S
 *        - /src/kernel/core/arch/i386/syscall/syscall64.S
 */
#define X86_ASMSYSCALL32_INT80(name)    __x86_asm32_int80_##name    /* Section: .text.x86.asm32_syscall_int80.<name> */
#define X86_ASMSYSCALL32_SYSENTER(name) __x86_asm32_sysenter_##name /* Section: .text.x86.asm32_syscall_sysenter.<name> */
#ifdef __x86_64__
#define X86_ASMSYSCALL64(name)          __x86_asm64_syscall_##name  /* Section: .text.x86.asm64_syscall.<name> */
#endif /* __x86_64__ */
#endif /* CONFIG_BUILDING_KERNEL_CORE */


#ifdef __CC__
DECL_BEGIN


/* Define tables used during system call routing. */
#ifdef __x86_64__
#define DEFINE_KERNEL_SYSCALL_ROUTES(id)                                                                          \
	DATDEF void *const x86_sysroute##id##_c[__NR_syscall##id##_cnt];                /* sys_XXX */                 \
	DATDEF void *const x86_sysroute##id##_asm64_syscall[__NR32_syscall##id##_cnt];  /* __x86_asm64_syscall_XXX */ \
	DATDEF void *const x86_sysroute##id##_c32[__NR_syscall##id##_cnt];              /* sys32_XXX */               \
	DATDEF void *const x86_sysroute##id##_asm32_int80[__NR32_syscall##id##_cnt];    /* __x86_asm32_int80_XXX */   \
	DATDEF void *const x86_sysroute##id##_asm32_sysenter[__NR32_syscall##id##_cnt]; /* __x86_asm32_sysenter_XXX */
#else /* __x86_64__ */
#define DEFINE_KERNEL_SYSCALL_ROUTES(id)                                                                        \
	DATDEF void *const x86_sysroute##id##_c[__NR_syscall##id##_cnt];                /* sys_XXX */               \
	DATDEF void *const x86_sysroute##id##_asm32_int80[__NR32_syscall##id##_cnt];    /* __x86_asm32_int80_XXX */ \
	DATDEF void *const x86_sysroute##id##_asm32_sysenter[__NR32_syscall##id##_cnt]; /* __x86_asm32_sysenter_XXX */
#endif /* !__x86_64__ */
__NRFEAT_SYSCALL_TABLE_FOREACH(DEFINE_KERNEL_SYSCALL_ROUTES)
#undef DEFINE_KERNEL_SYSCALL_ROUTES


/* Define some system call routing aliases. */
#ifdef __x86_64__
#define x86_sysroute0_c64 x86_sysroute0_c
#define x86_sysroute1_c64 x86_sysroute1_c
#else /* __x86_64__ */
#define x86_sysroute0_c32 x86_sysroute0_c
#define x86_sysroute1_c32 x86_sysroute1_c
#endif /* !__x86_64__ */


DECL_END
#endif /* __CC__ */

#endif /* !GUARD_KERNEL_INCLUDE_I386_KOS_KERNEL_ARCH_SYSCALL_TABLES_H */
