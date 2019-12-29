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
#ifndef _KOS_EXEC_ELF_H
#define _KOS_EXEC_ELF_H 1

#include <__stdinc.h>

#include <kos/exec/asm/elf.h>

#include <elf.h>

#ifndef ELF_ARCH_CLASS
#error "Arch must #define `ELF_ARCH_CLASS' (as one of `ELFCLASS*')"
#endif /* !ELF_ARCH_CLASS */

#ifndef ELF_ARCH_DATA
#error "Arch must #define `ELF_ARCH_DATA' (as one of `ELFDATA*')"
#endif /* !ELF_ARCH_DATA */

#ifndef ELF_ARCH_MACHINE
#error "Arch must #define `ELF_ARCH_MACHINE' (as one of `EM_*')"
#endif /* !ELF_ARCH_MACHINE */

#ifndef ELF_ARCH_USESRELA
#error "Arch must #define `ELF_ARCH_USESRELA' (as either `0' or `1')"
#endif /* !ELF_ARCH_USESRELA */

#ifndef ELF_ARCH_LAZYINDX
#error "Arch must #define `ELF_ARCH_LAZYINDX' (as either `0' or `1')"
#endif /* !ELF_ARCH_LAZYINDX */

#ifndef ELF_ARCH_CLASSNAME
#if ELF_ARCH_CLASS == ELFCLASS32
#define ELF_ARCH_CLASSNAME "CLASS32"
#elif ELF_ARCH_CLASS == ELFCLASS64
#define ELF_ARCH_CLASSNAME "CLASS64"
#else
#define ELF_ARCH_CLASSNAME PP_STR(ELF_ARCH_CLASS)
#endif
#endif /* !ELF_ARCH_CLASSNAME */

#ifndef ELF_ARCH_DATANAME
#if ELF_ARCH_DATA == ELFDATA2LSB
#define ELF_ARCH_DATANAME "DATA2LSB"
#elif ELF_ARCH_DATA == ELFDATA2MSB
#define ELF_ARCH_DATANAME "DATA2MSB"
#else
#define ELF_ARCH_DATANAME PP_STR(ELF_ARCH_DATA)
#endif
#endif /* !ELF_ARCH_DATANAME */

