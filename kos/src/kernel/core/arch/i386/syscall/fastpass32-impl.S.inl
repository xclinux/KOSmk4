/* HASH 0x8cf0debf */
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

#ifdef __INTELLISENSE__
#include "syscall-fastpass32.S"
#define SYSCALL_DEFMODE_INT80 1
#endif


#ifdef SYSCALL_DEFMODE_INT80
#define FUNC    X86_ASMSYSCALL32_INT80
#define SECT(x) .text.x86.asm32_syscall_int80.real_##x
#define LSDA(x) x
#define IRET    iret
#elif defined(SYSCALL_DEFMODE_SYSENTER)
#define FUNC    X86_ASMSYSCALL32_SYSENTER
#define SECT(x) .text.x86.asm32_syscall_sysenter.real_##x
#define LSDA(x) (x) | 0x40000000
#define IRET    X86_IRET_BUT_PREFER_SYSEXIT
#else
#error "No syscall mode defined"
#endif


/* Implementations of system calls that normally require RPCs (since they
 * require access to the whole user-space register state), but can be
 * implemented more efficiently when given custom wrappers for each system
 * call invocation method.
 * NOTE: Not all invocation methods are handled here. - USERKERN system
 *       calls still require the use of RPC callbacks.
 * NOTE: Affected system calls:
 *   - execve()
 *   - execveat()
 *   - clone()
 *   - fork()
 */
.section SECT(execveat)
INTERN_FUNCTION(FUNC(execveat))
	.cfi_startproc simple
	.cfi_personality 0, x86_syscall_personality
	.cfi_lsda 0, LSDA(SYS_execveat)
	.cfi_iret_signal_frame
	.cfi_def_cfa %esp, 0

	/* Must construct a full `struct icpustate' */
	pushl_cfi %ds
	.cfi_restore_iret_ds_or_offset -4
	pushl_cfi %es
	.cfi_restore_iret_es_or_offset -8
	pushl_cfi %fs
	.cfi_restore_iret_fs_or_offset -12

#ifdef SYSCALL_DEFMODE_SYSENTER
	cmpl   $KERNEL_BASE, %ebp
	jae    __asm32_bad_sysenter_extension
#endif /* SYSCALL_DEFMODE_SYSENTER */

	pushal_cfi_r

	movl   $(SEGMENT_USER_DATA_RPL), %eax
	movl   %eax, %ds
	movl   %eax, %es
	movl   $(SEGMENT_KERNEL_FSBASE), %eax
	movl   %eax, %fs
	movl   %esp, %eax

#ifdef SYSCALL_DEFMODE_SYSENTER
	pushl_cfi 0(%ebp) /* Arg #4 (WARNING: SEGFAULT!) */
#else
	pushl_cfi %edi /* Arg #4 */
#endif

	pushl_cfi %esi /* Arg #3 */
	pushl_cfi %edx /* Arg #2 */
	pushl_cfi %ecx /* Arg #1 */
	pushl_cfi %ebx /* Arg #0 */
	pushl_cfi %eax /* struct icpustate *__restrict state */

	INTERN(kernel_execveat)
	call   kernel_execveat
	.cfi_adjust_cfa_offset -24 /* STDCALL does callee-cleanup */

	movl   %eax, %esp /* Load the new register context stack. */
	popal_cfi_r

	popl_cfi %fs
	.cfi_restore_iret_fs
	popl_cfi %es
	.cfi_restore_iret_es
	popl_cfi %ds
	.cfi_restore_iret_ds

	IRET
	.cfi_endproc
END(FUNC(execveat))

.section SECT(execve)
INTERN_FUNCTION(FUNC(execve))
	.cfi_startproc simple
	.cfi_personality 0, x86_syscall_personality
	.cfi_lsda 0, LSDA(SYS_execve)
	.cfi_iret_signal_frame
	.cfi_def_cfa %esp, 0

	/* Must construct a full `struct icpustate' */
	pushl_cfi %ds
	.cfi_restore_iret_ds_or_offset -4
	pushl_cfi %es
	.cfi_restore_iret_es_or_offset -8
	pushl_cfi %fs
	.cfi_restore_iret_fs_or_offset -12

	pushal_cfi_r
	movl   $(SEGMENT_USER_DATA_RPL), %eax
	movl   %eax, %ds
	movl   %eax, %es
	movl   $(SEGMENT_KERNEL_FSBASE), %eax
	movl   %eax, %fs
	movl   %esp, %eax
	pushl_cfi $0        /* Arg #4 */
	pushl_cfi %edx      /* Arg #3 */
	pushl_cfi %ecx      /* Arg #2 */
	pushl_cfi %ebx      /* Arg #1 */
	pushl_cfi $AT_FDCWD /* Arg #0 */
	pushl_cfi %eax      /* struct icpustate *__restrict state */
	INTERN(kernel_execveat)
	call   kernel_execveat
	.cfi_adjust_cfa_offset -24 /* STDCALL does callee-cleanup */
	movl   %eax, %esp   /* Load the new register context stack. */
	popal_cfi_r

	popl_cfi %fs
	.cfi_restore_iret_fs
	popl_cfi %es
	.cfi_restore_iret_es
	popl_cfi %ds
	.cfi_restore_iret_ds

	IRET
	.cfi_endproc
END(FUNC(execve))


.section SECT(debugtrap)
INTERN_FUNCTION(FUNC(debugtrap))
	.cfi_startproc simple
	.cfi_personality 0, x86_syscall_personality
	.cfi_lsda 0, LSDA(SYS_debugtrap)
	.cfi_iret_signal_frame
	.cfi_def_cfa %esp, 0

	/* Must construct a full `struct icpustate' */
	pushl_cfi %ds
	.cfi_restore_iret_ds_or_offset -4
	pushl_cfi %es
	.cfi_restore_iret_es_or_offset -8
	pushl_cfi %fs
	.cfi_restore_iret_fs_or_offset -12

	pushal_cfi_r
	movl   $(SEGMENT_USER_DATA_RPL), %eax
	movl   %eax, %ds
	movl   %eax, %es
	movl   $(SEGMENT_KERNEL_FSBASE), %eax
	movl   %eax, %fs

	pushl_cfi %ecx        /* Arg #2 (USER UNCHECKED struct debugtrap_reason const *ureason) */
	movl   %ebx, %edx     /* Arg #1 (USER UNCHECKED struct ucpustate const *state) */
	leal   4(%esp), %ecx  /* struct icpustate *__restrict return_state */
	INTERN(sys_debugtrap32_impl)
	call   sys_debugtrap32_impl
	.cfi_adjust_cfa_offset -4

	popal_cfi_r

	popl_cfi %fs
	.cfi_restore_iret_fs
	popl_cfi %es
	.cfi_restore_iret_es
	popl_cfi %ds
	.cfi_restore_iret_ds

	IRET
	.cfi_endproc
END(FUNC(debugtrap))


/* TODO: sigreturn() */
/* TODO: clone() */
/* TODO: fork() */
/* TODO: raiseat() */
/* TODO: coredump() */



#undef SYSCALL_DEFMODE_INT80
#undef SYSCALL_DEFMODE_SYSENTER
#undef FUNC
#undef SECT
#undef LSDA
#undef IRET