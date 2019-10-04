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
#ifndef GUARD_MODGDBSERVER_ARCH_I386_INTERRUPT_C
#define GUARD_MODGDBSERVER_ARCH_I386_INTERRUPT_C 1
#define _KOS_SOURCE 1

#include <kernel/compiler.h>
#include <kernel/interrupt.h>
#include <kos/kernel/cpu-state.h>
#include <kos/kernel/segment.h>
#include <asm/intrin.h>
#include <assert.h>
#include <string.h>

#include "../../gdb.h"

DECL_BEGIN

DATDEF struct idt_segment x86_idt_start[256];
DATDEF struct idt_segment x86_idt_start_traced[256];


#define IDT_VARIANT_NORMAL 0 /* `x86_idt_start' */
#define IDT_VARIANT_TRACED 1 /* `x86_idt_start_traced' */
#define IDT_VARIANT_COUNT  2 /* Number of known IDT variants. */

typedef struct {
	struct idt_segment ib_segments[IDT_VARIANT_COUNT]; /* Saved segments. */
} GDBX86InterruptBackup;

LOCAL NONNULL((1, 2)) void FCALL
GDBX86Interrupt_EncodeSegment(struct idt_segment *__restrict segment,
                              void (ASMCALL *asmHandler)(void),
                              unsigned int dpl) {
#ifdef __x86_64__
	segment->i_seg.s_u = SEGMENT_INTRGATE_INIT_U((u64)asmHandler, SEGMENT_KERNEL_CODE, 0, SEGMENT_DESCRIPTOR_TYPE_INTRGATE, dpl, 1);
	segment->i_ext.s_u = SEGMENT_INTRGATE_HI_INIT_U((u64)asmHandler, SEGMENT_KERNEL_CODE, 0, SEGMENT_DESCRIPTOR_TYPE_INTRGATE, dpl, 1);
#else /* __x86_64__ */
	segment->i_seg.s_ul = SEGMENT_INTRGATE_INIT_UL((u32)asmHandler, SEGMENT_KERNEL_CODE, SEGMENT_DESCRIPTOR_TYPE_INTRGATE, dpl, 1);
	segment->i_seg.s_uh = SEGMENT_INTRGATE_INIT_UH((u32)asmHandler, SEGMENT_KERNEL_CODE, SEGMENT_DESCRIPTOR_TYPE_INTRGATE, dpl, 1);
#endif /* !__x86_64__ */
}

PRIVATE NONNULL((1, 3)) void FCALL
GDBX86InterruptBackup_Override(GDBX86InterruptBackup *__restrict backup,
                               isr_vector_t vector,
                               void (ASMCALL *asmHandler)(void),
                               unsigned int dpl) {
	COMPILER_BARRIER();
	backup->ib_segments[IDT_VARIANT_NORMAL] = x86_idt_start[vector];
	backup->ib_segments[IDT_VARIANT_TRACED] = x86_idt_start_traced[vector];
	COMPILER_BARRIER();
	GDBX86Interrupt_EncodeSegment(&x86_idt_start[vector], asmHandler, dpl);
	GDBX86Interrupt_EncodeSegment(&x86_idt_start_traced[vector], asmHandler, dpl);
	COMPILER_BARRIER();
}

PRIVATE NONNULL((1)) void FCALL
GDBX86InterruptBackup_Restore(GDBX86InterruptBackup *__restrict backup,
                              isr_vector_t vector) {
	x86_idt_start[vector]        = backup->ib_segments[IDT_VARIANT_NORMAL];
	x86_idt_start_traced[vector] = backup->ib_segments[IDT_VARIANT_TRACED];
}




/* Backups for INT1 and INT3 handlers in all IDTs. */
PRIVATE GDBX86InterruptBackup GDBX86Interrupt_Backup01;
PRIVATE GDBX86InterruptBackup GDBX86Interrupt_Backup03;

/* The assembly-level handler for INT1 and INT3 interrupts */
INTDEF void ASMCALL GDBX86Interrupt_AsmInt1Handler(void);
INTDEF void ASMCALL GDBX86Interrupt_AsmInt3Handler(void);

PRIVATE bool GDBInterrupt_WasInitialized = false;

/* Initialize/Finalize GDB interrupt handling. */
INTERN ATTR_FREETEXT void FCALL GDBInterrupt_Init(void) {
	GDBX86InterruptBackup_Override(&GDBX86Interrupt_Backup01, 0x01,
	                               &GDBX86Interrupt_AsmInt1Handler, 0);
	/* NOTE: We set DPL=3 for int3, so that user-space
	 *       is allowed to trigger software breakpoints
	 *       and have them be handled by the GDB driver. */
	GDBX86InterruptBackup_Override(&GDBX86Interrupt_Backup03, 0x03,
	                               &GDBX86Interrupt_AsmInt3Handler, 3);
	GDBInterrupt_WasInitialized = true;
}

INTERN void FCALL GDBInterrupt_Fini(void) {
	if (GDBInterrupt_WasInitialized) {
		/* Restore the original interrupt handlers for INT1 and INT3 */
		GDBX86InterruptBackup_Restore(&GDBX86Interrupt_Backup03, 0x03);
		GDBX86InterruptBackup_Restore(&GDBX86Interrupt_Backup01, 0x01);
		GDBInterrupt_WasInitialized = false;
	}
}



DECL_END

#endif /* !GUARD_MODGDBSERVER_ARCH_I386_INTERRUPT_C */