#ifndef ELF_ARCH_MACHINENAME
#if ELF_ARCH_MACHINE == EM_M32
#define ELF_ARCH_MACHINENAME "M32"
#elif ELF_ARCH_MACHINE == EM_SPARC
#define ELF_ARCH_MACHINENAME "SPARC"
#elif ELF_ARCH_MACHINE == EM_386
#define ELF_ARCH_MACHINENAME "386"
#elif ELF_ARCH_MACHINE == EM_68K
#define ELF_ARCH_MACHINENAME "68K"
#elif ELF_ARCH_MACHINE == EM_88K
#define ELF_ARCH_MACHINENAME "88K"
#elif ELF_ARCH_MACHINE == EM_860
#define ELF_ARCH_MACHINENAME "860"
#elif ELF_ARCH_MACHINE == EM_MIPS
#define ELF_ARCH_MACHINENAME "MIPS"
#elif ELF_ARCH_MACHINE == EM_S370
#define ELF_ARCH_MACHINENAME "S370"
#elif ELF_ARCH_MACHINE == EM_MIPS_RS3_LE
#define ELF_ARCH_MACHINENAME "MIPS_RS3_LE"
#elif ELF_ARCH_MACHINE == EM_PARISC
#define ELF_ARCH_MACHINENAME "PARISC"
#elif ELF_ARCH_MACHINE == EM_VPP500
#define ELF_ARCH_MACHINENAME "VPP500"
#elif ELF_ARCH_MACHINE == EM_SPARC32PLUS
#define ELF_ARCH_MACHINENAME "SPARC32PLUS"
#elif ELF_ARCH_MACHINE == EM_960
#define ELF_ARCH_MACHINENAME "960"
#elif ELF_ARCH_MACHINE == EM_PPC
#define ELF_ARCH_MACHINENAME "PPC"
#elif ELF_ARCH_MACHINE == EM_PPC64
#define ELF_ARCH_MACHINENAME "PPC64"
#elif ELF_ARCH_MACHINE == EM_S390
#define ELF_ARCH_MACHINENAME "S390"
#elif ELF_ARCH_MACHINE == EM_V800
#define ELF_ARCH_MACHINENAME "V800"
#elif ELF_ARCH_MACHINE == EM_FR20
#define ELF_ARCH_MACHINENAME "FR20"
#elif ELF_ARCH_MACHINE == EM_RH32
#define ELF_ARCH_MACHINENAME "RH32"
#elif ELF_ARCH_MACHINE == EM_RCE
#define ELF_ARCH_MACHINENAME "RCE"
#elif ELF_ARCH_MACHINE == EM_ARM
#define ELF_ARCH_MACHINENAME "ARM"
#elif ELF_ARCH_MACHINE == EM_FAKE_ALPHA
#define ELF_ARCH_MACHINENAME "FAKE_ALPHA"
#elif ELF_ARCH_MACHINE == EM_SH
#define ELF_ARCH_MACHINENAME "SH"
#elif ELF_ARCH_MACHINE == EM_SPARCV9
#define ELF_ARCH_MACHINENAME "SPARCV9"
#elif ELF_ARCH_MACHINE == EM_TRICORE
#define ELF_ARCH_MACHINENAME "TRICORE"
#elif ELF_ARCH_MACHINE == EM_ARC
#define ELF_ARCH_MACHINENAME "ARC"
#elif ELF_ARCH_MACHINE == EM_H8_300
#define ELF_ARCH_MACHINENAME "H8_300"
#elif ELF_ARCH_MACHINE == EM_H8_300H
#define ELF_ARCH_MACHINENAME "H8_300H"
#elif ELF_ARCH_MACHINE == EM_H8S
#define ELF_ARCH_MACHINENAME "H8S"
#elif ELF_ARCH_MACHINE == EM_H8_500
#define ELF_ARCH_MACHINENAME "H8_500"
#elif ELF_ARCH_MACHINE == EM_IA_64
#define ELF_ARCH_MACHINENAME "IA_64"
#elif ELF_ARCH_MACHINE == EM_MIPS_X
#define ELF_ARCH_MACHINENAME "MIPS_X"
#elif ELF_ARCH_MACHINE == EM_COLDFIRE
#define ELF_ARCH_MACHINENAME "COLDFIRE"
#elif ELF_ARCH_MACHINE == EM_68HC12
#define ELF_ARCH_MACHINENAME "68HC12"
#elif ELF_ARCH_MACHINE == EM_MMA
#define ELF_ARCH_MACHINENAME "MMA"
#elif ELF_ARCH_MACHINE == EM_PCP
#define ELF_ARCH_MACHINENAME "PCP"
#elif ELF_ARCH_MACHINE == EM_NCPU
#define ELF_ARCH_MACHINENAME "NCPU"
#elif ELF_ARCH_MACHINE == EM_NDR1
#define ELF_ARCH_MACHINENAME "NDR1"
#elif ELF_ARCH_MACHINE == EM_STARCORE
#define ELF_ARCH_MACHINENAME "STARCORE"
#elif ELF_ARCH_MACHINE == EM_ME16
#define ELF_ARCH_MACHINENAME "ME16"
#elif ELF_ARCH_MACHINE == EM_ST100
#define ELF_ARCH_MACHINENAME "ST100"
#elif ELF_ARCH_MACHINE == EM_TINYJ
#define ELF_ARCH_MACHINENAME "TINYJ"
#elif ELF_ARCH_MACHINE == EM_X86_64
#define ELF_ARCH_MACHINENAME "X86_64"
#elif ELF_ARCH_MACHINE == EM_PDSP
#define ELF_ARCH_MACHINENAME "PDSP"
#elif ELF_ARCH_MACHINE == EM_FX66
#define ELF_ARCH_MACHINENAME "FX66"
#elif ELF_ARCH_MACHINE == EM_ST9PLUS
#define ELF_ARCH_MACHINENAME "ST9PLUS"
#elif ELF_ARCH_MACHINE == EM_ST7
#define ELF_ARCH_MACHINENAME "ST7"
#elif ELF_ARCH_MACHINE == EM_68HC16
#define ELF_ARCH_MACHINENAME "68HC16"
#elif ELF_ARCH_MACHINE == EM_68HC11
#define ELF_ARCH_MACHINENAME "68HC11"
#elif ELF_ARCH_MACHINE == EM_68HC08
#define ELF_ARCH_MACHINENAME "68HC08"
#elif ELF_ARCH_MACHINE == EM_68HC05
#define ELF_ARCH_MACHINENAME "68HC05"
#elif ELF_ARCH_MACHINE == EM_SVX
#define ELF_ARCH_MACHINENAME "SVX"
#elif ELF_ARCH_MACHINE == EM_ST19
#define ELF_ARCH_MACHINENAME "ST19"
#elif ELF_ARCH_MACHINE == EM_VAX
#define ELF_ARCH_MACHINENAME "VAX"
#elif ELF_ARCH_MACHINE == EM_CRIS
#define ELF_ARCH_MACHINENAME "CRIS"
#elif ELF_ARCH_MACHINE == EM_JAVELIN
#define ELF_ARCH_MACHINENAME "JAVELIN"
#elif ELF_ARCH_MACHINE == EM_FIREPATH
#define ELF_ARCH_MACHINENAME "FIREPATH"
#elif ELF_ARCH_MACHINE == EM_ZSP
#define ELF_ARCH_MACHINENAME "ZSP"
#elif ELF_ARCH_MACHINE == EM_MMIX
#define ELF_ARCH_MACHINENAME "MMIX"
#elif ELF_ARCH_MACHINE == EM_HUANY
#define ELF_ARCH_MACHINENAME "HUANY"
#elif ELF_ARCH_MACHINE == EM_PRISM
#define ELF_ARCH_MACHINENAME "PRISM"
#elif ELF_ARCH_MACHINE == EM_AVR
#define ELF_ARCH_MACHINENAME "AVR"
#elif ELF_ARCH_MACHINE == EM_FR30
#define ELF_ARCH_MACHINENAME "FR30"
#elif ELF_ARCH_MACHINE == EM_D10V
#define ELF_ARCH_MACHINENAME "D10V"
#elif ELF_ARCH_MACHINE == EM_D30V
#define ELF_ARCH_MACHINENAME "D30V"
#elif ELF_ARCH_MACHINE == EM_V850
#define ELF_ARCH_MACHINENAME "V850"
#elif ELF_ARCH_MACHINE == EM_M32R
#define ELF_ARCH_MACHINENAME "M32R"
#elif ELF_ARCH_MACHINE == EM_MN10300
#define ELF_ARCH_MACHINENAME "MN10300"
#elif ELF_ARCH_MACHINE == EM_MN10200
#define ELF_ARCH_MACHINENAME "MN10200"
#elif ELF_ARCH_MACHINE == EM_PJ
#define ELF_ARCH_MACHINENAME "PJ"
#elif ELF_ARCH_MACHINE == EM_OPENRISC
#define ELF_ARCH_MACHINENAME "OPENRISC"
#elif ELF_ARCH_MACHINE == EM_ARC_A5
#define ELF_ARCH_MACHINENAME "ARC_A5"
#elif ELF_ARCH_MACHINE == EM_XTENSA
#define ELF_ARCH_MACHINENAME "XTENSA"
#else /* ... */
#define ELF_ARCH_MACHINENAME PP_STR(ELF_ARCH_MACHINE)
#endif /* !... */
#endif /* !ELF_ARCH_MACHINENAME */


/* Must number of allowed program headers */
#ifndef ELF_ARCH_MAXPHCOUNT
#define ELF_ARCH_MAXPHCOUNT 64
#endif /* !ELF_ARCH_MAXPHCOUNT */

#ifndef ELFW
#if ELF_ARCH_CLASS == ELFCLASS32
#define ELFW(x) ELF32_##x
#define ElfW(x) Elf32_##x
#elif ELF_ARCH_CLASS == ELFCLASS64
#define ELFW(x) ELF64_##x
#define ElfW(x) Elf64_##x
#endif
#endif /* !ELFW */

#ifdef __KERNEL__
#include <kernel/compiler.h>
#endif /* __KERNEL__ */

#ifdef __CC__
__DECL_BEGIN

#ifndef __elfexec_info_defined
#define __elfexec_info_defined 1
struct elfexec_info /*[PREFIX(pr_)]*/ {
	ElfW(Addr)  ei_rtldaddr;    /* Load address of the RTLD itself. */
	ElfW(Half)  ei_pnum;        /* Amount of ELF program headers. */
	ElfW(Half)  ei_ppad;        /* ... */
	ElfW(Phdr)  ei_phdr[1024];  /* [ei_pnum] Vector of ELF program headers.
	                             * All of these have already been loaded into memory. */
//	char        ei_filename[*]; /* NUL-terminated filename of the loaded binary. */
//	char        ei_align[*];    /* Align to next pointer-sized byte boundary. */
//	void       *ei_entry;       /* The final entry point for the program. */
//	byte_t      ei_entry_sp[];  /* Entry stack address (set the address of this field as
//	                             * stack-pointer when handing control to the hosted application) */
};
#endif /* !__elfexec_info_defined */

#ifdef __KERNEL__

/* Initialize the given `user_state' for execution */
#ifndef elfexec_init_entry
#define elfexec_init_entry elfexec_init_entry
struct icpustate;
FUNDEF struct icpustate *__KCALL
elfexec_init_entry(struct icpustate *__restrict user_state,
                   __USER void *peb_address, __USER void *ustack_base,
                   __size_t ustack_size, __USER void *entry_pc);
#endif /* !elfexec_init_entry */

/* Update the given `user_state' for invoking the RTLD */
#ifndef elfexec_init_rtld
#define elfexec_init_rtld  elfexec_init_rtld
struct icpustate;
struct path;
struct directory_entry;
struct regular_node;
FUNDEF struct icpustate *__KCALL
elfexec_init_rtld(struct icpustate *__restrict user_state,
                  struct path *__restrict exec_path,
                  struct directory_entry *__restrict exec_dentry,
                  struct regular_node *__restrict exec_node,
                  __USER void *application_loadaddr,
                  __USER void *linker_loadaddr,
                  __KERNEL ElfW(Phdr) *__restrict phdr_vec,
                  ElfW(Half) phdr_cnt);
#endif /* !elfexec_init_rtld */
#endif /* __KERNEL__ */

__DECL_END

/* Return the filename of the primary application */
#ifndef elfexec_info_getfilename
#define elfexec_info_getfilename(x) ((char *)&(x)->ei_phdr[(x)->pr_pnum])
#endif /* !elfexec_info_getfilename */

/* Return the entry point address of the primary application (as an l-value) */
#ifndef elfexec_info_getentry
#include <libc/string.h>
#define elfexec_info_getentry(x)                                           \
	(*(void **)((__uintptr_t)(__libc_strend(elfexec_info_getfilename(x)) + \
	                          sizeof(__uintptr_t)) &                       \
	            ~(sizeof(__uintptr_t) - 1)))
#endif /* !elfexec_info_getentry */

#endif /* __CC__ */

#endif /* !_KOS_EXEC_ELF_H */