/* HASH 0xb7d0307a */
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
#ifndef _STDIO_H
#define _STDIO_H 1

#include <__stdinc.h>
#if defined(_CXX_CSTDIO) && !defined(__CXX_SYSTEM_HEADER)
/* Import all symbols into the global namespace when re-including "stdio.h" after "cstdio" */
#ifndef __size_t_defined
#define __size_t_defined 1
__NAMESPACE_STD_USING(size_t)
#endif /* !__size_t_defined */
#ifndef __fpos_t_defined
#define __fpos_t_defined 1
__NAMESPACE_STD_USING(fpos_t)
#endif /* !__fpos_t_defined */
#ifndef __FILE_defined
#define __FILE_defined 1
__NAMESPACE_STD_USING(FILE)
#endif /* !__FILE_defined */
#if !defined(__remove_defined) && defined(__std_remove_defined)
#define __remove_defined 1
__NAMESPACE_STD_USING(remove)
#endif /* !__remove_defined && !__std_remove_defined */
#if !defined(__rename_defined) && defined(__std_rename_defined)
#define __rename_defined 1
__NAMESPACE_STD_USING(rename)
#endif /* !__rename_defined && !__std_rename_defined */
#if !defined(__tmpnam_defined) && defined(__std_tmpnam_defined)
#define __tmpnam_defined 1
__NAMESPACE_STD_USING(tmpnam)
#endif /* !__tmpnam_defined && !__std_tmpnam_defined */
#if !defined(__fclose_defined) && defined(__std_fclose_defined)
#define __fclose_defined 1
__NAMESPACE_STD_USING(fclose)
#endif /* !__fclose_defined && !__std_fclose_defined */
__NAMESPACE_STD_USING(fflush)
#if !defined(__setbuf_defined) && defined(__std_setbuf_defined)
#define __setbuf_defined 1
__NAMESPACE_STD_USING(setbuf)
#endif /* !__setbuf_defined && !__std_setbuf_defined */
#if !defined(__setvbuf_defined) && defined(__std_setvbuf_defined)
#define __setvbuf_defined 1
__NAMESPACE_STD_USING(setvbuf)
#endif /* !__setvbuf_defined && !__std_setvbuf_defined */
#if !defined(__fgetc_defined) && defined(__std_fgetc_defined)
#define __fgetc_defined 1
__NAMESPACE_STD_USING(fgetc)
#endif /* !__fgetc_defined && !__std_fgetc_defined */
#if !defined(__getc_defined) && defined(__std_getc_defined)
#define __getc_defined 1
__NAMESPACE_STD_USING(getc)
#endif /* !__getc_defined && !__std_getc_defined */
#if !defined(__getchar_defined) && defined(__std_getchar_defined)
#define __getchar_defined 1
__NAMESPACE_STD_USING(getchar)
#endif /* !__getchar_defined && !__std_getchar_defined */
#if !defined(__fputc_defined) && defined(__std_fputc_defined)
#define __fputc_defined 1
__NAMESPACE_STD_USING(fputc)
#endif /* !__fputc_defined && !__std_fputc_defined */
#if !defined(__putc_defined) && defined(__std_putc_defined)
#define __putc_defined 1
__NAMESPACE_STD_USING(putc)
#endif /* !__putc_defined && !__std_putc_defined */
#if !defined(__putchar_defined) && defined(__std_putchar_defined)
#define __putchar_defined 1
__NAMESPACE_STD_USING(putchar)
#endif /* !__putchar_defined && !__std_putchar_defined */
#if !defined(__fgets_defined) && defined(__std_fgets_defined)
#define __fgets_defined 1
__NAMESPACE_STD_USING(fgets)
#endif /* !__fgets_defined && !__std_fgets_defined */
#if !defined(__fputs_defined) && defined(__std_fputs_defined)
#define __fputs_defined 1
__NAMESPACE_STD_USING(fputs)
#endif /* !__fputs_defined && !__std_fputs_defined */
#if !defined(__puts_defined) && defined(__std_puts_defined)
#define __puts_defined 1
__NAMESPACE_STD_USING(puts)
#endif /* !__puts_defined && !__std_puts_defined */
#if !defined(__ungetc_defined) && defined(__std_ungetc_defined)
#define __ungetc_defined 1
__NAMESPACE_STD_USING(ungetc)
#endif /* !__ungetc_defined && !__std_ungetc_defined */
#if !defined(__fread_defined) && defined(__std_fread_defined)
#define __fread_defined 1
__NAMESPACE_STD_USING(fread)
#endif /* !__fread_defined && !__std_fread_defined */
#if !defined(__fwrite_defined) && defined(__std_fwrite_defined)
#define __fwrite_defined 1
__NAMESPACE_STD_USING(fwrite)
#endif /* !__fwrite_defined && !__std_fwrite_defined */
#if !defined(__fseek_defined) && defined(__std_fseek_defined)
#define __fseek_defined 1
__NAMESPACE_STD_USING(fseek)
#endif /* !__fseek_defined && !__std_fseek_defined */
#if !defined(__ftell_defined) && defined(__std_ftell_defined)
#define __ftell_defined 1
__NAMESPACE_STD_USING(ftell)
#endif /* !__ftell_defined && !__std_ftell_defined */
#if !defined(__rewind_defined) && defined(__std_rewind_defined)
#define __rewind_defined 1
__NAMESPACE_STD_USING(rewind)
#endif /* !__rewind_defined && !__std_rewind_defined */
#if !defined(__clearerr_defined) && defined(__std_clearerr_defined)
#define __clearerr_defined 1
__NAMESPACE_STD_USING(clearerr)
#endif /* !__clearerr_defined && !__std_clearerr_defined */
#if !defined(__feof_defined) && defined(__std_feof_defined)
#define __feof_defined 1
__NAMESPACE_STD_USING(feof)
#endif /* !__feof_defined && !__std_feof_defined */
#if !defined(__ferror_defined) && defined(__std_ferror_defined)
#define __ferror_defined 1
__NAMESPACE_STD_USING(ferror)
#endif /* !__ferror_defined && !__std_ferror_defined */
#if !defined(__perror_defined) && defined(__std_perror_defined)
#define __perror_defined 1
__NAMESPACE_STD_USING(perror)
#endif /* !__perror_defined && !__std_perror_defined */
#if !defined(__tmpfile_defined) && defined(__std_tmpfile_defined)
#define __tmpfile_defined 1
__NAMESPACE_STD_USING(tmpfile)
#endif /* !__tmpfile_defined && !__std_tmpfile_defined */
#if !defined(__fopen_defined) && defined(__std_fopen_defined)
#define __fopen_defined 1
__NAMESPACE_STD_USING(fopen)
#endif /* !__fopen_defined && !__std_fopen_defined */
#if !defined(__freopen_defined) && defined(__std_freopen_defined)
#define __freopen_defined 1
__NAMESPACE_STD_USING(freopen)
#endif /* !__freopen_defined && !__std_freopen_defined */
#if !defined(__fgetpos_defined) && defined(__std_fgetpos_defined)
#define __fgetpos_defined 1
__NAMESPACE_STD_USING(fgetpos)
#endif /* !__fgetpos_defined && !__std_fgetpos_defined */
#if !defined(__fsetpos_defined) && defined(__std_fsetpos_defined)
#define __fsetpos_defined 1
__NAMESPACE_STD_USING(fsetpos)
#endif /* !__fsetpos_defined && !__std_fsetpos_defined */
#if !defined(__vfprintf_defined) && defined(__std_vfprintf_defined)
#define __vfprintf_defined 1
__NAMESPACE_STD_USING(vfprintf)
#endif /* !__vfprintf_defined && !__std_vfprintf_defined */
#if !defined(__fprintf_defined) && defined(__std_fprintf_defined)
#define __fprintf_defined 1
__NAMESPACE_STD_USING(fprintf)
#endif /* !__fprintf_defined && !__std_fprintf_defined */
#if !defined(__vprintf_defined) && defined(__std_vprintf_defined)
#define __vprintf_defined 1
__NAMESPACE_STD_USING(vprintf)
#endif /* !__vprintf_defined && !__std_vprintf_defined */
#if !defined(__printf_defined) && defined(__std_printf_defined)
#define __printf_defined 1
__NAMESPACE_STD_USING(printf)
#endif /* !__printf_defined && !__std_printf_defined */
#if !defined(__vfscanf_defined) && defined(__std_vfscanf_defined)
#define __vfscanf_defined 1
__NAMESPACE_STD_USING(vfscanf)
#endif /* !__vfscanf_defined && !__std_vfscanf_defined */
#if !defined(__vscanf_defined) && defined(__std_vscanf_defined)
#define __vscanf_defined 1
__NAMESPACE_STD_USING(vscanf)
#endif /* !__vscanf_defined && !__std_vscanf_defined */
#if !defined(__fscanf_defined) && defined(__std_fscanf_defined)
#define __fscanf_defined 1
__NAMESPACE_STD_USING(fscanf)
#endif /* !__fscanf_defined && !__std_fscanf_defined */
#if !defined(__scanf_defined) && defined(__std_scanf_defined)
#define __scanf_defined 1
__NAMESPACE_STD_USING(scanf)
#endif /* !__scanf_defined && !__std_scanf_defined */
#if !defined(__gets_defined) && defined(__std_gets_defined)
#define __gets_defined 1
__NAMESPACE_STD_USING(gets)
#endif /* !__gets_defined && !__std_gets_defined */
#if !defined(__vsscanf_defined) && defined(__std_vsscanf_defined)
#define __vsscanf_defined 1
__NAMESPACE_STD_USING(vsscanf)
#endif /* !__vsscanf_defined && !__std_vsscanf_defined */
#if !defined(__sscanf_defined) && defined(__std_sscanf_defined)
#define __sscanf_defined 1
__NAMESPACE_STD_USING(sscanf)
#endif /* !__sscanf_defined && !__std_sscanf_defined */
__NAMESPACE_STD_USING(vsprintf)
#if !defined(__sprintf_defined) && defined(__std_sprintf_defined)
#define __sprintf_defined 1
__NAMESPACE_STD_USING(sprintf)
#endif /* !__sprintf_defined && !__std_sprintf_defined */
#if !defined(__vsnprintf_defined) && defined(__std_vsnprintf_defined)
#define __vsnprintf_defined 1
__NAMESPACE_STD_USING(vsnprintf)
#endif /* !__vsnprintf_defined && !__std_vsnprintf_defined */
#if !defined(__snprintf_defined) && defined(__std_snprintf_defined)
#define __snprintf_defined 1
__NAMESPACE_STD_USING(snprintf)
#endif /* !__snprintf_defined && !__std_snprintf_defined */
#else /* _CXX_CSTDIO && !__CXX_SYSTEM_HEADER */
#include <__crt.h>
#include <kos/anno.h>

#ifdef __COMPILER_HAVE_PRAGMA_GCC_SYSTEM_HEADER
#pragma GCC system_header
#endif /* __COMPILER_HAVE_PRAGMA_GCC_SYSTEM_HEADER */

#include <features.h>
#include <bits/types.h>
#include <bits/stdio_lim.h>
#include <libio.h>
#include <bits/oflags.h>
#ifdef __USE_DOS
#include <xlocale.h>
#endif /* __USE_DOS */
#ifdef __CRT_CYG_PRIMARY
#include <sys/reent.h>
#endif /* __CRT_CYG_PRIMARY */
#ifdef __CRT_DOS_PRIMARY
#include <bits/io-file.h>
#endif /* __CRT_DOS_PRIMARY */

__SYSDECL_BEGIN

/* The possibilities for the third argument to `setvbuf()'. */
#ifdef __CRT_DOS_PRIMARY
#define _IOFBF 0x0000 /* Fully buffered. */
#define _IOLBF 0x0040 /* Line buffered. */
#define _IONBF 0x0004 /* No buffering. */
#else
#define _IOFBF 0      /* Fully buffered. */
#define _IOLBF 1      /* Line buffered. */
#define _IONBF 2      /* No buffering. */
#endif

/* Default buffer size.  */
#ifndef BUFSIZ
#ifdef __USE_DOS
#define BUFSIZ 512
#else
#define BUFSIZ 8192
#endif
#endif

#ifndef EOF
#ifdef __EOF
#define EOF __EOF
#else
#define EOF (-1)
#endif
#endif

#ifndef SEEK_SET
#   define SEEK_SET  0 /* Seek from beginning of file.  */
#   define SEEK_CUR  1 /* Seek from current position.  */
#   define SEEK_END  2 /* Seek from end of file.  */
#if defined(__USE_GNU) && (defined(__CRT_KOS) || defined(__CRT_GLC))
#   define SEEK_DATA 3 /* Seek to next data.  */
#   define SEEK_HOLE 4 /* Seek to next hole.  */
#endif /* __USE_GNU && (__CRT_KOS || __CRT_GLC) */
#endif

#if defined(__USE_MISC) || defined(__USE_XOPEN)
#ifdef __USE_DOS
#define P_tmpdir "\\"
#else
#define P_tmpdir "/tmp"
#endif
#endif


#ifdef __CC__
#ifndef __std_size_t_defined
#define __std_size_t_defined 1
__NAMESPACE_STD_BEGIN
typedef __SIZE_TYPE__ size_t;
__NAMESPACE_STD_END
#endif /* !__std_size_t_defined */
#ifndef __CXX_SYSTEM_HEADER
#ifndef __size_t_defined
#define __size_t_defined 1
__NAMESPACE_STD_USING(size_t)
#endif /* !__size_t_defined */
#endif /* !__CXX_SYSTEM_HEADER */

#ifndef NULL
#define NULL __NULLPTR
#endif

#ifdef __USE_XOPEN2K8
#ifndef __off_t_defined
#define __off_t_defined 1
typedef __typedef_off_t off_t;
#endif /* !__off_t_defined */

#ifndef __ssize_t_defined
#define __ssize_t_defined 1
typedef __ssize_t ssize_t;
#endif /* !__ssize_t_defined */

#ifdef __USE_LARGEFILE64
#ifndef __off64_t_defined
#define __off64_t_defined 1
typedef __off64_t off64_t;
#endif /* !__off64_t_defined */
#endif /* __USE_LARGEFILE64 */
#endif /* __USE_XOPEN2K8 */

#ifndef __std_fpos_t_defined
#define __std_fpos_t_defined 1
__NAMESPACE_STD_BEGIN
typedef __FS_TYPE(pos) fpos_t;
__NAMESPACE_STD_END
#endif /* !__std_fpos_t_defined */
#ifndef __CXX_SYSTEM_HEADER
#ifndef __fpos_t_defined
#define __fpos_t_defined 1
__NAMESPACE_STD_USING(fpos_t)
#endif /* !__fpos_t_defined */
#endif /* !__CXX_SYSTEM_HEADER */

#ifdef __USE_LARGEFILE64
#ifndef __fpos64_t_defined
#define __fpos64_t_defined 1
typedef __pos64_t      fpos64_t;
#endif /* !__fpos64_t_defined */
#endif

#ifndef __std_FILE_defined
#define __std_FILE_defined 1
__NAMESPACE_STD_BEGIN
typedef __FILE FILE;
__NAMESPACE_STD_END
#endif /* !__std_FILE_defined */
#ifndef __CXX_SYSTEM_HEADER
#ifndef __FILE_defined
#define __FILE_defined 1
__NAMESPACE_STD_USING(FILE)
#endif /* !__FILE_defined */
#endif /* !__CXX_SYSTEM_HEADER */

#ifndef __NO_STDSTREAMS
/* Standard streams. */
#ifndef __stdstreams_defined
#define __stdstreams_defined 1
#undef stdin
#undef stdout
#undef stderr
#ifdef __CRT_CYG_PRIMARY
#   define stdin  (__CYG_REENT->__cyg_stdin)
#   define stdout (__CYG_REENT->__cyg_stdout)
#   define stderr (__CYG_REENT->__cyg_stderr)
#elif defined(__CRT_DOS_PRIMARY)
#ifdef __USE_DOS_LINKOBJECTS
#ifndef ___iob_defined
#define ___iob_defined 1
__LIBC FILE _iob[];
#endif /* !___iob_defined */
#   define stdin    (_iob+0)
#   define stdout   (_iob+1)
#   define stderr   (_iob+2)
#else /* __USE_DOS_LINKOBJECTS */
#ifndef ____iob_func_defined
#define ____iob_func_defined 1
__LIBC __ATTR_WUNUSED __ATTR_RETNONNULL FILE *__NOTHROW(__LIBCCALL __iob_func)(void);
#endif /* !____iob_func_defined */
#   define stdin    (__iob_func()+0)
#   define stdout   (__iob_func()+1)
#   define stderr   (__iob_func()+2)
#endif /* !__USE_DOS_LINKOBJECTS */
#else
__LIBC __FILE *stdin;
#define stdin  stdin
__LIBC __FILE *stdout;
#define stdout stdout
__LIBC __FILE *stderr;
#define stderr stderr
#endif
#endif /* !__stdstreams_defined */
#endif /* !__NO_STDSTREAMS */


__NAMESPACE_STD_BEGIN
#ifndef __std_remove_defined
#define __std_remove_defined 1
#ifdef __remove_defined
__NAMESPACE_GLB_USING(remove)
#elif defined(__CRT_HAVE_remove)
/* Remove a file or directory `FILENAME' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_RPC,remove,(char const *__filename),(__filename))
#elif defined(__CRT_AT_FDCWD) && defined(__CRT_HAVE_removeat)
__NAMESPACE_STD_END
#include <local/stdio/remove.h>
__NAMESPACE_STD_BEGIN
/* Remove a file or directory `FILENAME' */
__NAMESPACE_LOCAL_USING_OR_IMPL(remove, __FORCELOCAL __ATTR_NONNULL((1)) int __NOTHROW_RPC(__LIBCCALL remove)(char const *__filename) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(remove))(__filename); })
#else /* CUSTOM: remove */
#undef __std_remove_defined
#endif /* remove... */
#endif /* !__std_remove_defined */
#ifndef __std_rename_defined
#define __std_rename_defined 1
#ifdef __rename_defined
__NAMESPACE_GLB_USING(rename)
#elif defined(__CRT_HAVE_rename)
/* Rename a given file `OLDNAME' to `NEWNAME_OR_PATH', or in the event
 * that `NEWNAME_OR_PATH' refers to a directory, place the file within. */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,__NOTHROW_RPC,rename,(char const *__oldname, char const *__newname_or_path),(__oldname,__newname_or_path))
#elif (defined(__CRT_HAVE_renameat) || defined(__CRT_HAVE_frenameat) || defined(__CRT_HAVE_renameat))
__NAMESPACE_STD_END
#include <local/stdio/rename.h>
__NAMESPACE_STD_BEGIN
/* Rename a given file `OLDNAME' to `NEWNAME_OR_PATH', or in the event
 * that `NEWNAME_OR_PATH' refers to a directory, place the file within. */
__NAMESPACE_LOCAL_USING_OR_IMPL(rename, __FORCELOCAL __ATTR_NONNULL((1, 2)) int __NOTHROW_RPC(__LIBCCALL rename)(char const *__oldname, char const *__newname_or_path) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(rename))(__oldname, __newname_or_path); })
#else /* CUSTOM: rename */
#undef __std_rename_defined
#endif /* rename... */
#endif /* !__std_rename_defined */
#ifndef __std_tmpnam_defined
#define __std_tmpnam_defined 1
#if defined(__CRT_HAVE_tmpnam)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),char *,__NOTHROW_NCX,tmpnam,(char *__buf),(__buf))
#else /* LIBC: tmpnam */
#undef __std_tmpnam_defined
#endif /* tmpnam... */
#endif /* !__std_tmpnam_defined */
#ifndef __std_fclose_defined
#define __std_fclose_defined 1
#if defined(__CRT_HAVE_fclose)
/* Close and destroy a given file `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fclose,(FILE *__restrict __stream),(__stream)) __THROWS(...)
#else /* LIBC: fclose */
#undef __std_fclose_defined
#endif /* fclose... */
#endif /* !__std_fclose_defined */
#if defined(__CRT_HAVE_fflush_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(,int,,fflush,(FILE *__stream),fflush_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fflush_nolock) && (defined(__USE_STDIO_UNLOCKED))
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(,int,,fflush,(FILE *__stream),_fflush_nolock,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fflush)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CDECLARE(,int,,fflush,(FILE *__stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fflush_unlocked)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(,int,,fflush,(FILE *__stream),fflush_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fflush_nolock)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(,int,,fflush,(FILE *__stream),_fflush_nolock,(__stream)) __THROWS(...)
#else /* LIBC: fflush */
__NAMESPACE_STD_END
#include <local/stdio/fflush.h>
__NAMESPACE_STD_BEGIN
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__NAMESPACE_LOCAL_USING_OR_IMPL(fflush, __FORCELOCAL int (__LIBCCALL fflush)(FILE *__stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fflush))(__stream); })
#endif /* fflush... */
#ifndef __std_setbuf_defined
#define __std_setbuf_defined 1
#if defined(__CRT_HAVE_setbuf)
/* Alias for `setvbuf(STREAM, buf, _IOFBF, BUFSIZ)' */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,setbuf,(FILE *__restrict __stream, char *__restrict __buf),(__stream,__buf))
#elif defined(__CRT_HAVE_setvbuf)
__NAMESPACE_STD_END
#include <local/stdio/setbuf.h>
__NAMESPACE_STD_BEGIN
/* Alias for `setvbuf(STREAM, buf, _IOFBF, BUFSIZ)' */
__NAMESPACE_LOCAL_USING_OR_IMPL(setbuf, __FORCELOCAL __ATTR_NONNULL((1)) void __NOTHROW_NCX(__LIBCCALL setbuf)(FILE *__restrict __stream, char *__restrict __buf) { (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(setbuf))(__stream, __buf); })
#else /* CUSTOM: setbuf */
#undef __std_setbuf_defined
#endif /* setbuf... */
#endif /* !__std_setbuf_defined */
#ifndef __std_setvbuf_defined
#define __std_setvbuf_defined 1
#if defined(__CRT_HAVE_setvbuf)
/* Set the buffer and buffer-mode to-be used by the given `STREAM'
 * @param modes: One of `_IOFBF', `_IOLBF' or `_IONBF' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,setvbuf,(FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __bufsize),(__stream,__buf,__modes,__bufsize))
#else /* LIBC: setvbuf */
#undef __std_setvbuf_defined
#endif /* setvbuf... */
#endif /* !__std_setvbuf_defined */
#ifndef __std_fgetc_defined
#define __std_fgetc_defined 1
#if defined(__CRT_HAVE_fgetc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc,(FILE *__restrict __stream),fgetc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc,(FILE *__restrict __stream),getc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fgetc,(FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc,(FILE *__restrict __stream),getc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__IO_getc)
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc,(FILE *__restrict __stream),_IO_getc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/fgetc.h>
__NAMESPACE_STD_BEGIN
/* Read and return a single character from `STREAM'
 * If the given `STREAM' has been exhausted or if an error occurred, `EOF' is
 * returned and the exact cause can be determined by using `ferror' and `feof' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgetc, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fgetc)(FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc))(__stream); })
#else /* CUSTOM: fgetc */
#undef __std_fgetc_defined
#endif /* fgetc... */
#endif /* !__std_fgetc_defined */
#ifndef __std_getc_defined
#define __std_getc_defined 1
#if defined(__CRT_HAVE_getc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fgetc()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc,(FILE *__restrict __stream),getc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fgetc()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc,(FILE *__restrict __stream),fgetc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Alias for `fgetc()' */
__CDECLARE(__ATTR_NONNULL((1)),int,,getc,(FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Alias for `fgetc()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc,(FILE *__restrict __stream),fgetc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__IO_getc)
/* Alias for `fgetc()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc,(FILE *__restrict __stream),_IO_getc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/fgetc.h>
__NAMESPACE_STD_BEGIN
/* Alias for `fgetc()' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL getc)(FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc))(__stream); }
#else /* CUSTOM: fgetc */
#undef __std_getc_defined
#endif /* getc... */
#endif /* !__std_getc_defined */
#ifndef __std_getchar_defined
#define __std_getchar_defined 1
#if defined(__CRT_HAVE_getchar_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fgetc(stdin)' */
__CREDIRECT(,int,,getchar,(void),getchar_unlocked,()) __THROWS(...)
#elif defined(__CRT_HAVE_getchar)
/* Alias for `fgetc(stdin)' */
__CDECLARE(,int,,getchar,(void),()) __THROWS(...)
#elif defined(__CRT_HAVE__fgetchar)
/* Alias for `fgetc(stdin)' */
__CREDIRECT(,int,,getchar,(void),_fgetchar,()) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/getchar.h>
__NAMESPACE_STD_BEGIN
/* Alias for `fgetc(stdin)' */
__NAMESPACE_LOCAL_USING_OR_IMPL(getchar, __FORCELOCAL int (__LIBCCALL getchar)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getchar))(); })
#else /* CUSTOM: getchar */
#undef __std_getchar_defined
#endif /* getchar... */
#endif /* !__std_getchar_defined */
#ifndef __std_fputc_defined
#define __std_fputc_defined 1
#if __has_builtin(__builtin_fputc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc)
/* Write a single character `CH' to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL fputc)(int __ch, FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc(__ch, __stream); }
#elif defined(__CRT_HAVE_fputc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Write a single character `CH' to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc,(int __ch, FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Write a single character `CH' to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc,(int __ch, FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc)
/* Write a single character `CH' to `STREAM' */
__CDECLARE(__ATTR_NONNULL((2)),int,,fputc,(int __ch, FILE *__restrict __stream),(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc)
/* Write a single character `CH' to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc,(int __ch, FILE *__restrict __stream),putc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__IO_putc)
/* Write a single character `CH' to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc,(int __ch, FILE *__restrict __stream),_IO_putc,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/fputc.h>
__NAMESPACE_STD_BEGIN
/* Write a single character `CH' to `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fputc, __FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL fputc)(int __ch, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc))(__ch, __stream); })
#else /* CUSTOM: fputc */
#undef __std_fputc_defined
#endif /* fputc... */
#endif /* !__std_fputc_defined */
#ifndef __std_putc_defined
#define __std_putc_defined 1
#if __has_builtin(__builtin_fputc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc)
/* Alias for `fputc()' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putc)(int __ch, FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc(__ch, __stream); }
#elif defined(__CRT_HAVE_putc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc)
/* Alias for `fputc()' */
__CDECLARE(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc)
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),fputc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__IO_putc)
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),_IO_putc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc_unlocked)
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc_unlocked)
/* Alias for `fputc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc,(int __ch, FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/fputc.h>
__NAMESPACE_STD_BEGIN
/* Alias for `fputc()' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putc)(int __ch, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc))(__ch, __stream); }
#else /* CUSTOM: fputc */
#undef __std_putc_defined
#endif /* putc... */
#endif /* !__std_putc_defined */
#ifndef __std_putchar_defined
#define __std_putchar_defined 1
#if __has_builtin(__builtin_putchar) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__FORCELOCAL int (__LIBCCALL putchar)(int __ch) __THROWS(...) { return __builtin_putchar(__ch); }
#elif defined(__CRT_HAVE_putchar_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,,putchar,(int __ch),putchar_unlocked,(__ch)) __THROWS(...)
#elif defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__CDECLARE(,int,,putchar,(int __ch),(__ch)) __THROWS(...)
#elif defined(__CRT_HAVE__fputchar)
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,,putchar,(int __ch),_fputchar,(__ch)) __THROWS(...)
#elif defined(__CRT_HAVE_putchar_unlocked)
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,,putchar,(int __ch),putchar_unlocked,(__ch)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock))))
__NAMESPACE_STD_END
#include <local/stdio/putchar.h>
__NAMESPACE_STD_BEGIN
/* Alias for `fputc(CH, stdout)' */
__NAMESPACE_LOCAL_USING_OR_IMPL(putchar, __FORCELOCAL int (__LIBCCALL putchar)(int __ch) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putchar))(__ch); })
#else /* CUSTOM: putchar */
#undef __std_putchar_defined
#endif /* putchar... */
#endif /* !__std_putchar_defined */
#ifndef __std_fgets_defined
#define __std_fgets_defined 1
#if defined(__CRT_HAVE_fgets_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Read up to `BUFSIZE - 1' bytes of data from `STREAM', storing them into `BUF' stopped when
 * the buffer is full or a line-feed was read (in this case, the line-feed is also written to `BUF')
 * Afterwards, append a trailing NUL-character and re-return `BUF', or return `NULL' if an error occurred. */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),char *,,fgets,(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, FILE *__restrict __stream),fgets_unlocked,(__buf,__bufsize,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgets)
/* Read up to `BUFSIZE - 1' bytes of data from `STREAM', storing them into `BUF' stopped when
 * the buffer is full or a line-feed was read (in this case, the line-feed is also written to `BUF')
 * Afterwards, append a trailing NUL-character and re-return `BUF', or return `NULL' if an error occurred. */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),char *,,fgets,(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, FILE *__restrict __stream),(__buf,__bufsize,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgets_unlocked)
/* Read up to `BUFSIZE - 1' bytes of data from `STREAM', storing them into `BUF' stopped when
 * the buffer is full or a line-feed was read (in this case, the line-feed is also written to `BUF')
 * Afterwards, append a trailing NUL-character and re-return `BUF', or return `NULL' if an error occurred. */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),char *,,fgets,(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, FILE *__restrict __stream),fgets_unlocked,(__buf,__bufsize,__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && (defined(__CRT_HAVE_ferror) || defined(__CRT_HAVE_ferror_unlocked))
__NAMESPACE_STD_END
#include <local/stdio/fgets.h>
__NAMESPACE_STD_BEGIN
/* Read up to `BUFSIZE - 1' bytes of data from `STREAM', storing them into `BUF' stopped when
 * the buffer is full or a line-feed was read (in this case, the line-feed is also written to `BUF')
 * Afterwards, append a trailing NUL-character and re-return `BUF', or return `NULL' if an error occurred. */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgets, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 3)) char *(__LIBCCALL fgets)(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgets))(__buf, __bufsize, __stream); })
#else /* CUSTOM: fgets */
#undef __std_fgets_defined
#endif /* fgets... */
#endif /* !__std_fgets_defined */
#ifndef __std_fputs_defined
#define __std_fputs_defined 1
#if __has_builtin(__builtin_fputs) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputs)
/* Print a given string `STR' to `STREAM'. This is identical to:
 * >> fwrite(str, sizeof(char), strlen(str), stream); */
__FORCELOCAL __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__LIBCCALL fputs)(char const *__restrict __str, FILE *__restrict __stream) __THROWS(...) { return __builtin_fputs(__str, __stream); }
#elif defined(__CRT_HAVE_fputs_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Print a given string `STR' to `STREAM'. This is identical to:
 * >> fwrite(str, sizeof(char), strlen(str), stream); */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,fputs,(char const *__restrict __str, FILE *__restrict __stream),fputs_unlocked,(__str,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputs)
/* Print a given string `STR' to `STREAM'. This is identical to:
 * >> fwrite(str, sizeof(char), strlen(str), stream); */
__CDECLARE(__ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,fputs,(char const *__restrict __str, FILE *__restrict __stream),(__str,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputs_unlocked)
/* Print a given string `STR' to `STREAM'. This is identical to:
 * >> fwrite(str, sizeof(char), strlen(str), stream); */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,fputs,(char const *__restrict __str, FILE *__restrict __stream),fputs_unlocked,(__str,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
__NAMESPACE_STD_END
#include <local/stdio/fputs.h>
__NAMESPACE_STD_BEGIN
/* Print a given string `STR' to `STREAM'. This is identical to:
 * >> fwrite(str, sizeof(char), strlen(str), stream); */
__NAMESPACE_LOCAL_USING_OR_IMPL(fputs, __FORCELOCAL __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__LIBCCALL fputs)(char const *__restrict __str, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputs))(__str, __stream); })
#else /* CUSTOM: fputs */
#undef __std_fputs_defined
#endif /* fputs... */
#endif /* !__std_fputs_defined */
#ifndef __std_puts_defined
#define __std_puts_defined 1
#if __has_builtin(__builtin_puts) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_puts)
/* Print a given string `STR', followed by a line-feed to `STDOUT' */
__FORCELOCAL __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL puts)(char const *__restrict __str) __THROWS(...) { return __builtin_puts(__str); }
#elif defined(__CRT_HAVE_puts_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Print a given string `STR', followed by a line-feed to `STDOUT' */
__CREDIRECT(__ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,puts,(char const *__restrict __str),puts_unlocked,(__str)) __THROWS(...)
#elif defined(__CRT_HAVE_puts)
/* Print a given string `STR', followed by a line-feed to `STDOUT' */
__CDECLARE(__ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,puts,(char const *__restrict __str),(__str)) __THROWS(...)
#elif defined(__CRT_HAVE__IO_puts)
/* Print a given string `STR', followed by a line-feed to `STDOUT' */
__CREDIRECT(__ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,puts,(char const *__restrict __str),_IO_puts,(__str)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || (__has_builtin(__builtin_fputs) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputs)) || defined(__CRT_HAVE_fputs) || defined(__CRT_HAVE_fputs_unlocked))
__NAMESPACE_STD_END
#include <local/stdio/puts.h>
__NAMESPACE_STD_BEGIN
/* Print a given string `STR', followed by a line-feed to `STDOUT' */
__NAMESPACE_LOCAL_USING_OR_IMPL(puts, __FORCELOCAL __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL puts)(char const *__restrict __str) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(puts))(__str); })
#else /* CUSTOM: puts */
#undef __std_puts_defined
#endif /* puts... */
#endif /* !__std_puts_defined */
#ifndef __std_ungetc_defined
#define __std_ungetc_defined 1
#if defined(__CRT_HAVE_ungetc_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Unget a single character byte of data previously returned by `getc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,ungetc,(int __ch, FILE *__restrict __stream),ungetc_unlocked,(__ch,__stream))
#elif defined(__CRT_HAVE_ungetc)
/* Unget a single character byte of data previously returned by `getc()' */
__CDECLARE(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,ungetc,(int __ch, FILE *__restrict __stream),(__ch,__stream))
#else /* LIBC: ungetc */
#undef __std_ungetc_defined
#endif /* ungetc... */
#endif /* !__std_ungetc_defined */
#ifndef __std_fread_defined
#define __std_fread_defined 1
#if defined(__CRT_HAVE_fread_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Read up to `ELEMSIZE * ELEMCOUNT' bytes of data from `STREAM' into `BUF' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),fread_unlocked,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fread_nolock) && (defined(__USE_STDIO_UNLOCKED))
/* Read up to `ELEMSIZE * ELEMCOUNT' bytes of data from `STREAM' into `BUF' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),_fread_nolock,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread)
/* Read up to `ELEMSIZE * ELEMCOUNT' bytes of data from `STREAM' into `BUF' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))
__NAMESPACE_STD_END
#include <local/stdio/fread.h>
__NAMESPACE_STD_BEGIN
/* Read up to `ELEMSIZE * ELEMCOUNT' bytes of data from `STREAM' into `BUF' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fread, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fread)(void *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fread))(__buf, __elemsize, __elemcount, __stream); })
#else /* CUSTOM: fread */
#undef __std_fread_defined
#endif /* fread... */
#endif /* !__std_fread_defined */
#ifndef __std_fwrite_defined
#define __std_fwrite_defined 1
#if __has_builtin(__builtin_fwrite) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fwrite)
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fwrite)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream) __THROWS(...) { return __builtin_fwrite(__buf, __elemsize, __elemcount, __stream); }
#elif defined(__CRT_HAVE_fwrite_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),fwrite_unlocked,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fwrite_nolock) && (defined(__USE_STDIO_UNLOCKED))
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),_fwrite_nolock,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite)
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__CDECLARE(__ATTR_NONNULL((1, 4)),size_t,,fwrite,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_s)
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream),fwrite_s,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)))
__NAMESPACE_STD_END
#include <local/stdio/fwrite.h>
__NAMESPACE_STD_BEGIN
/* Write up to `ELEMSIZE * ELEMCOUNT' bytes of data from `BUF' into `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fwrite, __FORCELOCAL __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fwrite)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fwrite))(__buf, __elemsize, __elemcount, __stream); })
#else /* CUSTOM: fwrite */
#undef __std_fwrite_defined
#endif /* fwrite... */
#endif /* !__std_fwrite_defined */
#ifndef __std_fseek_defined
#define __std_fseek_defined 1
#if defined(__CRT_HAVE_fseek_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),fseek_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko_unlocked) && (defined(__USE_STDIO_UNLOCKED) && __SIZEOF_LONG__ == 4)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),fseeko_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && __SIZEOF_LONG__ == 8)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),fseeko64_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseek)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko) && (__SIZEOF_LONG__ == 4)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),fseeko,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64) && (__SIZEOF_LONG__ == 8)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),fseeko64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE__fseeki64) && (__SIZEOF_LONG__ == 8)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek,(FILE *__restrict __stream, long int __off, int __whence),_fseeki64,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseeko64_unlocked))))
__NAMESPACE_STD_END
#include <local/stdio/fseek.h>
__NAMESPACE_STD_BEGIN
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__NAMESPACE_LOCAL_USING_OR_IMPL(fseek, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseek)(FILE *__restrict __stream, long int __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseek))(__stream, __off, __whence); })
#else /* CUSTOM: fseek */
#undef __std_fseek_defined
#endif /* fseek... */
#endif /* !__std_fseek_defined */
#ifndef __std_ftell_defined
#define __std_ftell_defined 1
#if defined(__CRT_HAVE_ftell_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),ftell_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello_unlocked) && (__SIZEOF_LONG__ == 4 && defined(__USE_STDIO_UNLOCKED))
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),ftello_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64_unlocked) && (__SIZEOF_LONG__ == 8 && defined(__USE_STDIO_UNLOCKED))
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),ftello64_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello) && (__SIZEOF_LONG__ == 4)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),ftello,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64) && (__SIZEOF_LONG__ == 8)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),ftello64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__ftelli64) && (__SIZEOF_LONG__ == 8)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),long int,,ftell,(FILE *__restrict __stream),_ftelli64,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE__ftelli64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked))))
__NAMESPACE_STD_END
#include <local/stdio/ftell.h>
__NAMESPACE_STD_BEGIN
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__NAMESPACE_LOCAL_USING_OR_IMPL(ftell, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) long int (__LIBCCALL ftell)(FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftell))(__stream); })
#else /* CUSTOM: ftell */
#undef __std_ftell_defined
#endif /* ftell... */
#endif /* !__std_ftell_defined */
#ifndef __std_rewind_defined
#define __std_rewind_defined 1
#if defined(__CRT_HAVE_rewind)
/* Rewind the current in-file position of `STREAM' to its starting position */
__CDECLARE_VOID(__ATTR_NONNULL((1)),,rewind,(FILE *__restrict __stream),(__stream)) __THROWS(...)
#else /* LIBC: rewind */
#undef __std_rewind_defined
#endif /* rewind... */
#endif /* !__std_rewind_defined */
#ifndef __std_clearerr_defined
#define __std_clearerr_defined 1
#if defined(__CRT_HAVE_clearerr_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Clear the error state of `STREAM', returning the stream to normal operations mode */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,clearerr,(FILE *__restrict __stream),clearerr_unlocked,(__stream))
#elif defined(__CRT_HAVE_clearerr)
/* Clear the error state of `STREAM', returning the stream to normal operations mode */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,clearerr,(FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_clearerr_unlocked)
/* Clear the error state of `STREAM', returning the stream to normal operations mode */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,clearerr,(FILE *__restrict __stream),clearerr_unlocked,(__stream))
#else /* LIBC: clearerr */
#undef __std_clearerr_defined
#endif /* clearerr... */
#endif /* !__std_clearerr_defined */
#ifndef __std_feof_defined
#define __std_feof_defined 1
#if defined(__CRT_HAVE_feof_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Check if end-of-file has been reached in `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof,(FILE *__restrict __stream),feof_unlocked,(__stream))
#elif defined(__CRT_HAVE_feof)
/* Check if end-of-file has been reached in `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof,(FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_feof_unlocked)
/* Check if end-of-file has been reached in `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof,(FILE *__restrict __stream),feof_unlocked,(__stream))
#elif defined(__CRT_HAVE__IO_feof)
/* Check if end-of-file has been reached in `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof,(FILE *__restrict __stream),_IO_feof,(__stream))
#else /* LIBC: feof */
#undef __std_feof_defined
#endif /* feof... */
#endif /* !__std_feof_defined */
#ifndef __std_ferror_defined
#define __std_ferror_defined 1
#if defined(__CRT_HAVE_ferror_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Check if an I/O error occurred in `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ferror,(FILE *__restrict __stream),ferror_unlocked,(__stream))
#elif defined(__CRT_HAVE_ferror)
/* Check if an I/O error occurred in `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ferror,(FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_ferror_unlocked)
/* Check if an I/O error occurred in `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ferror,(FILE *__restrict __stream),ferror_unlocked,(__stream))
#else /* LIBC: ferror */
#undef __std_ferror_defined
#endif /* ferror... */
#endif /* !__std_ferror_defined */
#ifndef __std_perror_defined
#define __std_perror_defined 1
#ifdef __perror_defined
__NAMESPACE_GLB_USING(perror)
#elif defined(__CRT_HAVE_perror)
/* Print a given `MESSAGE' alongside `strerror(errno)' to stderr:
 * >> if (message) {
 * >>     fprintf(stderr, "%s: %s\n", message, strerror(errno));
 * >> } else {
 * >>     fprintf(stderr, "%s\n", strerror(errno));
 * >> } */
__CDECLARE_VOID(,__NOTHROW_RPC,perror,(char const *__message),(__message))
#else /* LIBC: perror */
#undef __std_perror_defined
#endif /* perror... */
#endif /* !__std_perror_defined */
#ifndef __std_tmpfile_defined
#define __std_tmpfile_defined 1
#if defined(__CRT_HAVE_tmpfile64) && (defined(__USE_FILE_OFFSET64))
/* Create and return a new file-stream for accessing a temporary file for reading/writing */
__CREDIRECT(__ATTR_WUNUSED,FILE *,__NOTHROW_RPC,tmpfile,(void),tmpfile64,())
#elif defined(__CRT_HAVE_tmpfile)
/* Create and return a new file-stream for accessing a temporary file for reading/writing */
__CDECLARE(__ATTR_WUNUSED,FILE *,__NOTHROW_RPC,tmpfile,(void),())
#elif defined(__CRT_HAVE_tmpfile64)
/* Create and return a new file-stream for accessing a temporary file for reading/writing */
__CREDIRECT(__ATTR_WUNUSED,FILE *,__NOTHROW_RPC,tmpfile,(void),tmpfile64,())
#else /* LIBC: tmpfile */
#undef __std_tmpfile_defined
#endif /* tmpfile... */
#endif /* !__std_tmpfile_defined */
#ifndef __std_fopen_defined
#define __std_fopen_defined 1
#if defined(__CRT_HAVE_fopen64) && (defined(__USE_FILE_OFFSET64))
/* Create and return a new file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),FILE *,__NOTHROW_RPC,fopen,(char const *__restrict __filename, char const *__restrict __modes),fopen64,(__filename,__modes))
#elif defined(__CRT_HAVE_fopen)
/* Create and return a new file-stream for accessing `FILENAME' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),FILE *,__NOTHROW_RPC,fopen,(char const *__restrict __filename, char const *__restrict __modes),(__filename,__modes))
#elif defined(__CRT_HAVE_fopen64)
/* Create and return a new file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),FILE *,__NOTHROW_RPC,fopen,(char const *__restrict __filename, char const *__restrict __modes),fopen64,(__filename,__modes))
#else /* LIBC: fopen */
#undef __std_fopen_defined
#endif /* fopen... */
#endif /* !__std_fopen_defined */
#ifndef __std_freopen_defined
#define __std_freopen_defined 1
#if defined(__CRT_HAVE_freopen64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64) && (defined(__USE_FILE_OFFSET64))
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CDECLARE(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#else /* LIBC: freopen */
#undef __std_freopen_defined
#endif /* freopen... */
#endif /* !__std_freopen_defined */
#ifndef __std_fgetpos_defined
#define __std_fgetpos_defined 1
#if defined(__CRT_HAVE_fgetpos64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos,(FILE *__restrict __stream, fpos_t *__restrict __pos),fgetpos64_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos_unlocked) && (defined(__USE_STDIO_UNLOCKED) && !defined(__USE_FILE_OFFSET64))
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos,(FILE *__restrict __stream, fpos_t *__restrict __pos),fgetpos_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos64) && (defined(__USE_FILE_OFFSET64))
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos,(FILE *__restrict __stream, fpos_t *__restrict __pos),fgetpos64,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos) && (!defined(__USE_FILE_OFFSET64))
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fgetpos,(FILE *__restrict __stream, fpos_t *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked) || defined(__CRT_HAVE__ftelli64))))
__NAMESPACE_STD_END
#include <local/stdio/fgetpos.h>
__NAMESPACE_STD_BEGIN
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgetpos, __FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fgetpos)(FILE *__restrict __stream, fpos_t *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetpos))(__stream, __pos); })
#else /* CUSTOM: fgetpos */
#undef __std_fgetpos_defined
#endif /* fgetpos... */
#endif /* !__std_fgetpos_defined */
#ifndef __std_fsetpos_defined
#define __std_fsetpos_defined 1
#if defined(__CRT_HAVE_fsetpos64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos,(FILE *__restrict __stream, fpos_t const *__restrict __pos),fsetpos64_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos_unlocked) && (defined(__USE_STDIO_UNLOCKED) && !defined(__USE_FILE_OFFSET64))
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos,(FILE *__restrict __stream, fpos_t const *__restrict __pos),fsetpos_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos64) && (defined(__USE_FILE_OFFSET64))
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos,(FILE *__restrict __stream, fpos_t const *__restrict __pos),fsetpos64,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos) && (!defined(__USE_FILE_OFFSET64))
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fsetpos,(FILE *__restrict __stream, fpos_t const *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fsetpos) || defined(__CRT_HAVE_fsetpos64) || defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fsetpos_unlocked) || defined(__CRT_HAVE_fsetpos64_unlocked) || defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseeko64_unlocked))))
__NAMESPACE_STD_END
#include <local/stdio/fsetpos.h>
__NAMESPACE_STD_BEGIN
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fsetpos, __FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fsetpos)(FILE *__restrict __stream, fpos_t const *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fsetpos))(__stream, __pos); })
#else /* CUSTOM: fsetpos */
#undef __std_fsetpos_defined
#endif /* fsetpos... */
#endif /* !__std_fsetpos_defined */
#ifndef __std_vfprintf_defined
#define __std_vfprintf_defined 1
#if __has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vfprintf)(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vfprintf(__stream, __format, __args); }
#elif defined(__CRT_HAVE_vfprintf_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfprintf_unlocked,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfprintf_s)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfprintf_s,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked)
__NAMESPACE_STD_END
#include <local/stdio/vfprintf.h>
__NAMESPACE_STD_BEGIN
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__NAMESPACE_LOCAL_USING_OR_IMPL(vfprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vfprintf)(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vfprintf))(__stream, __format, __args); })
#else /* CUSTOM: vfprintf */
#undef __std_vfprintf_defined
#endif /* vfprintf... */
#endif /* !__std_vfprintf_defined */
#ifndef __std_fprintf_defined
#define __std_fprintf_defined 1
#if __has_builtin(__builtin_fprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) { return __builtin_fprintf(__stream, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_fprintf_unlocked) && (defined(__USE_STDIO_UNLOCKED)) && !defined(__NO_ASMNAME)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fprintf_unlocked");
#elif defined(__CRT_HAVE_fprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fprintf");
#elif defined(__CRT_HAVE_fprintf_s) && !defined(__NO_ASMNAME)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fprintf_s");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
__NAMESPACE_STD_END
#include <local/stdio/fprintf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(fprintf)
#else /* __cplusplus */
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
#define fprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fprintf))
#endif /* !__cplusplus */
#else /* CUSTOM: fprintf */
#undef __std_fprintf_defined
#endif /* fprintf... */
#endif /* !__std_fprintf_defined */
#ifndef __std_vprintf_defined
#define __std_vprintf_defined 1
#if __has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vprintf)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vprintf(__format, __args); }
#elif defined(__CRT_HAVE_vprintf_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf,(char const *__restrict __format, __builtin_va_list __args),vprintf_unlocked,(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vprintf_s)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf,(char const *__restrict __format, __builtin_va_list __args),vprintf_s,(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s))
__NAMESPACE_STD_END
#include <local/stdio/vprintf.h>
__NAMESPACE_STD_BEGIN
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__NAMESPACE_LOCAL_USING_OR_IMPL(vprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vprintf)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vprintf))(__format, __args); })
#else /* CUSTOM: vprintf */
#undef __std_vprintf_defined
#endif /* vprintf... */
#endif /* !__std_vprintf_defined */
#ifndef __std_printf_defined
#define __std_printf_defined 1
#if __has_builtin(__builtin_printf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_printf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf)(char const *__restrict __format, ...) __THROWS(...) { return __builtin_printf(__format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_printf_unlocked) && (defined(__USE_STDIO_UNLOCKED)) && !defined(__NO_ASMNAME)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("printf_unlocked");
#elif defined(__CRT_HAVE_printf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("printf");
#elif defined(__CRT_HAVE_printf_s) && !defined(__NO_ASMNAME)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("printf_s");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
__NAMESPACE_STD_END
#include <local/stdio/printf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(printf)
#else /* __cplusplus */
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
#define printf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(printf))
#endif /* !__cplusplus */
#else /* CUSTOM: printf */
#undef __std_printf_defined
#endif /* printf... */
#endif /* !__std_printf_defined */

#if defined(__USE_ISOC99) || defined(__USE_DOS)
#ifndef __std_vfscanf_defined
#define __std_vfscanf_defined 1
#ifdef __vfscanf_defined
__NAMESPACE_GLB_USING(vfscanf)
#elif __has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfscanf)(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vfscanf(__stream, __format, __args); }
#elif defined(__CRT_HAVE_vfscanf_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfscanf_unlocked,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CDECLARE(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),_vfscanf,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfscanf_s)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf,(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),_vfscanf_s,(__stream,__format,__args)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
__NAMESPACE_STD_END
#include <local/stdio/vfscanf.h>
__NAMESPACE_STD_BEGIN
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__NAMESPACE_LOCAL_USING_OR_IMPL(vfscanf, __FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfscanf)(FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vfscanf))(__stream, __format, __args); })
#else /* CUSTOM: vfscanf */
#undef __std_vfscanf_defined
#endif /* vfscanf... */
#endif /* !__std_vfscanf_defined */
#ifndef __std_vscanf_defined
#define __std_vscanf_defined 1
#ifdef __vscanf_defined
__NAMESPACE_GLB_USING(vscanf)
#elif __has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vscanf)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vscanf(__format, __args); }
#elif defined(__CRT_HAVE_vscanf_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf,(char const *__restrict __format, __builtin_va_list __args),vscanf_unlocked,(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CDECLARE(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf,(char const *__restrict __format, __builtin_va_list __args),_vscanf,(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s))
__NAMESPACE_STD_END
#include <local/stdio/vscanf.h>
__NAMESPACE_STD_BEGIN
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__NAMESPACE_LOCAL_USING_OR_IMPL(vscanf, __FORCELOCAL __ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vscanf)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vscanf))(__format, __args); })
#else /* CUSTOM: vscanf */
#undef __std_vscanf_defined
#endif /* vscanf... */
#endif /* !__std_vscanf_defined */
#endif /* __USE_ISOC99 || __USE_DOS */

#ifndef __std_fscanf_defined
#define __std_fscanf_defined 1
#if __has_builtin(__builtin_fscanf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) { return __builtin_fscanf(__stream, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_fscanf_unlocked) && (defined(__USE_STDIO_UNLOCKED)) && !defined(__NO_ASMNAME)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fscanf_unlocked");
#elif defined(__CRT_HAVE_fscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf)(FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fscanf");
#elif ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s))
__NAMESPACE_STD_END
#include <local/stdio/fscanf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(fscanf)
#else /* __cplusplus */
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
#define fscanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fscanf))
#endif /* !__cplusplus */
#else /* CUSTOM: fscanf */
#undef __std_fscanf_defined
#endif /* fscanf... */
#endif /* !__std_fscanf_defined */
#ifndef __std_scanf_defined
#define __std_scanf_defined 1
#if __has_builtin(__builtin_scanf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_scanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf)(char const *__restrict __format, ...) __THROWS(...) { return __builtin_scanf(__format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_scanf_unlocked) && (defined(__USE_STDIO_UNLOCKED)) && !defined(__NO_ASMNAME)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("scanf_unlocked");
#elif defined(__CRT_HAVE_scanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("scanf");
#elif (!defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s)) || (__has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)) || (defined(__CRT_HAVE_vscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vscanf) || defined(__CRT_HAVE__vscanf))
__NAMESPACE_STD_END
#include <local/stdio/scanf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(scanf)
#else /* __cplusplus */
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
#define scanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(scanf))
#endif /* !__cplusplus */
#else /* CUSTOM: scanf */
#undef __std_scanf_defined
#endif /* scanf... */
#endif /* !__std_scanf_defined */

#if !defined(__USE_ISOC11) || (defined(__cplusplus) && __cplusplus <= 201103L)
#ifndef __std_gets_defined
#define __std_gets_defined 1
#ifdef __gets_defined
__NAMESPACE_GLB_USING(gets)
#elif defined(__CRT_HAVE_gets)
__CDECLARE(__ATTR_WUNUSED __ATTR_DEPRECATED("No buffer size checks (use `fgets' instead)") __ATTR_NONNULL((1)),char *,,gets,(char *__restrict __buf),(__buf)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && (defined(__CRT_HAVE_ferror) || defined(__CRT_HAVE_ferror_unlocked)) || defined(__CRT_HAVE_fgets) || defined(__CRT_HAVE_fgets_unlocked))
__NAMESPACE_STD_END
#include <local/stdio/gets.h>
__NAMESPACE_STD_BEGIN
__NAMESPACE_LOCAL_USING_OR_IMPL(gets, __FORCELOCAL __ATTR_WUNUSED __ATTR_DEPRECATED("No buffer size checks (use `fgets' instead)") __ATTR_NONNULL((1)) char *(__LIBCCALL gets)(char *__restrict __buf) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(gets))(__buf); })
#else /* CUSTOM: gets */
#undef __std_gets_defined
#endif /* gets... */
#endif /* !__std_gets_defined */
#endif /* !__USE_ISOC11 || __cplusplus <= 201103L */

#if defined(__USE_ISOC99) || defined(__USE_DOS)
#ifndef __std_vsscanf_defined
#define __std_vsscanf_defined 1
#ifdef __vsscanf_defined
__NAMESPACE_GLB_USING(vsscanf)
#elif __has_builtin(__builtin_vsscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vsscanf)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsscanf)(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args) { return __builtin_vsscanf(__input, __format, __args); }
#elif defined(__CRT_HAVE_vsscanf)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__CDECLARE(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsscanf,(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args),(__input,__format,__args))
#elif defined(__CRT_HAVE__vsscanf)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsscanf,(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args),_vsscanf,(__input,__format,__args))
#elif defined(__CRT_HAVE__vsscanf_s)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsscanf,(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args),_vsscanf_s,(__input,__format,__args))
#else /* LIBC: vsscanf */
__NAMESPACE_STD_END
#include <local/stdio/vsscanf.h>
__NAMESPACE_STD_BEGIN
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__NAMESPACE_LOCAL_USING_OR_IMPL(vsscanf, __FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsscanf)(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vsscanf))(__input, __format, __args); })
#endif /* vsscanf... */
#endif /* !__std_vsscanf_defined */
#endif /* __USE_ISOC99 || __USE_DOS */

#ifndef __std_sscanf_defined
#define __std_sscanf_defined 1
#if __has_builtin(__builtin_sscanf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_sscanf)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sscanf)(char const *__restrict __input, char const *__restrict __format, ...) { return __builtin_sscanf(__input, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_sscanf)
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sscanf)(char const *__restrict __input, char const *__restrict __format, ...) __CASMNAME_SAME("sscanf");
#else /* LIBC: sscanf */
__NAMESPACE_STD_END
#include <local/stdio/sscanf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(sscanf)
#else /* __cplusplus */
/* Scan data from a given `INPUT' string, following `FORMAT'
 * Return the number of successfully scanned data items */
#define sscanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(sscanf))
#endif /* !__cplusplus */
#endif /* sscanf... */
#endif /* !__std_sscanf_defined */
#if __has_builtin(__builtin_vsprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vsprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__LIBCCALL vsprintf)(char *__restrict __dest, char const *__restrict __format, __builtin_va_list __args) { return __builtin_vsprintf(__dest, __format, __args); }
#elif defined(__CRT_HAVE_vsprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,__NOTHROW_NCX,vsprintf,(char *__restrict __dest, char const *__restrict __format, __builtin_va_list __args),(__dest,__format,__args))
#else /* LIBC: vsprintf */
__NAMESPACE_STD_END
#include <local/stdio/vsprintf.h>
__NAMESPACE_STD_BEGIN
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
__NAMESPACE_LOCAL_USING_OR_IMPL(vsprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__LIBCCALL vsprintf)(char *__restrict __dest, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vsprintf))(__dest, __format, __args); })
#endif /* vsprintf... */
#ifndef __std_sprintf_defined
#define __std_sprintf_defined 1
#if __has_builtin(__builtin_sprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_sprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sprintf)(char *__restrict __buf, char const *__restrict __format, ...) { return __builtin_sprintf(__buf, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_sprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sprintf)(char *__restrict __buf, char const *__restrict __format, ...) __CASMNAME_SAME("sprintf");
#else /* LIBC: sprintf */
__NAMESPACE_STD_END
#include <local/stdio/sprintf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(sprintf)
#else /* __cplusplus */
/* Print a formatted string to a given in-member string buffer `BUF'
 * Return the number of written characters, excluding a trailing NUL-character */
#define sprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(sprintf))
#endif /* !__cplusplus */
#endif /* sprintf... */
#endif /* !__std_sprintf_defined */

#if defined(__USE_ISOC99) || defined(__USE_UNIX98) || defined(__USE_DOS)
#ifndef __std_vsnprintf_defined
#define __std_vsnprintf_defined 1
#ifdef __vsnprintf_defined
__NAMESPACE_GLB_USING(vsnprintf)
#elif __has_builtin(__builtin_vsnprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vsnprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsnprintf)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args) { return __builtin_vsnprintf(__buf, __buflen, __format, __args); }
#elif defined(__CRT_HAVE_vsnprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsnprintf,(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args),(__buf,__buflen,__format,__args))
#else /* LIBC: vsnprintf */
__NAMESPACE_STD_END
#include <local/stdio/vsnprintf.h>
__NAMESPACE_STD_BEGIN
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__NAMESPACE_LOCAL_USING_OR_IMPL(vsnprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsnprintf)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vsnprintf))(__buf, __buflen, __format, __args); })
#endif /* vsnprintf... */
#endif /* !__std_vsnprintf_defined */
#ifndef __std_snprintf_defined
#define __std_snprintf_defined 1
#ifdef __snprintf_defined
__NAMESPACE_GLB_USING(snprintf)
#elif __has_builtin(__builtin_snprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_snprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL snprintf)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, ...) { return __builtin_snprintf(__buf, __buflen, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_snprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__LIBC __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL snprintf)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, ...) __CASMNAME_SAME("snprintf");
#else /* LIBC: snprintf */
__NAMESPACE_STD_END
#include <local/stdio/snprintf.h>
__NAMESPACE_STD_BEGIN
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(snprintf)
#else /* __cplusplus */
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
#define snprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(snprintf))
#endif /* !__cplusplus */
#endif /* snprintf... */
#endif /* !__std_snprintf_defined */
#endif /* __USE_ISOC99 || __USE_UNIX98 || __USE_DOS */
__NAMESPACE_STD_END

#ifndef __CXX_SYSTEM_HEADER
#if !defined(__remove_defined) && defined(__std_remove_defined)
#define __remove_defined 1
__NAMESPACE_STD_USING(remove)
#endif /* !__remove_defined && !__std_remove_defined */
#if !defined(__rename_defined) && defined(__std_rename_defined)
#define __rename_defined 1
__NAMESPACE_STD_USING(rename)
#endif /* !__rename_defined && !__std_rename_defined */
#if !defined(__tmpnam_defined) && defined(__std_tmpnam_defined)
#define __tmpnam_defined 1
__NAMESPACE_STD_USING(tmpnam)
#endif /* !__tmpnam_defined && !__std_tmpnam_defined */
#if !defined(__fclose_defined) && defined(__std_fclose_defined)
#define __fclose_defined 1
__NAMESPACE_STD_USING(fclose)
#endif /* !__fclose_defined && !__std_fclose_defined */
__NAMESPACE_STD_USING(fflush)
#if !defined(__setbuf_defined) && defined(__std_setbuf_defined)
#define __setbuf_defined 1
__NAMESPACE_STD_USING(setbuf)
#endif /* !__setbuf_defined && !__std_setbuf_defined */
#if !defined(__setvbuf_defined) && defined(__std_setvbuf_defined)
#define __setvbuf_defined 1
__NAMESPACE_STD_USING(setvbuf)
#endif /* !__setvbuf_defined && !__std_setvbuf_defined */
#if !defined(__fgetc_defined) && defined(__std_fgetc_defined)
#define __fgetc_defined 1
__NAMESPACE_STD_USING(fgetc)
#endif /* !__fgetc_defined && !__std_fgetc_defined */
#if !defined(__getc_defined) && defined(__std_getc_defined)
#define __getc_defined 1
__NAMESPACE_STD_USING(getc)
#endif /* !__getc_defined && !__std_getc_defined */
#if !defined(__getchar_defined) && defined(__std_getchar_defined)
#define __getchar_defined 1
__NAMESPACE_STD_USING(getchar)
#endif /* !__getchar_defined && !__std_getchar_defined */
#if !defined(__fputc_defined) && defined(__std_fputc_defined)
#define __fputc_defined 1
__NAMESPACE_STD_USING(fputc)
#endif /* !__fputc_defined && !__std_fputc_defined */
#if !defined(__putc_defined) && defined(__std_putc_defined)
#define __putc_defined 1
__NAMESPACE_STD_USING(putc)
#endif /* !__putc_defined && !__std_putc_defined */
#if !defined(__putchar_defined) && defined(__std_putchar_defined)
#define __putchar_defined 1
__NAMESPACE_STD_USING(putchar)
#endif /* !__putchar_defined && !__std_putchar_defined */
#if !defined(__fgets_defined) && defined(__std_fgets_defined)
#define __fgets_defined 1
__NAMESPACE_STD_USING(fgets)
#endif /* !__fgets_defined && !__std_fgets_defined */
#if !defined(__fputs_defined) && defined(__std_fputs_defined)
#define __fputs_defined 1
__NAMESPACE_STD_USING(fputs)
#endif /* !__fputs_defined && !__std_fputs_defined */
#if !defined(__puts_defined) && defined(__std_puts_defined)
#define __puts_defined 1
__NAMESPACE_STD_USING(puts)
#endif /* !__puts_defined && !__std_puts_defined */
#if !defined(__ungetc_defined) && defined(__std_ungetc_defined)
#define __ungetc_defined 1
__NAMESPACE_STD_USING(ungetc)
#endif /* !__ungetc_defined && !__std_ungetc_defined */
#if !defined(__fread_defined) && defined(__std_fread_defined)
#define __fread_defined 1
__NAMESPACE_STD_USING(fread)
#endif /* !__fread_defined && !__std_fread_defined */
#if !defined(__fwrite_defined) && defined(__std_fwrite_defined)
#define __fwrite_defined 1
__NAMESPACE_STD_USING(fwrite)
#endif /* !__fwrite_defined && !__std_fwrite_defined */
#if !defined(__fseek_defined) && defined(__std_fseek_defined)
#define __fseek_defined 1
__NAMESPACE_STD_USING(fseek)
#endif /* !__fseek_defined && !__std_fseek_defined */
#if !defined(__ftell_defined) && defined(__std_ftell_defined)
#define __ftell_defined 1
__NAMESPACE_STD_USING(ftell)
#endif /* !__ftell_defined && !__std_ftell_defined */
#if !defined(__rewind_defined) && defined(__std_rewind_defined)
#define __rewind_defined 1
__NAMESPACE_STD_USING(rewind)
#endif /* !__rewind_defined && !__std_rewind_defined */
#if !defined(__clearerr_defined) && defined(__std_clearerr_defined)
#define __clearerr_defined 1
__NAMESPACE_STD_USING(clearerr)
#endif /* !__clearerr_defined && !__std_clearerr_defined */
#if !defined(__feof_defined) && defined(__std_feof_defined)
#define __feof_defined 1
__NAMESPACE_STD_USING(feof)
#endif /* !__feof_defined && !__std_feof_defined */
#if !defined(__ferror_defined) && defined(__std_ferror_defined)
#define __ferror_defined 1
__NAMESPACE_STD_USING(ferror)
#endif /* !__ferror_defined && !__std_ferror_defined */
#if !defined(__perror_defined) && defined(__std_perror_defined)
#define __perror_defined 1
__NAMESPACE_STD_USING(perror)
#endif /* !__perror_defined && !__std_perror_defined */
#if !defined(__tmpfile_defined) && defined(__std_tmpfile_defined)
#define __tmpfile_defined 1
__NAMESPACE_STD_USING(tmpfile)
#endif /* !__tmpfile_defined && !__std_tmpfile_defined */
#if !defined(__fopen_defined) && defined(__std_fopen_defined)
#define __fopen_defined 1
__NAMESPACE_STD_USING(fopen)
#endif /* !__fopen_defined && !__std_fopen_defined */
#if !defined(__freopen_defined) && defined(__std_freopen_defined)
#define __freopen_defined 1
__NAMESPACE_STD_USING(freopen)
#endif /* !__freopen_defined && !__std_freopen_defined */
#if !defined(__fgetpos_defined) && defined(__std_fgetpos_defined)
#define __fgetpos_defined 1
__NAMESPACE_STD_USING(fgetpos)
#endif /* !__fgetpos_defined && !__std_fgetpos_defined */
#if !defined(__fsetpos_defined) && defined(__std_fsetpos_defined)
#define __fsetpos_defined 1
__NAMESPACE_STD_USING(fsetpos)
#endif /* !__fsetpos_defined && !__std_fsetpos_defined */
#if !defined(__vfprintf_defined) && defined(__std_vfprintf_defined)
#define __vfprintf_defined 1
__NAMESPACE_STD_USING(vfprintf)
#endif /* !__vfprintf_defined && !__std_vfprintf_defined */
#if !defined(__fprintf_defined) && defined(__std_fprintf_defined)
#define __fprintf_defined 1
__NAMESPACE_STD_USING(fprintf)
#endif /* !__fprintf_defined && !__std_fprintf_defined */
#if !defined(__vprintf_defined) && defined(__std_vprintf_defined)
#define __vprintf_defined 1
__NAMESPACE_STD_USING(vprintf)
#endif /* !__vprintf_defined && !__std_vprintf_defined */
#if !defined(__printf_defined) && defined(__std_printf_defined)
#define __printf_defined 1
__NAMESPACE_STD_USING(printf)
#endif /* !__printf_defined && !__std_printf_defined */
#if !defined(__vfscanf_defined) && defined(__std_vfscanf_defined)
#define __vfscanf_defined 1
__NAMESPACE_STD_USING(vfscanf)
#endif /* !__vfscanf_defined && !__std_vfscanf_defined */
#if !defined(__vscanf_defined) && defined(__std_vscanf_defined)
#define __vscanf_defined 1
__NAMESPACE_STD_USING(vscanf)
#endif /* !__vscanf_defined && !__std_vscanf_defined */
#if !defined(__fscanf_defined) && defined(__std_fscanf_defined)
#define __fscanf_defined 1
__NAMESPACE_STD_USING(fscanf)
#endif /* !__fscanf_defined && !__std_fscanf_defined */
#if !defined(__scanf_defined) && defined(__std_scanf_defined)
#define __scanf_defined 1
__NAMESPACE_STD_USING(scanf)
#endif /* !__scanf_defined && !__std_scanf_defined */
#if !defined(__gets_defined) && defined(__std_gets_defined)
#define __gets_defined 1
__NAMESPACE_STD_USING(gets)
#endif /* !__gets_defined && !__std_gets_defined */
#if !defined(__vsscanf_defined) && defined(__std_vsscanf_defined)
#define __vsscanf_defined 1
__NAMESPACE_STD_USING(vsscanf)
#endif /* !__vsscanf_defined && !__std_vsscanf_defined */
#if !defined(__sscanf_defined) && defined(__std_sscanf_defined)
#define __sscanf_defined 1
__NAMESPACE_STD_USING(sscanf)
#endif /* !__sscanf_defined && !__std_sscanf_defined */
__NAMESPACE_STD_USING(vsprintf)
#if !defined(__sprintf_defined) && defined(__std_sprintf_defined)
#define __sprintf_defined 1
__NAMESPACE_STD_USING(sprintf)
#endif /* !__sprintf_defined && !__std_sprintf_defined */
#if !defined(__vsnprintf_defined) && defined(__std_vsnprintf_defined)
#define __vsnprintf_defined 1
__NAMESPACE_STD_USING(vsnprintf)
#endif /* !__vsnprintf_defined && !__std_vsnprintf_defined */
#if !defined(__snprintf_defined) && defined(__std_snprintf_defined)
#define __snprintf_defined 1
__NAMESPACE_STD_USING(snprintf)
#endif /* !__snprintf_defined && !__std_snprintf_defined */
#endif /* !__CXX_SYSTEM_HEADER */

#ifdef __USE_XOPEN2K8
#if defined(__CRT_HAVE_vdprintf)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((2)),__STDC_INT_AS_SSIZE_T,__NOTHROW_RPC,vdprintf,(__fd_t __fd, char const *__restrict __format, __builtin_va_list __args),(__fd,__format,__args))
#elif defined(__CRT_HAVE_write) || defined(__CRT_HAVE__write) || defined(__CRT_HAVE___write)
#include <local/stdio/vdprintf.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(vdprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((2)) __STDC_INT_AS_SSIZE_T __NOTHROW_RPC(__LIBCCALL vdprintf)(__fd_t __fd, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vdprintf))(__fd, __format, __args); })
#endif /* vdprintf... */
#if defined(__CRT_HAVE_dprintf)
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((2)) __STDC_INT_AS_SSIZE_T __NOTHROW_RPC(__VLIBCCALL dprintf)(__fd_t __fd, char const *__restrict __format, ...) __CASMNAME_SAME("dprintf");
#elif defined(__CRT_HAVE_write) || defined(__CRT_HAVE__write) || defined(__CRT_HAVE___write) || defined(__CRT_HAVE_vdprintf)
#include <local/stdio/dprintf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(dprintf)
#else /* __cplusplus */
#define dprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(dprintf))
#endif /* !__cplusplus */
#endif /* dprintf... */
#endif /* __USE_XOPEN2K8 */

#ifdef __USE_ATFILE
#if defined(__CRT_HAVE_renameat)
__CDECLARE(__ATTR_NONNULL((2, 4)),int,__NOTHROW_RPC,renameat,(__fd_t __oldfd, char const *__oldname, __fd_t __newfd, char const *__newname_or_path),(__oldfd,__oldname,__newfd,__newname_or_path))
#elif defined(__CRT_HAVE_frenameat)
#include <local/stdio/renameat.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(renameat, __FORCELOCAL __ATTR_NONNULL((2, 4)) int __NOTHROW_RPC(__LIBCCALL renameat)(__fd_t __oldfd, char const *__oldname, __fd_t __newfd, char const *__newname_or_path) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(renameat))(__oldfd, __oldname, __newfd, __newname_or_path); })
#endif /* renameat... */

#ifdef __USE_KOS
#if defined(__CRT_HAVE_removeat)
/* Remove a file or directory `FILENAME' relative to a given base directory `DIRFD' */
__CDECLARE(__ATTR_NONNULL((2)),int,__NOTHROW_RPC,removeat,(__fd_t __dirfd, char const *__filename),(__dirfd,__filename))
#endif /* removeat... */
#if defined(__CRT_HAVE_frenameat)
/* @param flags: Set of `0|AT_DOSPATH' */
__CDECLARE(__ATTR_NONNULL((2, 4)),int,__NOTHROW_RPC,frenameat,(__fd_t __oldfd, char const *__oldname, __fd_t __newfd, char const *__newname_or_path, __atflag_t __flags),(__oldfd,__oldname,__newfd,__newname_or_path,__flags))
#endif /* frenameat... */
#endif /* __USE_KOS */
#endif /* __USE_ATFILE */

#ifdef __USE_MISC
#if defined(__CRT_HAVE_tmpnam_r)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),char *,__NOTHROW_NCX,tmpnam_r,(char *__buf),(__buf))
#elif defined(__CRT_HAVE_tmpnam)
#include <local/stdio/tmpnam_r.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(tmpnam_r, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) char *__NOTHROW_NCX(__LIBCCALL tmpnam_r)(char *__buf) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(tmpnam_r))(__buf); })
#endif /* tmpnam_r... */
#if defined(__CRT_HAVE_setbuffer)
/* Specify the location and size for the buffer to-be used by `STREAM' */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,setbuffer,(__FILE *__restrict __stream, char *__buf, size_t __bufsize),(__stream,__buf,__bufsize))
#elif defined(__CRT_HAVE_setvbuf)
#include <local/stdio/setbuffer.h>
/* Specify the location and size for the buffer to-be used by `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(setbuffer, __FORCELOCAL __ATTR_NONNULL((1)) void __NOTHROW_NCX(__LIBCCALL setbuffer)(__FILE *__restrict __stream, char *__buf, size_t __bufsize) { (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(setbuffer))(__stream, __buf, __bufsize); })
#endif /* setbuffer... */
#if defined(__CRT_HAVE_setlinebuf)
/* Change the given `STREAM' to become line-buffered */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,setlinebuf,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_setvbuf)
#include <local/stdio/setlinebuf.h>
/* Change the given `STREAM' to become line-buffered */
__NAMESPACE_LOCAL_USING_OR_IMPL(setlinebuf, __FORCELOCAL __ATTR_NONNULL((1)) void __NOTHROW_NCX(__LIBCCALL setlinebuf)(__FILE *__restrict __stream) { (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(setlinebuf))(__stream); })
#endif /* setlinebuf... */
#if defined(__CRT_HAVE_fflush_unlocked)
/* Same as `fflush()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(,int,,fflush_unlocked,(__FILE *__stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fflush)
/* Same as `fflush()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(,int,,fflush_unlocked,(__FILE *__stream),fflush,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fflush_nolock)
/* Same as `fflush()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(,int,,fflush_unlocked,(__FILE *__stream),_fflush_nolock,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fflush)
/* Same as `fflush()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(,int,,fflush_unlocked,(__FILE *__stream),fflush,(__stream)) __THROWS(...)
#else /* LIBC: fflush */
#include <local/stdio/fflush.h>
/* Same as `fflush()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL int (__LIBCCALL fflush_unlocked)(__FILE *__stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fflush))(__stream); }
#endif /* fflush_unlocked... */
#if defined(__CRT_HAVE_fread_unlocked)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread_unlocked,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fread_nolock)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread_unlocked,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),_fread_nolock,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,fread_unlocked,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fread,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s)
#include <local/stdio/fread_unlocked.h>
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fread_unlocked, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fread_unlocked)(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fread_unlocked))(__buf, __elemsize, __elemcount, __stream); })
#endif /* fread_unlocked... */
#if __has_builtin(__builtin_fwrite_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fwrite_unlocked)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fwrite_unlocked)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fwrite_unlocked(__buf, __elemsize, __elemcount, __stream); }
#elif defined(__CRT_HAVE_fwrite_unlocked)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_NONNULL((1, 4)),size_t,,fwrite_unlocked,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fwrite_nolock)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite_unlocked,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),_fwrite_nolock,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite_unlocked,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fwrite,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_s)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1, 4)),size_t,,fwrite_unlocked,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fwrite_s,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s)
#include <local/stdio/fwrite_unlocked.h>
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fwrite_unlocked, __FORCELOCAL __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL fwrite_unlocked)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fwrite_unlocked))(__buf, __elemsize, __elemcount, __stream); })
#endif /* fwrite_unlocked... */
#if defined(__CRT_HAVE_feof_unlocked)
/* Same as `feof()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof_unlocked,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_feof)
/* Same as `feof()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,feof_unlocked,(__FILE *__restrict __stream),feof,(__stream))
#endif /* feof_unlocked... */
#if defined(__CRT_HAVE_ferror_unlocked)
/* Same as `ferror()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ferror_unlocked,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_ferror)
/* Same as `ferror()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ferror_unlocked,(__FILE *__restrict __stream),ferror,(__stream))
#endif /* ferror_unlocked... */
#if defined(__CRT_HAVE_clearerr_unlocked)
/* Same as `clearerr()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,clearerr_unlocked,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_clearerr)
/* Same as `clearerr()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,clearerr_unlocked,(__FILE *__restrict __stream),clearerr,(__stream))
#endif /* clearerr_unlocked... */
#if defined(__CRT_HAVE_fileno_unlocked)
/* Same as `fileno()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno_unlocked,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE__fileno)
/* Same as `fileno()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno_unlocked,(__FILE *__restrict __stream),_fileno,(__stream))
#elif defined(__CRT_HAVE_fileno)
/* Same as `fileno()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno_unlocked,(__FILE *__restrict __stream),fileno,(__stream))
#endif /* fileno_unlocked... */
#if defined(__CRT_HAVE_fgetc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fgetc_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc_unlocked,(__FILE *__restrict __stream),getc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc_unlocked,(__FILE *__restrict __stream),getc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__filbuf))
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fgetc_unlocked,(__FILE *__restrict __stream),fgetc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/fgetc_unlocked.h>
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgetc_unlocked, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fgetc_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc_unlocked))(__stream); })
#endif /* fgetc_unlocked... */
#if __has_builtin(__builtin_fputc_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL fputc_unlocked)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc_unlocked(__ch, __stream); }
#elif defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_NONNULL((2)),int,,fputc_unlocked,(int __ch, __FILE *__restrict __stream),(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc_unlocked,(int __ch, __FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__flsbuf))
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc_unlocked,(int __ch, __FILE *__restrict __stream),putc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc) && (!defined(__CRT_DOS) || !defined(__CRT_HAVE__flsbuf))
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,fputc_unlocked,(int __ch, __FILE *__restrict __stream),fputc,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/fputc_unlocked.h>
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fputc_unlocked, __FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL fputc_unlocked)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc_unlocked))(__ch, __stream); })
#endif /* fputc_unlocked... */
#endif /* __USE_MISC */

#if defined(__USE_MISC) || defined(__USE_XOPEN) || defined(__USE_DOS)
#if defined(__CRT_HAVE_tempnam)
__CDECLARE(__ATTR_MALLOC __ATTR_WUNUSED,char *,__NOTHROW_NCX,tempnam,(char const *__dir, char const *__pfx),(__dir,__pfx))
#elif defined(__CRT_HAVE__tempnam)
__CREDIRECT(__ATTR_MALLOC __ATTR_WUNUSED,char *,__NOTHROW_NCX,tempnam,(char const *__dir, char const *__pfx),_tempnam,(__dir,__pfx))
#endif /* tempnam... */
#endif /* __USE_MISC || __USE_XOPEN || __USE_DOS */

#if defined(__USE_POSIX) || defined(__USE_DOS)
#if defined(__CRT_HAVE_fdopen)
/* Open a new file stream by inheriting a given file descriptor `FD'
 * Note that upon success (`return != NULL'), the given `FD' will be `close()'d once `fclose(return)' is called */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((2)),__FILE *,__NOTHROW_NCX,fdopen,(__fd_t __fd, char const *__restrict __modes),(__fd,__modes))
#elif defined(__CRT_HAVE__fdopen)
/* Open a new file stream by inheriting a given file descriptor `FD'
 * Note that upon success (`return != NULL'), the given `FD' will be `close()'d once `fclose(return)' is called */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((2)),__FILE *,__NOTHROW_NCX,fdopen,(__fd_t __fd, char const *__restrict __modes),_fdopen,(__fd,__modes))
#endif /* fdopen... */
#if defined(__CRT_HAVE_fileno_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno,(__FILE *__restrict __stream),fileno_unlocked,(__stream))
#elif defined(__CRT_HAVE_fileno)
/* Return the underlying file descriptor number used by `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE__fileno)
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno,(__FILE *__restrict __stream),_fileno,(__stream))
#elif defined(__CRT_HAVE_fileno_unlocked)
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,fileno,(__FILE *__restrict __stream),fileno_unlocked,(__stream))
#endif /* fileno... */
#endif /* __USE_POSIX || __USE_DOS */

#ifdef __USE_XOPEN2K8
#if defined(__CRT_HAVE_fmemopen)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),__FILE *,__NOTHROW_NCX,fmemopen,(void *__mem, size_t __len, char const *__modes),(__mem,__len,__modes))
#endif /* fmemopen... */
#if defined(__CRT_HAVE_open_memstream)
__CDECLARE(__ATTR_WUNUSED,__FILE *,__NOTHROW_NCX,open_memstream,(char **__bufloc, size_t *__sizeloc),(__bufloc,__sizeloc))
#endif /* open_memstream... */
#if defined(__CRT_HAVE_getdelim)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,__getdelim,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),getdelim,(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc)) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getdelim.h>
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)) __SSIZE_TYPE__ (__LIBCCALL __getdelim)(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getdelim))(__lineptr, __pcount, __delimiter, __stream); }
#endif /* __getdelim... */
#if defined(__CRT_HAVE_getdelim_unlocked) && (defined(__USE_STDIO_UNLOCKED))
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,getdelim,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),getdelim_unlocked,(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getdelim)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,getdelim,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getdelim_unlocked)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,getdelim,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),getdelim_unlocked,(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc)) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getdelim.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(getdelim, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)) __SSIZE_TYPE__ (__LIBCCALL getdelim)(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getdelim))(__lineptr, __pcount, __delimiter, __stream); })
#endif /* getdelim... */
#if defined(__CRT_HAVE_getline_unlocked) && (defined(__USE_STDIO_UNLOCKED))
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)),__SSIZE_TYPE__,,getline,(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream),getline_unlocked,(__lineptr,__pcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getline)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)),__SSIZE_TYPE__,,getline,(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream),(__lineptr,__pcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getline_unlocked)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)),__SSIZE_TYPE__,,getline,(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream),getline_unlocked,(__lineptr,__pcount,__stream)) __THROWS(...)
#elif (((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc)) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || defined(__CRT_HAVE_getdelim) || defined(__CRT_HAVE_getdelim_unlocked))
#include <local/stdio/getline.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(getline, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)) __SSIZE_TYPE__ (__LIBCCALL getline)(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getline))(__lineptr, __pcount, __stream); })
#endif /* getline... */
#endif /* __USE_XOPEN2K8 */

#ifdef __USE_POSIX
#if defined(__CRT_HAVE_getc_unlocked)
/* Alias for `fgetc_unlocked()' */
__CDECLARE(__ATTR_NONNULL((1)),int,,getc_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc_unlocked)
/* Alias for `fgetc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc_unlocked,(__FILE *__restrict __stream),fgetc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Alias for `fgetc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc_unlocked,(__FILE *__restrict __stream),getc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Alias for `fgetc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getc_unlocked,(__FILE *__restrict __stream),fgetc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/fgetc_unlocked.h>
/* Alias for `fgetc_unlocked()' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL getc_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc_unlocked))(__stream); }
#endif /* getc_unlocked... */
#if __has_builtin(__builtin_fputc_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc_unlocked)
/* Alias for `fputc_unlocked()' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putc_unlocked)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc_unlocked(__ch, __stream); }
#elif defined(__CRT_HAVE_putc_unlocked)
/* Alias for `fputc_unlocked()' */
__CDECLARE(__ATTR_NONNULL((2)),int,,putc_unlocked,(int __ch, __FILE *__restrict __stream),(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc_unlocked)
/* Alias for `fputc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc_unlocked,(int __ch, __FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Alias for `fputc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc_unlocked,(int __ch, __FILE *__restrict __stream),getc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Alias for `fputc_unlocked()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putc_unlocked,(int __ch, __FILE *__restrict __stream),fgetc,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/fputc_unlocked.h>
/* Alias for `fputc_unlocked()' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putc_unlocked)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc_unlocked))(__ch, __stream); }
#endif /* putc_unlocked... */
#if defined(__CRT_HAVE_getchar_unlocked)
/* Same as `getchar()', but performs I/O without acquiring a lock to `stdin' */
__CDECLARE(,int,,getchar_unlocked,(void),()) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/getchar_unlocked.h>
/* Same as `getchar()', but performs I/O without acquiring a lock to `stdin' */
__NAMESPACE_LOCAL_USING_OR_IMPL(getchar_unlocked, __FORCELOCAL int (__LIBCCALL getchar_unlocked)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getchar_unlocked))(); })
#endif /* getchar_unlocked... */
#if __has_builtin(__builtin_putchar_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_putchar_unlocked)
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__FORCELOCAL int (__LIBCCALL putchar_unlocked)(int __ch) __THROWS(...) { return __builtin_putchar_unlocked(__ch); }
#elif defined(__CRT_HAVE_putchar_unlocked)
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__CDECLARE(,int,,putchar_unlocked,(int __ch),(__ch)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/putchar_unlocked.h>
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__NAMESPACE_LOCAL_USING_OR_IMPL(putchar_unlocked, __FORCELOCAL int (__LIBCCALL putchar_unlocked)(int __ch) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putchar_unlocked))(__ch); })
#endif /* putchar_unlocked... */
#if defined(__CRT_HAVE_flockfile)
/* Acquire a lock to `STREAM' and block until doing so succeeds */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_RPC,flockfile,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE__lock_file)
/* Acquire a lock to `STREAM' and block until doing so succeeds */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_RPC,flockfile,(__FILE *__restrict __stream),_lock_file,(__stream))
#endif /* flockfile... */
#if defined(__CRT_HAVE_funlockfile)
/* Release a previously acquired lock from `STREAM' */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,funlockfile,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE__unlock_file)
/* Release a previously acquired lock from `STREAM' */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,funlockfile,(__FILE *__restrict __stream),_unlock_file,(__stream))
#endif /* funlockfile... */
#if defined(__CRT_HAVE_ftrylockfile)
/* Try to acquire a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,ftrylockfile,(__FILE *__restrict __stream),(__stream))
#endif /* ftrylockfile... */
#ifndef __ctermid_defined
#define __ctermid_defined 1
#if defined(__CRT_HAVE_ctermid)
__CDECLARE(,char *,__NOTHROW_NCX,ctermid,(char *__s),(__s))
#else /* LIBC: ctermid */
#undef __ctermid_defined
#endif /* ctermid... */
#endif /* !__ctermid_defined */
#endif /* __USE_POSIX */

#ifdef __USE_XOPEN
#if defined(__CRT_HAVE_cuserid)
/* Return the name of the current user (`getpwuid(geteuid())'), storing
 * that name in `S'. When `S' is NULL, a static buffer is used instead */
__CDECLARE(,char *,__NOTHROW_NCX,cuserid,(char *__s),(__s))
#endif /* cuserid... */
#endif /* Use X/Open, but not issue 6.  */

#ifdef __USE_POSIX2
#if defined(__CRT_HAVE_popen)
/* Open and return a new process I/O stream for executing `COMMAND' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,popen,(char const *__command, char const *__modes),(__command,__modes))
#elif defined(__CRT_HAVE__popen)
/* Open and return a new process I/O stream for executing `COMMAND' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,popen,(char const *__command, char const *__modes),_popen,(__command,__modes))
#endif /* popen... */
#if defined(__CRT_HAVE_pclose)
/* Close a process I/O file `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,pclose,(__FILE *__stream),(__stream))
#elif defined(__CRT_HAVE__pclose)
/* Close a process I/O file `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,pclose,(__FILE *__stream),_pclose,(__stream))
#endif /* pclose... */
#endif /* __USE_POSIX2 */

#if defined(__USE_MISC) || defined(__USE_DOS) || (defined(__USE_XOPEN) && !defined(__USE_XOPEN2K))
#if defined(__CRT_HAVE_getw)
/* Similar to `getc()', but read 2 bytes */
__CDECLARE(__ATTR_NONNULL((1)),int,,getw,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__getw)
/* Similar to `getc()', but read 2 bytes */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getw,(__FILE *__restrict __stream),_getw,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getw.h>
/* Similar to `getc()', but read 2 bytes */
__NAMESPACE_LOCAL_USING_OR_IMPL(getw, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL getw)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getw))(__stream); })
#endif /* getw... */
#if defined(__CRT_HAVE_putw)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CDECLARE(__ATTR_NONNULL((2)),int,,putw,(int __w, __FILE *__restrict __stream),(__w,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__putw)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putw,(int __w, __FILE *__restrict __stream),_putw,(__w,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
#include <local/stdio/putw.h>
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__NAMESPACE_LOCAL_USING_OR_IMPL(putw, __FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putw)(int __w, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putw))(__w, __stream); })
#endif /* putw... */
#endif /* __USE_MISC || __USE_DOS || (__USE_XOPEN && !__USE_XOPEN2K) */

#if defined(__USE_GNU) || defined(__USE_DOS)
#if defined(__CRT_HAVE_fcloseall)
/* Alias for `_fcloseall()' */
__CDECLARE(,int,,fcloseall,(void),()) __THROWS(...)
#elif defined(__CRT_HAVE__fcloseall)
/* Alias for `_fcloseall()' */
__CREDIRECT(,int,,fcloseall,(void),_fcloseall,()) __THROWS(...)
#endif /* fcloseall... */
#endif /* __USE_GNU || __USE_DOS */

#ifdef __USE_GNU
#if defined(__CRT_HAVE_fopencookie)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((2)),__FILE *,__NOTHROW_NCX,fopencookie,(void *__restrict __magic_cookie, char const *__restrict __modes, _IO_cookie_io_functions_t __io_funcs),(__magic_cookie,__modes,__io_funcs))
#endif /* fopencookie... */
#if defined(__CRT_HAVE_fgets_unlocked)
/* Same as `fgets()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),char *,,fgets_unlocked,(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, __FILE *__restrict __stream),(__buf,__bufsize,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgets)
/* Same as `fgets()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 3)),char *,,fgets_unlocked,(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, __FILE *__restrict __stream),fgets,(__buf,__bufsize,__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s)) && (defined(__CRT_HAVE_ferror_unlocked) || defined(__CRT_HAVE_ferror))
#include <local/stdio/fgets_unlocked.h>
/* Same as `fgets()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgets_unlocked, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 3)) char *(__LIBCCALL fgets_unlocked)(char *__restrict __buf, __STDC_INT_AS_SIZE_T __bufsize, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgets_unlocked))(__buf, __bufsize, __stream); })
#endif /* fgets_unlocked... */
#if __has_builtin(__builtin_fputs_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputs_unlocked)
/* Same as `fputs()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__FORCELOCAL __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL fputs_unlocked)(char const *__restrict __str, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fputs_unlocked(__str, __stream); }
#elif defined(__CRT_HAVE_fputs_unlocked)
/* Same as `fputs()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CDECLARE(__ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,fputs_unlocked,(char const *__restrict __str, __FILE *__restrict __stream),(__str,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputs)
/* Same as `fputs()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,fputs_unlocked,(char const *__restrict __str, __FILE *__restrict __stream),fputs,(__str,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc)
#include <local/stdio/fputs_unlocked.h>
/* Same as `fputs()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fputs_unlocked, __FORCELOCAL __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL fputs_unlocked)(char const *__restrict __str, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputs_unlocked))(__str, __stream); })
#endif /* fputs_unlocked... */

struct obstack;
#if defined(__CRT_HAVE_obstack_vprintf)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),int,__NOTHROW_NCX,obstack_vprintf,(struct obstack *__restrict __obstack_, char const *__restrict __format, __builtin_va_list __args),(__obstack_,__format,__args))
#endif /* obstack_vprintf... */
#if defined(__CRT_HAVE_obstack_printf)
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) int __NOTHROW_NCX(__VLIBCCALL obstack_printf)(struct obstack *__restrict __obstack_, char const *__restrict __format, ...) __CASMNAME_SAME("obstack_printf");
#elif defined(__CRT_HAVE_obstack_vprintf)
#include <local/stdio/obstack_printf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(obstack_printf)
#else /* __cplusplus */
#define obstack_printf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(obstack_printf))
#endif /* !__cplusplus */
#endif /* obstack_printf... */
#endif /* __USE_GNU */
#if defined(__USE_LARGEFILE) || defined(__USE_XOPEN2K)
#if defined(__CRT_HAVE_fseeko64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseeko64_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko_unlocked) && (defined(__USE_STDIO_UNLOCKED) && !defined(__USE_FILE_OFFSET64))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseeko_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseek_unlocked) && (defined(__USE_STDIO_UNLOCKED) && (defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 8) || (!defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 4))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseek_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64) && (defined(__USE_FILE_OFFSET64))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseeko64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE__fseeki64) && (defined(__USE_FILE_OFFSET64))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),_fseeki64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko) && (!defined(__USE_FILE_OFFSET64))
/* Change the current in-file position of `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseek) && ((defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 8) || (!defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 4))
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseek,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE__fseeki64) || defined(__CRT_HAVE_fseek) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseeko64_unlocked) || defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseek_unlocked))))
#include <local/stdio/fseeko.h>
/* Change the current in-file position of `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fseeko, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseeko)(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko))(__stream, __off, __whence); })
#endif /* fseeko... */
#if defined(__CRT_HAVE_ftello64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),ftello64_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello_unlocked) && (defined(__USE_STDIO_UNLOCKED) && !defined(__USE_FILE_OFFSET64))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),ftello_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell_unlocked) && (defined(__USE_STDIO_UNLOCKED) && (defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 8) || (!defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 4))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),ftell_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64) && (defined(__USE_FILE_OFFSET64))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),ftello64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__ftelli64) && (defined(__USE_FILE_OFFSET64))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),_ftelli64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello) && (!defined(__USE_FILE_OFFSET64))
/* Return the current in-file position of `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell) && ((defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 8) || (!defined(__USE_FILE_OFFSET64) && __SIZEOF_LONG__ == 4))
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__FS_TYPE(off),,ftello,(__FILE *__restrict __stream),ftell,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE__ftelli64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked))))
#include <local/stdio/ftello.h>
/* Return the current in-file position of `STREAM' */
__NAMESPACE_LOCAL_USING_OR_IMPL(ftello, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) __FS_TYPE(off) (__LIBCCALL ftello)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello))(__stream); })
#endif /* ftello... */
#endif /* __USE_LARGEFILE || __USE_XOPEN2K */

#ifdef __USE_LARGEFILE64
#if defined(__CRT_HAVE_tmpfile64)
/* 64-bit variant of `tmpfile' */
__CDECLARE(__ATTR_WUNUSED,__FILE *,__NOTHROW_RPC,tmpfile64,(void),())
#elif defined(__CRT_HAVE_tmpfile)
/* 64-bit variant of `tmpfile' */
__CREDIRECT(__ATTR_WUNUSED,__FILE *,__NOTHROW_RPC,tmpfile64,(void),tmpfile,())
#elif defined(__CRT_HAVE_tmpfile) && (!defined(__O_LARGEFILE) || (__O_LARGEFILE+0) == 0)
/* 64-bit variant of `tmpfile' */
__CREDIRECT(__ATTR_WUNUSED,__FILE *,__NOTHROW_RPC,tmpfile64,(void),tmpfile,())
#endif /* tmpfile64... */
#if defined(__CRT_HAVE_fseeko64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko64,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko64_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64)
/* 64-bit variant of `fseeko' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseeko64,(__FILE *__restrict __stream, __off64_t __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE__fseeki64)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko64,(__FILE *__restrict __stream, __off64_t __off, int __whence),_fseeki64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko64,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked))))
#include <local/stdio/fseeko64.h>
/* 64-bit variant of `fseeko' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fseeko64, __FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseeko64)(__FILE *__restrict __stream, __off64_t __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko64))(__stream, __off, __whence); })
#endif /* fseeko64... */
#if defined(__CRT_HAVE_ftello64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),ftello64_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell_unlocked) && (defined(__USE_STDIO_UNLOCKED) && __SIZEOF_LONG__ == 8)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),ftell_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64)
/* 64-bit variant of `ftello' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__ftelli64)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),_ftelli64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell) && (__SIZEOF_LONG__ == 8)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),ftell,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64,(__FILE *__restrict __stream),ftello,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked))))
#include <local/stdio/ftello64.h>
/* 64-bit variant of `ftello' */
__NAMESPACE_LOCAL_USING_OR_IMPL(ftello64, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) __off64_t (__LIBCCALL ftello64)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello64))(__stream); })
#endif /* ftello64... */
#if defined(__CRT_HAVE_fopen64)
/* 64-bit variant of `fopen' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,fopen64,(char const *__restrict __filename, char const *__restrict __modes),(__filename,__modes))
#elif defined(__CRT_HAVE_fopen)
/* 64-bit variant of `fopen' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,fopen64,(char const *__restrict __filename, char const *__restrict __modes),fopen,(__filename,__modes))
#elif defined(__CRT_HAVE_fopen) && (!defined(__O_LARGEFILE) || (__O_LARGEFILE+0) == 0)
/* 64-bit variant of `fopen' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,fopen64,(char const *__restrict __filename, char const *__restrict __modes),fopen,(__filename,__modes))
#endif /* fopen64... */
#if defined(__CRT_HAVE_freopen64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `freopen' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64)
/* 64-bit variant of `freopen' */
__CDECLARE(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen) && (!defined(__O_LARGEFILE) || (__O_LARGEFILE+0) == 0)
/* 64-bit variant of `freopen' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),freopen,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen)
/* 64-bit variant of `freopen' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),freopen,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen_unlocked)
/* 64-bit variant of `freopen' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),freopen_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64_unlocked)
/* 64-bit variant of `freopen' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),__FILE *,__NOTHROW_RPC,freopen64,(char const *__restrict __filename, char const *__restrict __modes, __FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#endif /* freopen64... */
#if defined(__CRT_HAVE_fgetpos64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `fgetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos64,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),fgetpos64_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos64)
/* 64-bit variant of `fgetpos' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fgetpos64,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos64_unlocked)
/* 64-bit variant of `fgetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos64,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),fgetpos64_unlocked,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fgetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos64,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),fgetpos,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE_ftello64_unlocked) || defined(__CRT_HAVE__ftelli64))
#include <local/stdio/fgetpos64.h>
/* 64-bit variant of `fgetpos' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fgetpos64, __FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fgetpos64)(__FILE *__restrict __stream, fpos64_t *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetpos64))(__stream, __pos); })
#endif /* fgetpos64... */
#if defined(__CRT_HAVE_fsetpos64)
/* 64-bit variant of `fsetpos' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fsetpos64,(__FILE *__restrict __stream, fpos64_t const *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fsetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos64,(__FILE *__restrict __stream, fpos64_t const *__restrict __pos),fsetpos,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fsetpos) || defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64))
#include <local/stdio/fsetpos64.h>
/* 64-bit variant of `fsetpos' */
__NAMESPACE_LOCAL_USING_OR_IMPL(fsetpos64, __FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fsetpos64)(__FILE *__restrict __stream, fpos64_t const *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fsetpos64))(__stream, __pos); })
#endif /* fsetpos64... */
#endif /* __USE_LARGEFILE64 */

#ifdef __USE_KOS
#if defined(__CRT_HAVE_file_printer_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* For use with `format_printf()' and friends: Prints to a `$FILE *' closure argument */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,file_printer,(void *__arg, char const *__restrict __data, size_t __datalen),file_printer_unlocked,(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_file_printer)
/* For use with `format_printf()' and friends: Prints to a `$FILE *' closure argument */
__CDECLARE(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,file_printer,(void *__arg, char const *__restrict __data, size_t __datalen),(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_file_printer_unlocked)
/* For use with `format_printf()' and friends: Prints to a `$FILE *' closure argument */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,file_printer,(void *__arg, char const *__restrict __data, size_t __datalen),file_printer_unlocked,(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
#include <local/stdio/file_printer.h>
/* For use with `format_printf()' and friends: Prints to a `$FILE *' closure argument */
__NAMESPACE_LOCAL_USING_OR_IMPL(file_printer, __FORCELOCAL __ATTR_NONNULL((1, 2)) __SSIZE_TYPE__ (__LIBCCALL file_printer)(void *__arg, char const *__restrict __data, size_t __datalen) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(file_printer))(__arg, __data, __datalen); })
#endif /* file_printer... */
#if defined(__CRT_HAVE_file_printer_unlocked)
/* Same as `file_printer()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CDECLARE(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,file_printer_unlocked,(void *__arg, char const *__restrict __data, size_t __datalen),(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_file_printer)
/* Same as `file_printer()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),__SSIZE_TYPE__,,file_printer_unlocked,(void *__arg, char const *__restrict __data, size_t __datalen),file_printer,(__arg,__data,__datalen)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc)
#include <local/stdio/file_printer_unlocked.h>
/* Same as `file_printer()', but performs I/O without acquiring a lock to `($FILE *)ARG' */
__NAMESPACE_LOCAL_USING_OR_IMPL(file_printer_unlocked, __FORCELOCAL __ATTR_NONNULL((1, 2)) __SSIZE_TYPE__ (__LIBCCALL file_printer_unlocked)(void *__arg, char const *__restrict __data, size_t __datalen) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(file_printer_unlocked))(__arg, __data, __datalen); })
#endif /* file_printer_unlocked... */
#endif /* __USE_KOS */

#ifdef __USE_GNU
#if defined(__CRT_HAVE_vasprintf)
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
__CDECLARE(__ATTR_LIBC_PRINTF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,__NOTHROW_NCX,vasprintf,(char **__restrict __pstr, char const *__restrict __format, __builtin_va_list __args),(__pstr,__format,__args))
#elif ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_pack)) && ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_printer)) && ((__has_builtin(__builtin_free) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_free)) || defined(__CRT_HAVE_free) || defined(__CRT_HAVE_cfree))
#include <local/stdio/vasprintf.h>
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
__NAMESPACE_LOCAL_USING_OR_IMPL(vasprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__LIBCCALL vasprintf)(char **__restrict __pstr, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vasprintf))(__pstr, __format, __args); })
#endif /* vasprintf... */
#if defined(__CRT_HAVE_asprintf)
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__VLIBCCALL asprintf)(char **__restrict __pstr, char const *__restrict __format, ...) __CASMNAME_SAME("asprintf");
#elif (((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_pack)) && ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_printer)) && ((__has_builtin(__builtin_free) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_free)) || defined(__CRT_HAVE_free) || defined(__CRT_HAVE_cfree)) || defined(__CRT_HAVE_vasprintf))
#include <local/stdio/asprintf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(asprintf)
#else /* __cplusplus */
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
#define asprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(asprintf))
#endif /* !__cplusplus */
#endif /* asprintf... */
#if defined(__CRT_HAVE___asprintf)
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__VLIBCCALL __asprintf)(char **__restrict __pstr, char const *__restrict __format, ...) __CASMNAME_SAME("__asprintf");
#elif defined(__CRT_HAVE_asprintf) && !defined(__NO_ASMNAME)
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T __NOTHROW_NCX(__VLIBCCALL __asprintf)(char **__restrict __pstr, char const *__restrict __format, ...) __CASMNAME("asprintf");
#elif (((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_pack)) && ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc) || defined(__CRT_HAVE_format_aprintf_printer)) && ((__has_builtin(__builtin_free) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_free)) || defined(__CRT_HAVE_free) || defined(__CRT_HAVE_cfree)) || defined(__CRT_HAVE_vasprintf))
#include <local/stdio/asprintf.h>
/* Print the given `FORMAT' into a newly allocated, heap-allocated string which is then stored in `*PSTR' */
#define __asprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(asprintf))
#endif /* __asprintf... */
#endif /* __USE_GNU */




#ifdef __USE_KOS
#if defined(__CRT_HAVE_fdreopen64_unlocked) && (defined(__USE_STDIO_UNLOCKED) && defined(__USE_FILE_OFFSET64))
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen64_unlocked,(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen_unlocked,(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen64) && (defined(__USE_FILE_OFFSET64))
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen64,(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CDECLARE(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen64)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen64,(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen_unlocked,(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen64_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen64_unlocked,(__fd,__modes,__stream))
#endif /* fdreopen... */
#if defined(__CRT_HAVE_fdreopen_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CDECLARE(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen_unlocked,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),(__fd,__modes,__stream))
#elif defined(__CRT_HAVE_fdreopen)
/* Re-open the given `STREAM' as a file-stream for accessing `FD' */
__CREDIRECT(__ATTR_NONNULL((2, 3)),FILE *,__NOTHROW_RPC,fdreopen_unlocked,(__fd_t __fd, char const *__restrict __modes, FILE *__restrict __stream),fdreopen,(__fd,__modes,__stream))
#endif /* fdreopen_unlocked... */
#if defined(__CRT_HAVE_freopen64_unlocked) && (defined(__USE_FILE_OFFSET64))
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CDECLARE(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64,(__filename,__modes,__stream))
#endif /* freopen_unlocked... */
#if defined(__CRT_HAVE_freopen64_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CDECLARE(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen64_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen64_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen64)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen64_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen64,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen_unlocked)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen64_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen_unlocked,(__filename,__modes,__stream))
#elif defined(__CRT_HAVE_freopen)
/* Re-open the given `STREAM' as a file-stream for accessing `FILENAME' */
__CREDIRECT(__ATTR_NONNULL((1, 2, 3)),FILE *,__NOTHROW_RPC,freopen64_unlocked,(char const *__restrict __filename, char const *__restrict __modes, FILE *__restrict __stream),freopen,(__filename,__modes,__stream))
#endif /* freopen64_unlocked... */
#if defined(__CRT_HAVE_fseek_unlocked)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseek_unlocked,(__FILE *__restrict __stream, long int __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseek)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseek_unlocked,(__FILE *__restrict __stream, long int __off, int __whence),fseek,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseeko64_unlocked))))
#include <local/stdio/fseek.h>
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseek_unlocked)(__FILE *__restrict __stream, long int __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseek))(__stream, __off, __whence); }
#endif /* fseek_unlocked... */
#if defined(__CRT_HAVE_fseeko_unlocked)
/* Change the current in-file position of `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseeko_unlocked,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko)
/* Change the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko_unlocked,(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence),fseeko,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE__fseeki64) || defined(__CRT_HAVE_fseek) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseeko64_unlocked) || defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseek_unlocked))))
#include <local/stdio/fseeko.h>
/* Change the current in-file position of `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseeko_unlocked)(__FILE *__restrict __stream, __FS_TYPE(off) __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko))(__stream, __off, __whence); }
#endif /* fseeko_unlocked... */
#if defined(__CRT_HAVE_ftell_unlocked)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE(__ATTR_NONNULL((1)),long int,,ftell_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),long int,,ftell_unlocked,(__FILE *__restrict __stream),ftell,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE__ftelli64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked))))
#include <local/stdio/ftell.h>
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__FORCELOCAL __ATTR_NONNULL((1)) long int (__LIBCCALL ftell_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftell))(__stream); }
#endif /* ftell_unlocked... */
#if defined(__CRT_HAVE_ftello_unlocked)
/* Return the current in-file position of `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),__FS_TYPE(off),,ftello_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello)
/* Return the current in-file position of `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),__FS_TYPE(off),,ftello_unlocked,(__FILE *__restrict __stream),ftello,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE__ftelli64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked))))
#include <local/stdio/ftello.h>
/* Return the current in-file position of `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1)) __FS_TYPE(off) (__LIBCCALL ftello_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello))(__stream); }
#endif /* ftello_unlocked... */
#if defined(__CRT_HAVE_flushall_unlocked)
__CDECLARE(,int,,flushall_unlocked,(void),()) __THROWS(...)
#else /* LIBC: flushall_unlocked */
#include <local/stdio/flushall_unlocked.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(flushall_unlocked, __FORCELOCAL int (__LIBCCALL flushall_unlocked)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(flushall_unlocked))(); })
#endif /* flushall_unlocked... */
#if defined(__CRT_HAVE_fgetpos_unlocked)
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fgetpos_unlocked,(__FILE *__restrict __stream, __FS_TYPE(pos) *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos)
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos_unlocked,(__FILE *__restrict __stream, __FS_TYPE(pos) *__restrict __pos),fgetpos,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked) || defined(__CRT_HAVE__ftelli64))))
#include <local/stdio/fgetpos.h>
/* Initialize an opaque descriptor `POS' for the current in-file position of `STREAM'
 * Upon success (return == 0), `POS' can be used to restore the current position by calling `fsetpos()' */
__FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fgetpos_unlocked)(__FILE *__restrict __stream, __FS_TYPE(pos) *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetpos))(__stream, __pos); }
#endif /* fgetpos_unlocked... */
#if defined(__CRT_HAVE_fsetpos_unlocked)
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fsetpos_unlocked,(__FILE *__restrict __stream, __FS_TYPE(pos) const *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos)
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos_unlocked,(__FILE *__restrict __stream, __FS_TYPE(pos) const *__restrict __pos),fsetpos,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fsetpos) || defined(__CRT_HAVE_fsetpos64) || defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fsetpos_unlocked) || defined(__CRT_HAVE_fsetpos64_unlocked) || defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseeko64_unlocked))))
#include <local/stdio/fsetpos.h>
/* Set the file position of `STREAM' to `POS', as previously initialized with a call to `fgetpos()' */
__FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fsetpos_unlocked)(__FILE *__restrict __stream, __FS_TYPE(pos) const *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fsetpos))(__stream, __pos); }
#endif /* fsetpos_unlocked... */
#if defined(__CRT_HAVE_getw_unlocked)
/* Similar to `getc()', but read 2 bytes */
__CDECLARE(__ATTR_NONNULL((1)),int,,getw_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getw)
/* Similar to `getc()', but read 2 bytes */
__CREDIRECT(__ATTR_NONNULL((1)),int,,getw_unlocked,(__FILE *__restrict __stream),getw,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getw.h>
/* Similar to `getc()', but read 2 bytes */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL getw_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getw))(__stream); }
#endif /* getw_unlocked... */
#if defined(__CRT_HAVE_putw_unlocked)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CDECLARE(__ATTR_NONNULL((2)),int,,putw_unlocked,(int __w, __FILE *__restrict __stream),(__w,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putw)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,putw_unlocked,(int __w, __FILE *__restrict __stream),putw,(__w,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
#include <local/stdio/putw.h>
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL putw_unlocked)(int __w, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putw))(__w, __stream); }
#endif /* putw_unlocked... */
#if defined(__CRT_HAVE_setvbuf_unlocked)
/* Set the buffer and buffer-mode to-be used by the given `STREAM'
 * @param modes: One of `_IOFBF', `_IOLBF' or `_IONBF' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,setvbuf_unlocked,(__FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __bufsize),(__stream,__buf,__modes,__bufsize))
#elif defined(__CRT_HAVE_setvbuf)
/* Set the buffer and buffer-mode to-be used by the given `STREAM'
 * @param modes: One of `_IOFBF', `_IOLBF' or `_IONBF' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,setvbuf_unlocked,(__FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __bufsize),setvbuf,(__stream,__buf,__modes,__bufsize))
#endif /* setvbuf_unlocked... */
#if defined(__CRT_HAVE_ungetc_unlocked)
/* Unget a single character byte of data previously returned by `getc()' */
__CDECLARE(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,ungetc_unlocked,(int __ch, __FILE *__restrict __stream),(__ch,__stream))
#elif defined(__CRT_HAVE_ungetc)
/* Unget a single character byte of data previously returned by `getc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,ungetc_unlocked,(int __ch, __FILE *__restrict __stream),ungetc,(__ch,__stream))
#endif /* ungetc_unlocked... */
#if defined(__CRT_HAVE_getdelim_unlocked)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,getdelim_unlocked,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getdelim)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)),__SSIZE_TYPE__,,getdelim_unlocked,(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream),getdelim,(__lineptr,__pcount,__delimiter,__stream)) __THROWS(...)
#elif ((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc)) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s)) && (defined(__CRT_HAVE_ungetc_unlocked) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getdelim_unlocked.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(getdelim_unlocked, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2, 4)) __SSIZE_TYPE__ (__LIBCCALL getdelim_unlocked)(char **__restrict __lineptr, size_t *__restrict __pcount, int __delimiter, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getdelim_unlocked))(__lineptr, __pcount, __delimiter, __stream); })
#endif /* getdelim_unlocked... */
#if defined(__CRT_HAVE_getline_unlocked)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)),__SSIZE_TYPE__,,getline_unlocked,(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream),(__lineptr,__pcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getline)
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)),__SSIZE_TYPE__,,getline_unlocked,(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream),getline,(__lineptr,__pcount,__stream)) __THROWS(...)
#elif (((__has_builtin(__builtin_realloc) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_realloc)) || defined(__CRT_HAVE_realloc)) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s)) && (defined(__CRT_HAVE_ungetc_unlocked) || defined(__CRT_HAVE_ungetc)) || defined(__CRT_HAVE_getdelim_unlocked) || defined(__CRT_HAVE_getdelim))
#include <local/stdio/getline_unlocked.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(getline_unlocked, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2, 3)) __SSIZE_TYPE__ (__LIBCCALL getline_unlocked)(char **__restrict __lineptr, size_t *__restrict __pcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getline_unlocked))(__lineptr, __pcount, __stream); })
#endif /* getline_unlocked... */
#if defined(__CRT_HAVE_rewind_unlocked)
/* Rewind the current in-file position of `STREAM' to its starting position */
__CDECLARE_VOID(__ATTR_NONNULL((1)),,rewind_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_rewind)
/* Rewind the current in-file position of `STREAM' to its starting position */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),,rewind_unlocked,(__FILE *__restrict __stream),rewind,(__stream)) __THROWS(...)
#endif /* rewind_unlocked... */
#if defined(__CRT_HAVE_fisatty)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),int,__NOTHROW_NCX,fisatty,(__FILE *__restrict __stream),(__stream))
#elif (defined(__CRT_HAVE_isatty) || defined(__CRT_HAVE__isatty)) && (defined(__CRT_HAVE_fileno) || defined(__CRT_HAVE__fileno) || defined(__CRT_HAVE_fileno_unlocked))
#include <local/stdio/fisatty.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(fisatty, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) int __NOTHROW_NCX(__LIBCCALL fisatty)(__FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fisatty))(__stream); })
#endif /* fisatty... */
#if __has_builtin(__builtin_puts_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_puts_unlocked)
__FORCELOCAL __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL puts_unlocked)(char const *__restrict __str) __THROWS(...) { return __builtin_puts_unlocked(__str); }
#elif defined(__CRT_HAVE_puts_unlocked)
__CDECLARE(__ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,puts_unlocked,(char const *__restrict __str),(__str)) __THROWS(...)
#elif defined(__CRT_HAVE_puts)
__CREDIRECT(__ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,puts_unlocked,(char const *__restrict __str),puts,(__str)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (__has_builtin(__builtin_fputs_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputs_unlocked)) || defined(__CRT_HAVE_fputs_unlocked) || defined(__CRT_HAVE_fputs))
#include <local/stdio/puts_unlocked.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(puts_unlocked, __FORCELOCAL __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL puts_unlocked)(char const *__restrict __str) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(puts_unlocked))(__str); })
#endif /* puts_unlocked... */

#ifdef __USE_LARGEFILE64
#if defined(__CRT_HAVE_fseeko64_unlocked)
/* 64-bit variant of `fseeko' */
__CDECLARE(__ATTR_NONNULL((1)),int,,fseeko64_unlocked,(__FILE *__restrict __stream, __off64_t __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko64_unlocked,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko_unlocked) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,fseeko64_unlocked,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko_unlocked,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked))))
#include <local/stdio/fseeko64.h>
/* 64-bit variant of `fseeko' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL fseeko64_unlocked)(__FILE *__restrict __stream, __off64_t __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko64))(__stream, __off, __whence); }
#endif /* fseeko64_unlocked... */
#if defined(__CRT_HAVE_ftello64_unlocked)
/* 64-bit variant of `ftello' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64_unlocked,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64_unlocked,(__FILE *__restrict __stream),ftello64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello_unlocked) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,,ftello64_unlocked,(__FILE *__restrict __stream),ftello_unlocked,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked))))
#include <local/stdio/ftello64.h>
/* 64-bit variant of `ftello' */
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) __off64_t (__LIBCCALL ftello64_unlocked)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello64))(__stream); }
#endif /* ftello64_unlocked... */
#if defined(__CRT_HAVE_fgetpos64_unlocked)
/* 64-bit variant of `fgetpos' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fgetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos64)
/* 64-bit variant of `fgetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),fgetpos64,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetpos_unlocked) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fgetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fgetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t *__restrict __pos),fgetpos_unlocked,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE_ftello64_unlocked) || defined(__CRT_HAVE__ftelli64))
#include <local/stdio/fgetpos64.h>
/* 64-bit variant of `fgetpos' */
__FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fgetpos64_unlocked)(__FILE *__restrict __stream, fpos64_t *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetpos64))(__stream, __pos); }
#endif /* fgetpos64_unlocked... */
#if defined(__CRT_HAVE_fsetpos64_unlocked)
/* 64-bit variant of `fsetpos' */
__CDECLARE(__ATTR_NONNULL((1, 2)),int,,fsetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t const *__restrict __pos),(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos64)
/* 64-bit variant of `fsetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t const *__restrict __pos),fsetpos64,(__stream,__pos)) __THROWS(...)
#elif defined(__CRT_HAVE_fsetpos_unlocked) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fsetpos' */
__CREDIRECT(__ATTR_NONNULL((1, 2)),int,,fsetpos64_unlocked,(__FILE *__restrict __stream, fpos64_t const *__restrict __pos),fsetpos_unlocked,(__stream,__pos)) __THROWS(...)
#elif (defined(__CRT_HAVE_fsetpos) || defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64))
#include <local/stdio/fsetpos64.h>
/* 64-bit variant of `fsetpos' */
__FORCELOCAL __ATTR_NONNULL((1, 2)) int (__LIBCCALL fsetpos64_unlocked)(__FILE *__restrict __stream, fpos64_t const *__restrict __pos) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fsetpos64))(__stream, __pos); }
#endif /* fsetpos64_unlocked... */
#endif /* __USE_LARGEFILE64 */
#if defined(__CRT_HAVE_vfprintf_unlocked)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfprintf)
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfprintf,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfprintf_s)
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SSIZE_T,,vfprintf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfprintf_s,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || defined(__CRT_HAVE_file_printer_unlocked) || defined(__CRT_HAVE_file_printer)
#include <local/stdio/vfprintf_unlocked.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(vfprintf_unlocked, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vfprintf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vfprintf_unlocked))(__stream, __format, __args); })
#endif /* vfprintf_unlocked... */
#if __has_builtin(__builtin_fprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) { return __builtin_fprintf(__stream, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_fprintf_unlocked)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fprintf_unlocked");
#elif defined(__CRT_HAVE_fprintf) && !defined(__NO_ASMNAME)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fprintf");
#elif defined(__CRT_HAVE_fprintf_s) && !defined(__NO_ASMNAME)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL fprintf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fprintf_s");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
#include <local/stdio/fprintf.h>
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
#define fprintf_unlocked (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fprintf))
#endif /* fprintf_unlocked... */
#if __has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vprintf_unlocked)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vprintf(__format, __args); }
#elif defined(__CRT_HAVE_vprintf_unlocked)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf_unlocked,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf_unlocked,(char const *__restrict __format, __builtin_va_list __args),vprintf,(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vprintf_s)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SSIZE_T,,vprintf_unlocked,(char const *__restrict __format, __builtin_va_list __args),vprintf_s,(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s))
#include <local/stdio/vprintf.h>
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__LIBCCALL vprintf_unlocked)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vprintf))(__format, __args); }
#endif /* vprintf_unlocked... */
#if __has_builtin(__builtin_printf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_printf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf_unlocked)(char const *__restrict __format, ...) __THROWS(...) { return __builtin_printf(__format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_printf_unlocked)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf_unlocked)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("printf_unlocked");
#elif defined(__CRT_HAVE_printf) && !defined(__NO_ASMNAME)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf_unlocked)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("printf");
#elif defined(__CRT_HAVE_printf_s) && !defined(__NO_ASMNAME)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SSIZE_T (__VLIBCCALL printf_unlocked)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("printf_s");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
#include <local/stdio/printf.h>
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
#define printf_unlocked (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(printf))
#endif /* printf_unlocked... */
#if __has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfscanf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vfscanf(__stream, __format, __args); }
#elif defined(__CRT_HAVE_vfscanf_unlocked)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CDECLARE(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfscanf,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),_vfscanf,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfscanf_s)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf_unlocked,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),_vfscanf_s,(__stream,__format,__args)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/vfscanf.h>
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 0) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfscanf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vfscanf))(__stream, __format, __args); }
#endif /* vfscanf_unlocked... */
#if __has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vscanf_unlocked)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vscanf(__format, __args); }
#elif defined(__CRT_HAVE_vscanf_unlocked)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CDECLARE(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf_unlocked,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf_unlocked,(char const *__restrict __format, __builtin_va_list __args),vscanf,(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vscanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__CREDIRECT(__ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf_unlocked,(char const *__restrict __format, __builtin_va_list __args),_vscanf,(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s))
#include <local/stdio/vscanf.h>
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vscanf_unlocked)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vscanf))(__format, __args); }
#endif /* vscanf_unlocked... */
#if __has_builtin(__builtin_fscanf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fscanf)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) { return __builtin_fscanf(__stream, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_fscanf_unlocked)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fscanf_unlocked");
#elif defined(__CRT_HAVE_fscanf) && !defined(__NO_ASMNAME)
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(2, 3) __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf_unlocked)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fscanf");
#elif ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s))
#include <local/stdio/fscanf.h>
/* Scan data from `STREAM', following `FORMAT'
 * Return the number of successfully scanned data items */
#define fscanf_unlocked (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fscanf))
#endif /* fscanf_unlocked... */
#if __has_builtin(__builtin_scanf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_scanf)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__FORCELOCAL __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf_unlocked)(char const *__restrict __format, ...) __THROWS(...) { return __builtin_scanf(__format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_scanf_unlocked)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf_unlocked)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("scanf_unlocked");
#elif defined(__CRT_HAVE_scanf) && !defined(__NO_ASMNAME)
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
__LIBC __ATTR_LIBC_SCANF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf_unlocked)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("scanf");
#elif (!defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s)) || (__has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)) || (defined(__CRT_HAVE_vscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vscanf) || defined(__CRT_HAVE__vscanf))
#include <local/stdio/scanf.h>
/* Scan data from `stdin', following `FORMAT'
 * Return the number of successfully scanned data items */
#define scanf_unlocked (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(scanf))
#endif /* scanf_unlocked... */
#endif /* __USE_KOS */

#endif /* __CC__ */

__SYSDECL_END





#ifdef __USE_DOS
#define _NFILE          512
#define _NSTREAM_       512
#define _IOB_ENTRIES    20
#define _P_tmpdir       "\\"
#define _wP_tmpdir     L"\\"
#define _SYS_OPEN       20
#ifdef __USE_DOS_SLIB
#define L_tmpnam_s      18
#define TMP_MAX_S       2147483647
#define _TMP_MAX_S      2147483647
#endif /* __USE_DOS_SLIB */

#ifndef _FPOS_T_DEFINED
#define _FPOS_T_DEFINED 1
#endif /* !_FPOS_T_DEFINED */

#ifndef _STDSTREAM_DEFINED
#define _STDSTREAM_DEFINED 1
#endif /* !_STDSTREAM_DEFINED */

#ifndef _FILE_DEFINED
#define _FILE_DEFINED 1
#endif /* !_FILE_DEFINED */

#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED 1
#endif /* !_CRT_PERROR_DEFINED */

#ifdef __CC__

#ifndef __errno_t_defined
#define __errno_t_defined 1
typedef __errno_t errno_t;
#endif /* !__errno_t_defined */

#ifndef __rsize_t_defined
#define __rsize_t_defined 1
typedef __size_t rsize_t;
#endif /* !__rsize_t_defined */


#ifndef _CRT_DIRECTORY_DEFINED
#define _CRT_DIRECTORY_DEFINED 1
#ifndef __unlink_defined
#define __unlink_defined 1
#if defined(__CRT_HAVE_unlink)
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_RPC,unlink,(char const *__file),(__file))
#elif defined(__CRT_HAVE__unlink)
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_RPC,unlink,(char const *__file),_unlink,(__file))
#elif defined(__CRT_AT_FDCWD) && defined(__CRT_HAVE_unlinkat)
#include <local/unistd/unlink.h>
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__NAMESPACE_LOCAL_USING_OR_IMPL(unlink, __FORCELOCAL __ATTR_NONNULL((1)) int __NOTHROW_RPC(__LIBCCALL unlink)(char const *__file) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(unlink))(__file); })
#else /* CUSTOM: unlink */
#undef __unlink_defined
#endif /* unlink... */
#endif /* !__unlink_defined */
#ifndef ___unlink_defined
#define ___unlink_defined 1
#if defined(__CRT_HAVE__unlink)
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_unlink,(char const *__filename),(__filename))
#elif defined(__CRT_HAVE_unlink)
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_unlink,(char const *__filename),unlink,(__filename))
#elif defined(__CRT_AT_FDCWD) && defined(__CRT_HAVE_unlinkat)
#include <local/unistd/unlink.h>
/* >> unlink(2)
 * Remove a file, symbolic link, device or FIFO referred to by `FILE' */
__FORCELOCAL __ATTR_NONNULL((1)) int __NOTHROW_NCX(__LIBCCALL _unlink)(char const *__filename) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(unlink))(__filename); }
#else /* CUSTOM: unlink */
#undef ___unlink_defined
#endif /* _unlink... */
#endif /* !___unlink_defined */
#endif /* !_CRT_DIRECTORY_DEFINED */

#ifndef _STDIO_DEFINED
#define _STDIO_DEFINED 1
#if defined(__CRT_HAVE__popen)
/* Open and return a new process I/O stream for executing `COMMAND' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,_popen,(char const *__command, char const *__modes),(__command,__modes))
#elif defined(__CRT_HAVE_popen)
/* Open and return a new process I/O stream for executing `COMMAND' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,_popen,(char const *__command, char const *__modes),popen,(__command,__modes))
#endif /* _popen... */
#if defined(__CRT_HAVE__pclose)
/* Close a process I/O file `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_pclose,(__FILE *__stream),(__stream))
#elif defined(__CRT_HAVE_pclose)
/* Close a process I/O file `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_pclose,(__FILE *__stream),pclose,(__stream))
#endif /* _pclose... */
#if defined(__CRT_HAVE__fsopen)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 2)),__FILE *,__NOTHROW_RPC,_fsopen,(char const *__filename, char const *__modes, int __sflag),(__filename,__modes,__sflag))
#elif defined(__CRT_HAVE_fopen) || defined(__CRT_HAVE_fopen64)
#include <local/stdio/_fsopen.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_fsopen, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 2)) __FILE *__NOTHROW_RPC(__LIBCCALL _fsopen)(char const *__filename, char const *__modes, int __sflag) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fsopen))(__filename, __modes, __sflag); })
#endif /* _fsopen... */
#if defined(__CRT_HAVE__fdopen)
/* Open a new file stream by inheriting a given file descriptor `FD'
 * Note that upon success (`return != NULL'), the given `FD' will be `close()'d once `fclose(return)' is called */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((2)),__FILE *,__NOTHROW_NCX,_fdopen,(__fd_t __fd, char const *__restrict __modes),(__fd,__modes))
#elif defined(__CRT_HAVE_fdopen)
/* Open a new file stream by inheriting a given file descriptor `FD'
 * Note that upon success (`return != NULL'), the given `FD' will be `close()'d once `fclose(return)' is called */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((2)),__FILE *,__NOTHROW_NCX,_fdopen,(__fd_t __fd, char const *__restrict __modes),fdopen,(__fd,__modes))
#endif /* _fdopen... */
#if defined(__CRT_HAVE__flushall)
__CDECLARE(,int,,_flushall,(void),()) __THROWS(...)
#else /* LIBC: _flushall */
#include <local/stdio/_flushall.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_flushall, __FORCELOCAL int (__LIBCCALL _flushall)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_flushall))(); })
#endif /* _flushall... */
#if defined(__CRT_HAVE__fcloseall)
/* Alias for `_fcloseall()' */
__CDECLARE(,int,__NOTHROW_NCX,_fcloseall,(void),())
#elif defined(__CRT_HAVE_fcloseall)
/* Alias for `_fcloseall()' */
__CREDIRECT(,int,__NOTHROW_NCX,_fcloseall,(void),fcloseall,())
#endif /* _fcloseall... */
#if defined(__CRT_HAVE_fileno_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,_fileno,(__FILE *__restrict __stream),fileno_unlocked,(__stream))
#elif defined(__CRT_HAVE__fileno)
/* Return the underlying file descriptor number used by `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,_fileno,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_fileno_unlocked)
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,_fileno,(__FILE *__restrict __stream),fileno_unlocked,(__stream))
#elif defined(__CRT_HAVE_fileno)
/* Return the underlying file descriptor number used by `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__fd_t,__NOTHROW_NCX,_fileno,(__FILE *__restrict __stream),fileno,(__stream))
#endif /* _fileno... */
#if defined(__CRT_HAVE_getchar_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fgetc(stdin)' */
__CREDIRECT(,int,__NOTHROW_NCX,_fgetchar,(void),getchar_unlocked,())
#elif defined(__CRT_HAVE_getchar)
/* Alias for `fgetc(stdin)' */
__CREDIRECT(,int,__NOTHROW_NCX,_fgetchar,(void),getchar,())
#elif defined(__CRT_HAVE__fgetchar)
/* Alias for `fgetc(stdin)' */
__CDECLARE(,int,__NOTHROW_NCX,_fgetchar,(void),())
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock))))
#include <local/stdio/getchar.h>
/* Alias for `fgetc(stdin)' */
__FORCELOCAL int __NOTHROW_NCX(__LIBCCALL _fgetchar)(void) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getchar))(); }
#endif /* _fgetchar... */
#if __has_builtin(__builtin_putchar) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__FORCELOCAL int __NOTHROW_NCX(__LIBCCALL _fputchar)(int __ch) { return __builtin_putchar(__ch); }
#elif defined(__CRT_HAVE_putchar_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,__NOTHROW_NCX,_fputchar,(int __ch),putchar_unlocked,(__ch))
#elif defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,__NOTHROW_NCX,_fputchar,(int __ch),putchar,(__ch))
#elif defined(__CRT_HAVE__fputchar)
/* Alias for `fputc(CH, stdout)' */
__CDECLARE(,int,__NOTHROW_NCX,_fputchar,(int __ch),(__ch))
#elif defined(__CRT_HAVE_putchar_unlocked)
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,__NOTHROW_NCX,_fputchar,(int __ch),putchar_unlocked,(__ch))
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock))))
#include <local/stdio/putchar.h>
/* Alias for `fputc(CH, stdout)' */
__FORCELOCAL int __NOTHROW_NCX(__LIBCCALL _fputchar)(int __ch) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putchar))(__ch); }
#endif /* _fputchar... */
#if defined(__CRT_HAVE_getw)
/* Similar to `getc()', but read 2 bytes */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_getw,(__FILE *__restrict __stream),getw,(__stream))
#elif defined(__CRT_HAVE__getw)
/* Similar to `getc()', but read 2 bytes */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_getw,(__FILE *__restrict __stream),(__stream))
#elif (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc))
#include <local/stdio/getw.h>
/* Similar to `getc()', but read 2 bytes */
__FORCELOCAL __ATTR_NONNULL((1)) int __NOTHROW_NCX(__LIBCCALL _getw)(__FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getw))(__stream); }
#endif /* _getw... */
#if defined(__CRT_HAVE_putw)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CREDIRECT(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,_putw,(int __w, __FILE *__restrict __stream),putw,(__w,__stream))
#elif defined(__CRT_HAVE__putw)
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__CDECLARE(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,_putw,(int __w, __FILE *__restrict __stream),(__w,__stream))
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
#include <local/stdio/putw.h>
/* Similar to `putc()', but write 2 bytes loaded from `W & 0xffff' */
__FORCELOCAL __ATTR_NONNULL((2)) int __NOTHROW_NCX(__LIBCCALL _putw)(int __w, __FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putw))(__w, __stream); }
#endif /* _putw... */
#if defined(__CRT_HAVE__tempnam)
__CDECLARE(__ATTR_MALLOC __ATTR_WUNUSED,char *,__NOTHROW_NCX,_tempnam,(char const *__dir, char const *__pfx),(__dir,__pfx))
#elif defined(__CRT_HAVE_tempnam)
__CREDIRECT(__ATTR_MALLOC __ATTR_WUNUSED,char *,__NOTHROW_NCX,_tempnam,(char const *__dir, char const *__pfx),tempnam,(__dir,__pfx))
#endif /* _tempnam... */

#if defined(__CRT_HAVE_fseeko64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_fseeki64,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko64_unlocked,(__stream,__off,__whence))
#elif defined(__CRT_HAVE_fseeko64)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_fseeki64,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko64,(__stream,__off,__whence))
#elif defined(__CRT_HAVE__fseeki64)
/* 64-bit variant of `fseeko' */
__CDECLARE(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_fseeki64,(__FILE *__restrict __stream, __off64_t __off, int __whence),(__stream,__off,__whence))
#elif defined(__CRT_HAVE_fseeko) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,__NOTHROW_NCX,_fseeki64,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko,(__stream,__off,__whence))
#elif (defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked))))
#include <local/stdio/fseeko64.h>
/* 64-bit variant of `fseeko' */
__FORCELOCAL __ATTR_NONNULL((1)) int __NOTHROW_NCX(__LIBCCALL _fseeki64)(__FILE *__restrict __stream, __off64_t __off, int __whence) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko64))(__stream, __off, __whence); }
#endif /* _fseeki64... */
#if defined(__CRT_HAVE_ftello64_unlocked) && (defined(__USE_STDIO_UNLOCKED))
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),ftello64_unlocked,(__stream))
#elif defined(__CRT_HAVE_ftell_unlocked) && (defined(__USE_STDIO_UNLOCKED) && __SIZEOF_LONG__ == 8)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),ftell_unlocked,(__stream))
#elif defined(__CRT_HAVE_ftello64)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),ftello64,(__stream))
#elif defined(__CRT_HAVE__ftelli64)
/* 64-bit variant of `ftello' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_ftell) && (__SIZEOF_LONG__ == 8)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),ftell,(__stream))
#elif defined(__CRT_HAVE_ftello) && (__SIZEOF_OFF32_T__ == __SIZEOF_OFF64_T__)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1)),__off64_t,__NOTHROW_NCX,_ftelli64,(__FILE *__restrict __stream),ftello,(__stream))
#elif (defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked))))
#include <local/stdio/ftello64.h>
/* 64-bit variant of `ftello' */
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) __off64_t __NOTHROW_NCX(__LIBCCALL _ftelli64)(__FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello64))(__stream); }
#endif /* _ftelli64... */

#if defined(__CRT_HAVE__rmtmp)
__CDECLARE(,int,__NOTHROW_RPC,_rmtmp,(void),())
#endif /* _rmtmp... */

#if defined(__CRT_HAVE__filbuf)
__CDECLARE(__ATTR_NONNULL((1)),int,,_filbuf,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#endif /* _filbuf... */
#if defined(__CRT_HAVE__flsbuf)
__CDECLARE(__ATTR_NONNULL((2)),int,,_flsbuf,(int __ch, __FILE *__restrict __stream),(__ch,__stream)) __THROWS(...)
#endif /* _flsbuf... */

#if defined(__CRT_HAVE__getmaxstdio)
__CDECLARE(__ATTR_WUNUSED,int,__NOTHROW_NCX,_getmaxstdio,(void),())
#endif /* _getmaxstdio... */
#if defined(__CRT_HAVE__setmaxstdio)
__CDECLARE(,int,__NOTHROW_NCX,_setmaxstdio,(int __val),(__val))
#endif /* _setmaxstdio... */
#if defined(__CRT_HAVE__get_printf_count_output)
__CDECLARE(__ATTR_WUNUSED,int,__NOTHROW_NCX,_get_printf_count_output,(void),())
#endif /* _get_printf_count_output... */
#if defined(__CRT_HAVE__set_printf_count_output)
__CDECLARE(,int,__NOTHROW_NCX,_set_printf_count_output,(int __val),(__val))
#endif /* _set_printf_count_output... */
#if defined(__CRT_HAVE__get_output_format)
__CDECLARE(__ATTR_WUNUSED,__UINT32_TYPE__,__NOTHROW_NCX,_get_output_format,(void),())
#endif /* _get_output_format... */
#if defined(__CRT_HAVE__set_output_format)
__CDECLARE(,__UINT32_TYPE__,__NOTHROW_NCX,_set_output_format,(__UINT32_TYPE__ __format),(__format))
#endif /* _set_output_format... */

#if defined(__CRT_HAVE__scanf_l)
__LIBC __ATTR_LIBC_SCANF(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _scanf_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_scanf_l");
#elif defined(__CRT_HAVE__scanf_s_l) && !defined(__NO_ASMNAME)
__LIBC __ATTR_LIBC_SCANF(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _scanf_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME("_scanf_s_l");
#elif (!defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s)) || (__has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)) || (defined(__CRT_HAVE_vscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vscanf) || defined(__CRT_HAVE__vscanf)) || defined(__CRT_HAVE__vscanf_l) || defined(__CRT_HAVE__vscanf_s_l)
#include <local/stdio/_scanf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scanf_l)
#else /* __cplusplus */
#define _scanf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scanf_l))
#endif /* !__cplusplus */
#endif /* _scanf_l... */
#if defined(__CRT_HAVE__fscanf_l)
__LIBC __ATTR_LIBC_SCANF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fscanf_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_fscanf_l");
#elif defined(__CRT_HAVE__fscanf_s_l) && !defined(__NO_ASMNAME)
__LIBC __ATTR_LIBC_SCANF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fscanf_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME("_fscanf_s_l");
#elif ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s)) || defined(__CRT_HAVE__vfscanf_l)
#include <local/stdio/_fscanf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fscanf_l)
#else /* __cplusplus */
#define _fscanf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fscanf_l))
#endif /* !__cplusplus */
#endif /* _fscanf_l... */
#if defined(__CRT_HAVE__snscanf)
__LIBC __ATTR_LIBC_SCANF(3, 4) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, ...) __CASMNAME_SAME("_snscanf");
#elif defined(__CRT_HAVE__snscanf_s) && !defined(__NO_ASMNAME)
__LIBC __ATTR_LIBC_SCANF(3, 4) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, ...) __CASMNAME("_snscanf_s");
#else /* LIBC: _snscanf */
#include <local/stdio/_snscanf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snscanf)
#else /* __cplusplus */
#define _snscanf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snscanf))
#endif /* !__cplusplus */
#endif /* _snscanf... */
#if defined(__CRT_HAVE__snscanf_l)
__LIBC __ATTR_LIBC_SCANF(3, 5) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf_l)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_snscanf_l");
#elif defined(__CRT_HAVE__snscanf_s_l) && !defined(__NO_ASMNAME)
__LIBC __ATTR_LIBC_SCANF(3, 5) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf_l)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME("_snscanf_s_l");
#else /* LIBC: _snscanf_l */
#include <local/stdio/_snscanf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snscanf_l)
#else /* __cplusplus */
#define _snscanf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snscanf_l))
#endif /* !__cplusplus */
#endif /* _snscanf_l... */
#if defined(__CRT_HAVE__scanf_s_l)
__LIBC __ATTR_LIBC_SCANF(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _scanf_s_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_scanf_s_l");
#elif defined(__CRT_HAVE__vscanf_s_l) || defined(__CRT_HAVE__vscanf_l) || (!defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s)) || (__has_builtin(__builtin_vscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vscanf)) || (defined(__CRT_HAVE_vscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vscanf) || defined(__CRT_HAVE__vscanf))
#include <local/stdio/_scanf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scanf_s_l)
#else /* __cplusplus */
#define _scanf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scanf_s_l))
#endif /* !__cplusplus */
#endif /* _scanf_s_l... */
#if defined(__CRT_HAVE__sscanf_s_l)
__LIBC __ATTR_LIBC_SCANF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _sscanf_s_l)(char const *__restrict __input, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_sscanf_s_l");
#else /* LIBC: _sscanf_s_l */
#include <local/stdio/_sscanf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_sscanf_s_l)
#else /* __cplusplus */
#define _sscanf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_sscanf_s_l))
#endif /* !__cplusplus */
#endif /* _sscanf_s_l... */
#if defined(__CRT_HAVE__fscanf_s_l)
__LIBC __ATTR_LIBC_SCANF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fscanf_s_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_fscanf_s_l");
#elif defined(__CRT_HAVE__vfscanf_s_l) || defined(__CRT_HAVE__vfscanf_l) || ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && ((defined(__CRT_HAVE_ungetc_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_ungetc)) || (__has_builtin(__builtin_vfscanf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfscanf)) || (defined(__CRT_HAVE_vfscanf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfscanf) || defined(__CRT_HAVE__vfscanf) || defined(__CRT_HAVE__vfscanf_s))
#include <local/stdio/_fscanf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fscanf_s_l)
#else /* __cplusplus */
#define _fscanf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fscanf_s_l))
#endif /* !__cplusplus */
#endif /* _fscanf_s_l... */
#if defined(__CRT_HAVE__snscanf_s)
__LIBC __ATTR_LIBC_SCANF(3, 4) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf_s)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, ...) __CASMNAME_SAME("_snscanf_s");
#else /* LIBC: _snscanf_s */
#include <local/stdio/_snscanf_s.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snscanf_s)
#else /* __cplusplus */
#define _snscanf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snscanf_s))
#endif /* !__cplusplus */
#endif /* _snscanf_s... */
#if defined(__CRT_HAVE__snscanf_s_l)
__LIBC __ATTR_LIBC_SCANF(3, 5) __ATTR_NONNULL((1, 3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snscanf_s_l)(char const *__restrict __input, size_t __inputlen, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_snscanf_s_l");
#else /* LIBC: _snscanf_s_l */
#include <local/stdio/_snscanf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snscanf_s_l)
#else /* __cplusplus */
#define _snscanf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snscanf_s_l))
#endif /* !__cplusplus */
#endif /* _snscanf_s_l... */

#if defined(__CRT_HAVE__vsprintf_l)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_l,(char *__restrict __buf, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__format,__locale,__args))
#else /* LIBC: _vsprintf_l */
#include <local/stdio/_vsprintf_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsprintf_l, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsprintf_l)(char *__restrict __buf, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsprintf_l))(__buf, __format, __locale, __args); })
#endif /* _vsprintf_l... */
#if defined(__CRT_HAVE__vsprintf_s_l)
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_s_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__bufsize,__format,__locale,__args))
#elif defined(__CRT_HAVE__vsnprintf_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_s_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vsnprintf_l,(__buf,__bufsize,__format,__locale,__args))
#elif defined(__CRT_HAVE__vsnprintf_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_s_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vsnprintf_l,(__buf,__bufsize,__format,__locale,__args))
#else /* LIBC: _vsnprintf_l */
#include <local/stdio/_vsnprintf_l.h>
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsprintf_s_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf_l))(__buf, __bufsize, __format, __locale, __args); }
#endif /* _vsprintf_s_l... */
#if defined(__CRT_HAVE__vsprintf_p)
__CDECLARE(__ATTR_LIBC_PRINTF_P(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_p,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args),(__buf,__bufsize,__format,__args))
#else /* LIBC: _vsprintf_p */
#include <local/stdio/_vsprintf_p.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsprintf_p, __FORCELOCAL __ATTR_LIBC_PRINTF_P(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsprintf_p)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsprintf_p))(__buf, __bufsize, __format, __args); })
#endif /* _vsprintf_p... */
#if defined(__CRT_HAVE__vsprintf_p_l)
__CDECLARE(__ATTR_LIBC_PRINTF_P(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsprintf_p_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__bufsize,__format,__locale,__args))
#else /* LIBC: _vsprintf_p_l */
#include <local/stdio/_vsprintf_p_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsprintf_p_l, __FORCELOCAL __ATTR_LIBC_PRINTF_P(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsprintf_p_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsprintf_p_l))(__buf, __bufsize, __format, __locale, __args); })
#endif /* _vsprintf_p_l... */

#if defined(__CRT_HAVE__sprintf_l)
__LIBC __ATTR_LIBC_PRINTF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _sprintf_l)(char *__restrict __buf, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_sprintf_l");
#else /* LIBC: _sprintf_l */
#include <local/stdio/_sprintf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_sprintf_l)
#else /* __cplusplus */
#define _sprintf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_sprintf_l))
#endif /* !__cplusplus */
#endif /* _sprintf_l... */
#if defined(__CRT_HAVE__sprintf_s_l)
__LIBC __ATTR_LIBC_PRINTF(3, 5) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _sprintf_s_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_sprintf_s_l");
#else /* LIBC: _sprintf_s_l */
#include <local/stdio/_sprintf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_sprintf_s_l)
#else /* __cplusplus */
#define _sprintf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_sprintf_s_l))
#endif /* !__cplusplus */
#endif /* _sprintf_s_l... */
#if defined(__CRT_HAVE__sprintf_p)
__LIBC __ATTR_LIBC_PRINTF_P(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _sprintf_p)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, ...) __CASMNAME_SAME("_sprintf_p");
#else /* LIBC: _sprintf_p */
#include <local/stdio/_sprintf_p.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_sprintf_p)
#else /* __cplusplus */
#define _sprintf_p (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_sprintf_p))
#endif /* !__cplusplus */
#endif /* _sprintf_p... */
#if defined(__CRT_HAVE__sprintf_p_l)
__LIBC __ATTR_LIBC_PRINTF_P(3, 5) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _sprintf_p_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_sprintf_p_l");
#else /* LIBC: _sprintf_p_l */
#include <local/stdio/_sprintf_p_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_sprintf_p_l)
#else /* __cplusplus */
#define _sprintf_p_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_sprintf_p_l))
#endif /* !__cplusplus */
#endif /* _sprintf_p_l... */

#if defined(__CRT_HAVE__vscprintf)
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vscprintf,(char const *__restrict __format, __builtin_va_list __args),(__format,__args))
#else /* LIBC: _vscprintf */
#include <local/stdio/_vscprintf.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vscprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vscprintf)(char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vscprintf))(__format, __args); })
#endif /* _vscprintf... */
#if defined(__CRT_HAVE__scprintf)
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _scprintf)(char const *__restrict __format, ...) __CASMNAME_SAME("_scprintf");
#else /* LIBC: _scprintf */
#include <local/stdio/_scprintf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scprintf)
#else /* __cplusplus */
#define _scprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scprintf))
#endif /* !__cplusplus */
#endif /* _scprintf... */

#if defined(__CRT_HAVE__vscprintf_l)
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vscprintf_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__format,__locale,__args))
#else /* LIBC: _vscprintf_l */
#include <local/stdio/_vscprintf_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vscprintf_l, __FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vscprintf_l)(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vscprintf_l))(__format, __locale, __args); })
#endif /* _vscprintf_l... */
#if defined(__CRT_HAVE__vscprintf_p)
__CDECLARE(__ATTR_LIBC_PRINTF_P(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vscprintf_p,(char const *__restrict __format, __builtin_va_list __args),(__format,__args))
#else /* LIBC: _vscprintf_p */
#include <local/stdio/_vscprintf_p.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vscprintf_p, __FORCELOCAL __ATTR_LIBC_PRINTF_P(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vscprintf_p)(char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vscprintf_p))(__format, __args); })
#endif /* _vscprintf_p... */
#if defined(__CRT_HAVE__vscprintf_p_l)
__CDECLARE(__ATTR_LIBC_PRINTF_P(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vscprintf_p_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__format,__locale,__args))
#else /* LIBC: _vscprintf_p_l */
#include <local/stdio/_vscprintf_p_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vscprintf_p_l, __FORCELOCAL __ATTR_LIBC_PRINTF_P(1, 0) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vscprintf_p_l)(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vscprintf_p_l))(__format, __locale, __args); })
#endif /* _vscprintf_p_l... */
#if defined(__CRT_HAVE__scprintf_l)
__LIBC __ATTR_LIBC_PRINTF(1, 3) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _scprintf_l)(char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_scprintf_l");
#else /* LIBC: _scprintf_l */
#include <local/stdio/_scprintf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scprintf_l)
#else /* __cplusplus */
#define _scprintf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scprintf_l))
#endif /* !__cplusplus */
#endif /* _scprintf_l... */
#if defined(__CRT_HAVE__scprintf_p)
__LIBC __ATTR_LIBC_PRINTF_P(1, 2) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _scprintf_p)(char const *__restrict __format, ...) __CASMNAME_SAME("_scprintf_p");
#else /* LIBC: _scprintf_p */
#include <local/stdio/_scprintf_p.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scprintf_p)
#else /* __cplusplus */
#define _scprintf_p (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scprintf_p))
#endif /* !__cplusplus */
#endif /* _scprintf_p... */
#if defined(__CRT_HAVE__scprintf_p_l)
__LIBC __ATTR_LIBC_PRINTF_P(1, 3) __ATTR_WUNUSED __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _scprintf_p_l)(char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_scprintf_p_l");
#else /* LIBC: _scprintf_p_l */
#include <local/stdio/_scprintf_p_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_scprintf_p_l)
#else /* __cplusplus */
#define _scprintf_p_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_scprintf_p_l))
#endif /* !__cplusplus */
#endif /* _scprintf_p_l... */

#if defined(__CRT_HAVE__vsnprintf)
/* WARNING: This function returns the number of written character. - Not the required buffer size! */
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args),(__buf,__bufsize,__format,__args))
#else /* LIBC: _vsnprintf */
#include <local/stdio/_vsnprintf.h>
/* WARNING: This function returns the number of written character. - Not the required buffer size! */
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsnprintf, __FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf))(__buf, __bufsize, __format, __args); })
#endif /* _vsnprintf... */
#if defined(__CRT_HAVE__vsnprintf_l)
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__bufsize,__format,__locale,__args))
#elif defined(__CRT_HAVE__vsprintf_s_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vsprintf_s_l,(__buf,__bufsize,__format,__locale,__args))
#else /* LIBC: _vsnprintf_l */
#include <local/stdio/_vsnprintf_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsnprintf_l, __FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf_l))(__buf, __bufsize, __format, __locale, __args); })
#endif /* _vsnprintf_l... */
#if defined(__CRT_HAVE__vsnprintf_c)
/* WARNING: This function returns the number of written character. - Not the required buffer size! */
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_c,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args),(__buf,__bufsize,__format,__args))
#elif defined(__CRT_HAVE__vsnprintf)
/* WARNING: This function returns the number of written character. - Not the required buffer size! */
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_c,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args),_vsnprintf,(__buf,__bufsize,__format,__args))
#else /* LIBC: _vsnprintf */
#include <local/stdio/_vsnprintf.h>
/* WARNING: This function returns the number of written character. - Not the required buffer size! */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf_c)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf))(__buf, __bufsize, __format, __args); }
#endif /* _vsnprintf_c... */
#if defined(__CRT_HAVE__vsnprintf_c_l)
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_c_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__bufsize,__format,__locale,__args))
#elif defined(__CRT_HAVE__vsnprintf_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_c_l,(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vsnprintf_l,(__buf,__bufsize,__format,__locale,__args))
#else /* LIBC: _vsnprintf_l */
#include <local/stdio/_vsnprintf_l.h>
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf_c_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf_l))(__buf, __bufsize, __format, __locale, __args); }
#endif /* _vsnprintf_c_l... */
#if defined(__CRT_HAVE__vsnprintf_s)
__CDECLARE(__ATTR_LIBC_PRINTF(4, 0) __ATTR_NONNULL((4)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_s,(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __builtin_va_list __args),(__buf,__bufsize,__buflen,__format,__args))
#else /* LIBC: _vsnprintf_s */
#include <local/stdio/_vsnprintf_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsnprintf_s, __FORCELOCAL __ATTR_LIBC_PRINTF(4, 0) __ATTR_NONNULL((4)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf_s)(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf_s))(__buf, __bufsize, __buflen, __format, __args); })
#endif /* _vsnprintf_s... */
#if defined(__CRT_HAVE__vsnprintf_s_l)
__CDECLARE(__ATTR_LIBC_PRINTF(4, 0) __ATTR_NONNULL((4)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,_vsnprintf_s_l,(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__buf,__bufsize,__buflen,__format,__locale,__args))
#else /* LIBC: _vsnprintf_s_l */
#include <local/stdio/_vsnprintf_s_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vsnprintf_s_l, __FORCELOCAL __ATTR_LIBC_PRINTF(4, 0) __ATTR_NONNULL((4)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL _vsnprintf_s_l)(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vsnprintf_s_l))(__buf, __bufsize, __buflen, __format, __locale, __args); })
#endif /* _vsnprintf_s_l... */
#if defined(__CRT_HAVE__snprintf)
__LIBC __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, ...) __CASMNAME_SAME("_snprintf");
#else /* LIBC: _snprintf */
#include <local/stdio/_snprintf.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf)
#else /* __cplusplus */
#define _snprintf (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf))
#endif /* !__cplusplus */
#endif /* _snprintf... */
#if defined(__CRT_HAVE__snprintf_l)
__LIBC __ATTR_LIBC_PRINTF(3, 5) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_snprintf_l");
#else /* LIBC: _snprintf_l */
#include <local/stdio/_snprintf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf_l)
#else /* __cplusplus */
#define _snprintf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf_l))
#endif /* !__cplusplus */
#endif /* _snprintf_l... */
#if defined(__CRT_HAVE__snprintf_c)
__LIBC __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf_c)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, ...) __CASMNAME_SAME("_snprintf_c");
#else /* LIBC: _snprintf_c */
#include <local/stdio/_snprintf_c.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf_c)
#else /* __cplusplus */
#define _snprintf_c (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf_c))
#endif /* !__cplusplus */
#endif /* _snprintf_c... */
#if defined(__CRT_HAVE__snprintf_c_l)
__LIBC __ATTR_LIBC_PRINTF(3, 5) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf_c_l)(char *__restrict __buf, size_t __bufsize, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_snprintf_c_l");
#else /* LIBC: _snprintf_c_l */
#include <local/stdio/_snprintf_c_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf_c_l)
#else /* __cplusplus */
#define _snprintf_c_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf_c_l))
#endif /* !__cplusplus */
#endif /* _snprintf_c_l... */
#if defined(__CRT_HAVE__snprintf_s)
__LIBC __ATTR_LIBC_PRINTF(4, 5) __ATTR_NONNULL((4)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf_s)(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, ...) __CASMNAME_SAME("_snprintf_s");
#else /* LIBC: _snprintf_s */
#include <local/stdio/_snprintf_s.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf_s)
#else /* __cplusplus */
#define _snprintf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf_s))
#endif /* !__cplusplus */
#endif /* _snprintf_s... */
#if defined(__CRT_HAVE__snprintf_s_l)
__LIBC __ATTR_LIBC_PRINTF(4, 6) __ATTR_NONNULL((4)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL _snprintf_s_l)(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __locale_t __locale, ...) __CASMNAME_SAME("_snprintf_s_l");
#else /* LIBC: _snprintf_s_l */
#include <local/stdio/_snprintf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_snprintf_s_l)
#else /* __cplusplus */
#define _snprintf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_snprintf_s_l))
#endif /* !__cplusplus */
#endif /* _snprintf_s_l... */

#if defined(__CRT_HAVE__vprintf_l)
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vprintf_s_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vprintf_s_l,(__format,__locale,__args)) __THROWS(...)
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
#include <local/stdio/_vprintf_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vprintf_l, __FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vprintf_l)(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vprintf_l))(__format, __locale, __args); })
#endif /* _vprintf_l... */
#if defined(__CRT_HAVE__vprintf_s_l)
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_s_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vprintf_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_s_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vprintf_l,(__format,__locale,__args)) __THROWS(...)
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
#include <local/stdio/_vprintf_l.h>
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vprintf_s_l)(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vprintf_l))(__format, __locale, __args); }
#endif /* _vprintf_s_l... */
#if defined(__CRT_HAVE__vprintf_p)
__CDECLARE(__ATTR_LIBC_PRINTF_P(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_p,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p))
#include <local/stdio/_vprintf_p.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vprintf_p, __FORCELOCAL __ATTR_LIBC_PRINTF_P(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vprintf_p)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vprintf_p))(__format, __args); })
#endif /* _vprintf_p... */
#if defined(__CRT_HAVE__vprintf_p_l)
__CDECLARE(__ATTR_LIBC_PRINTF_P(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,_vprintf_p_l,(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__format,__locale,__args)) __THROWS(...)
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p)) || defined(__CRT_HAVE__vprintf_p))
#include <local/stdio/_vprintf_p_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vprintf_p_l, __FORCELOCAL __ATTR_LIBC_PRINTF_P(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vprintf_p_l)(char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vprintf_p_l))(__format, __locale, __args); })
#endif /* _vprintf_p_l... */
#if defined(__CRT_HAVE__printf_l)
__LIBC __ATTR_LIBC_PRINTF(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _printf_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_printf_l");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s)) || defined(__CRT_HAVE__vprintf_l) || defined(__CRT_HAVE__vprintf_s_l)
#include <local/stdio/_printf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_printf_l)
#else /* __cplusplus */
#define _printf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_printf_l))
#endif /* !__cplusplus */
#endif /* _printf_l... */
#if defined(__CRT_HAVE__printf_s_l)
__LIBC __ATTR_LIBC_PRINTF(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _printf_s_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_printf_s_l");
#elif defined(__CRT_HAVE__vprintf_s_l) || defined(__CRT_HAVE__vprintf_l) || (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
#include <local/stdio/_printf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_printf_s_l)
#else /* __cplusplus */
#define _printf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_printf_s_l))
#endif /* !__cplusplus */
#endif /* _printf_s_l... */
#if defined(__CRT_HAVE__printf_p)
__LIBC __ATTR_LIBC_PRINTF_P(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _printf_p)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("_printf_p");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p)) || defined(__CRT_HAVE__vprintf_p))
#include <local/stdio/_printf_p.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_printf_p)
#else /* __cplusplus */
#define _printf_p (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_printf_p))
#endif /* !__cplusplus */
#endif /* _printf_p... */
#if defined(__CRT_HAVE__printf_p_l)
__LIBC __ATTR_LIBC_PRINTF_P(1, 3) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _printf_p_l)(char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_printf_p_l");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p)) || defined(__CRT_HAVE__vprintf_p)) || defined(__CRT_HAVE__vprintf_p_l)
#include <local/stdio/_printf_p_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_printf_p_l)
#else /* __cplusplus */
#define _printf_p_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_printf_p_l))
#endif /* !__cplusplus */
#endif /* _printf_p_l... */

#if defined(__CRT_HAVE__vfprintf_l)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_l,(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__stream,__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfprintf_s_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_l,(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vfprintf_s_l,(__stream,__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
#include <local/stdio/_vfprintf_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vfprintf_l, __FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vfprintf_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vfprintf_l))(__stream, __format, __locale, __args); })
#endif /* _vfprintf_l... */
#if defined(__CRT_HAVE__vfprintf_s_l)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_s_l,(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__stream,__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE__vfprintf_l)
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_s_l,(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),_vfprintf_l,(__stream,__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
#include <local/stdio/_vfprintf_l.h>
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vfprintf_s_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vfprintf_l))(__stream, __format, __locale, __args); }
#endif /* _vfprintf_s_l... */
#if defined(__CRT_HAVE__vfprintf_p)
__CDECLARE(__ATTR_LIBC_PRINTF_P(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_p,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked)))
#include <local/stdio/_vfprintf_p.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vfprintf_p, __FORCELOCAL __ATTR_LIBC_PRINTF_P(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vfprintf_p)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vfprintf_p))(__stream, __format, __args); })
#endif /* _vfprintf_p... */
#if defined(__CRT_HAVE__vfprintf_p_l)
__CDECLARE(__ATTR_LIBC_PRINTF_P(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,_vfprintf_p_l,(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args),(__stream,__format,__locale,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p)
#include <local/stdio/_vfprintf_p_l.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_vfprintf_p_l, __FORCELOCAL __ATTR_LIBC_PRINTF_P(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL _vfprintf_p_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, __builtin_va_list __args) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_vfprintf_p_l))(__stream, __format, __locale, __args); })
#endif /* _vfprintf_p_l... */
#if defined(__CRT_HAVE__fprintf_l)
__LIBC __ATTR_LIBC_PRINTF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fprintf_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_fprintf_l");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s) || defined(__CRT_HAVE__vfprintf_l) || defined(__CRT_HAVE__vfprintf_s_l)
#include <local/stdio/_fprintf_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fprintf_l)
#else /* __cplusplus */
#define _fprintf_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fprintf_l))
#endif /* !__cplusplus */
#endif /* _fprintf_l... */
#if defined(__CRT_HAVE__fprintf_s_l)
__LIBC __ATTR_LIBC_PRINTF(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fprintf_s_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_fprintf_s_l");
#elif defined(__CRT_HAVE__vfprintf_s_l) || defined(__CRT_HAVE__vfprintf_l) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
#include <local/stdio/_fprintf_s_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fprintf_s_l)
#else /* __cplusplus */
#define _fprintf_s_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fprintf_s_l))
#endif /* !__cplusplus */
#endif /* _fprintf_s_l... */
#if defined(__CRT_HAVE__fprintf_p)
__LIBC __ATTR_LIBC_PRINTF_P(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fprintf_p)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("_fprintf_p");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p)
#include <local/stdio/_fprintf_p.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fprintf_p)
#else /* __cplusplus */
#define _fprintf_p (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fprintf_p))
#endif /* !__cplusplus */
#endif /* _fprintf_p... */
#if defined(__CRT_HAVE__fprintf_p_l)
__LIBC __ATTR_LIBC_PRINTF_P(2, 4) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL _fprintf_p_l)(__FILE *__restrict __stream, char const *__restrict __format, __locale_t __locale, ...) __THROWS(...) __CASMNAME_SAME("_fprintf_p_l");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE__vfprintf_p) || defined(__CRT_HAVE__vfprintf_p_l)
#include <local/stdio/_fprintf_p_l.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(_fprintf_p_l)
#else /* __cplusplus */
#define _fprintf_p_l (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fprintf_p_l))
#endif /* !__cplusplus */
#endif /* _fprintf_p_l... */

#ifdef __USE_DOS_SLIB
#if defined(__CRT_HAVE_fopen_s)
__CDECLARE(__ATTR_NONNULL((1, 2, 3)),errno_t,__NOTHROW_RPC,fopen_s,(__FILE **__pstream, char const *__filename, char const *__modes),(__pstream,__filename,__modes))
#endif /* fopen_s... */
#if defined(__CRT_HAVE_freopen_s)
__CDECLARE(__ATTR_NONNULL((1, 2, 3, 4)),errno_t,__NOTHROW_RPC,freopen_s,(__FILE **__pstream, char const *__filename, char const *__modes, __FILE *__oldstream),(__pstream,__filename,__modes,__oldstream))
#endif /* freopen_s... */
#if defined(__CRT_HAVE_tmpnam_s)
__CDECLARE(__ATTR_NONNULL((1)),errno_t,__NOTHROW_NCX,tmpnam_s,(char *__restrict __buf, rsize_t __bufsize),(__buf,__bufsize))
#endif /* tmpnam_s... */

#if defined(__CRT_HAVE_clearerr_s)
__CDECLARE(__ATTR_NONNULL((1)),errno_t,__NOTHROW_NCX,clearerr_s,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_clearerr) || defined(__CRT_HAVE_clearerr_unlocked)
#include <local/stdio/clearerr_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(clearerr_s, __FORCELOCAL __ATTR_NONNULL((1)) errno_t __NOTHROW_NCX(__LIBCCALL clearerr_s)(__FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(clearerr_s))(__stream); })
#endif /* clearerr_s... */
#if defined(__CRT_HAVE_tmpfile_s)
__CDECLARE(__ATTR_NONNULL((1)),errno_t,__NOTHROW_RPC,tmpfile_s,(__FILE **__pstream),(__pstream))
#elif defined(__CRT_HAVE_tmpfile) || defined(__CRT_HAVE_tmpfile64)
#include <local/stdio/tmpfile_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(tmpfile_s, __FORCELOCAL __ATTR_NONNULL((1)) errno_t __NOTHROW_RPC(__LIBCCALL tmpfile_s)(__FILE **__pstream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(tmpfile_s))(__pstream); })
#endif /* tmpfile_s... */
#if defined(__CRT_HAVE_fread_s)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 5)),size_t,__NOTHROW_RPC,fread_s,(void *__restrict __buf, size_t __bufsize, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__bufsize,__elemsize,__elemcount,__stream))
#elif defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked)))
#include <local/stdio/fread_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(fread_s, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 5)) size_t __NOTHROW_RPC(__LIBCCALL fread_s)(void *__restrict __buf, size_t __bufsize, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fread_s))(__buf, __bufsize, __elemsize, __elemcount, __stream); })
#endif /* fread_s... */
#if defined(__CRT_HAVE_gets_s)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1)),char *,__NOTHROW_RPC,gets_s,(char *__restrict __buf, rsize_t __bufsize),(__buf,__bufsize))
#elif !defined(__NO_STDSTREAMS) && ((defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock)))) && (defined(__CRT_HAVE_ferror) || defined(__CRT_HAVE_ferror_unlocked)) || defined(__CRT_HAVE_fgets) || defined(__CRT_HAVE_fgets_unlocked))
#include <local/stdio/gets_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(gets_s, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1)) char *__NOTHROW_RPC(__LIBCCALL gets_s)(char *__restrict __buf, rsize_t __bufsize) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(gets_s))(__buf, __bufsize); })
#endif /* gets_s... */
#if __has_builtin(__builtin_printf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_printf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL printf_s)(char const *__restrict __format, ...) __THROWS(...) { return __builtin_printf(__format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_printf_s)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL printf_s)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("printf_s");
#elif defined(__CRT_HAVE_printf) && !defined(__NO_ASMNAME)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL printf_s)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME("printf");
#elif (!defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)) || (__has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)) || (defined(__CRT_HAVE_vprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vprintf) || defined(__CRT_HAVE_vprintf_s))
#include <local/stdio/printf.h>
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
#define printf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(printf))
#endif /* printf_s... */
#if __has_builtin(__builtin_vprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vprintf_s)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vprintf(__format, __args); }
#elif defined(__CRT_HAVE_vprintf_s)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vprintf_s,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vprintf)
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vprintf_s,(char const *__restrict __format, __builtin_va_list __args),vprintf,(__format,__args)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s))
#include <local/stdio/vprintf.h>
/* Print data to `stdout', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__LIBCCALL vprintf_s)(char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__STDC_INT_AS_SIZE_T)(__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vprintf))(__format, __args); }
#endif /* vprintf_s... */
#if __has_builtin(__builtin_fprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fprintf_s)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) { return __builtin_fprintf(__stream, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_fprintf_s)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fprintf_s)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fprintf_s");
#elif defined(__CRT_HAVE_fprintf) && !defined(__NO_ASMNAME)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fprintf_s)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME("fprintf");
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked) || (__has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)) || (defined(__CRT_HAVE_vfprintf_unlocked) && defined(__USE_STDIO_UNLOCKED)) || defined(__CRT_HAVE_vfprintf) || defined(__CRT_HAVE_vfprintf_s)
#include <local/stdio/fprintf.h>
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
#define fprintf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fprintf))
#endif /* fprintf_s... */
#if __has_builtin(__builtin_vfprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vfprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfprintf_s)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return __builtin_vfprintf(__stream, __format, __args); }
#elif defined(__CRT_HAVE_vfprintf_s)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfprintf_s,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_vfprintf)
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__CREDIRECT(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfprintf_s,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),vfprintf,(__stream,__format,__args)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock)|| defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked))) || defined(__CRT_HAVE_file_printer) || defined(__CRT_HAVE_file_printer_unlocked)
#include <local/stdio/vfprintf.h>
/* Print data to `STREAM', following `FORMAT'
 * Return the number of successfully printed bytes */
__FORCELOCAL __ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__LIBCCALL vfprintf_s)(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args) __THROWS(...) { return (__STDC_INT_AS_SIZE_T)(__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vfprintf))(__stream, __format, __args); }
#endif /* vfprintf_s... */
#if __has_builtin(__builtin_snprintf) && __has_builtin(__builtin_va_arg_pack) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_snprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sprintf_s)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, ...) { return __builtin_snprintf(__buf, __buflen, __format, __builtin_va_arg_pack()); }
#elif defined(__CRT_HAVE_sprintf_s)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__LIBC __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sprintf_s)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, ...) __CASMNAME_SAME("sprintf_s");
#elif defined(__CRT_HAVE_snprintf) && !defined(__NO_ASMNAME)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__LIBC __ATTR_LIBC_PRINTF(3, 4) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sprintf_s)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, ...) __CASMNAME("snprintf");
#else /* LIBC: snprintf */
#include <local/stdio/snprintf.h>
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
#define sprintf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(snprintf))
#endif /* sprintf_s... */
#if __has_builtin(__builtin_vsnprintf) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_vsnprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsprintf_s)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args) { return __builtin_vsnprintf(__buf, __buflen, __format, __args); }
#elif defined(__CRT_HAVE_vsprintf_s)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__CDECLARE(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsprintf_s,(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args),(__buf,__buflen,__format,__args))
#elif defined(__CRT_HAVE_vsnprintf)
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__CREDIRECT(__ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsprintf_s,(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args),vsnprintf,(__buf,__buflen,__format,__args))
#else /* LIBC: vsnprintf */
#include <local/stdio/vsnprintf.h>
/* Print a formatted string to a given in-member string buffer `BUF'
 * Always return the REQUIRED buffer size (excluding a trailing NUL-character), and never write more than `BUFLEN' characters to `BUF' */
__FORCELOCAL __ATTR_LIBC_PRINTF(3, 0) __ATTR_NONNULL((3)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__LIBCCALL vsprintf_s)(char *__restrict __buf, size_t __buflen, char const *__restrict __format, __builtin_va_list __args) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(vsnprintf))(__buf, __buflen, __format, __args); }
#endif /* vsprintf_s... */
#if defined(__CRT_HAVE_fscanf_s)
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T (__VLIBCCALL fscanf_s)(__FILE *__restrict __stream, char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("fscanf_s");
#elif defined(__CRT_HAVE_vfscanf_s)
#include <local/stdio/fscanf_s.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(fscanf_s)
#else /* __cplusplus */
#define fscanf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fscanf_s))
#endif /* !__cplusplus */
#endif /* fscanf_s... */
#if defined(__CRT_HAVE_vfscanf_s)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,,vfscanf_s,(__FILE *__restrict __stream, char const *__restrict __format, __builtin_va_list __args),(__stream,__format,__args)) __THROWS(...)
#endif /* vfscanf_s... */
#if defined(__CRT_HAVE_scanf_s)
__LIBC __ATTR_LIBC_PRINTF(1, 2) __ATTR_NONNULL((1)) __STDC_INT_AS_SIZE_T (__VLIBCCALL scanf_s)(char const *__restrict __format, ...) __THROWS(...) __CASMNAME_SAME("scanf_s");
#elif defined(__CRT_HAVE_vscanf_s)
#include <local/stdio/scanf_s.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(scanf_s)
#else /* __cplusplus */
#define scanf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(scanf_s))
#endif /* !__cplusplus */
#endif /* scanf_s... */
#if defined(__CRT_HAVE_vscanf_s)
__CDECLARE(__ATTR_LIBC_PRINTF(1, 0) __ATTR_NONNULL((1)),__STDC_INT_AS_SIZE_T,,vscanf_s,(char const *__restrict __format, __builtin_va_list __args),(__format,__args)) __THROWS(...)
#endif /* vscanf_s... */
#if defined(__CRT_HAVE_sscanf_s)
__LIBC __ATTR_LIBC_PRINTF(2, 3) __ATTR_NONNULL((1, 2)) __STDC_INT_AS_SIZE_T __NOTHROW_NCX(__VLIBCCALL sscanf_s)(char const *__restrict __input, char const *__restrict __format, ...) __CASMNAME_SAME("sscanf_s");
#elif defined(__CRT_HAVE_vsscanf_s)
#include <local/stdio/sscanf_s.h>
#ifdef __cplusplus
__NAMESPACE_LOCAL_USING(sscanf_s)
#else /* __cplusplus */
#define sscanf_s (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(sscanf_s))
#endif /* !__cplusplus */
#endif /* sscanf_s... */
#if defined(__CRT_HAVE_vsscanf_s)
__CDECLARE(__ATTR_LIBC_PRINTF(2, 0) __ATTR_NONNULL((1, 2)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsscanf_s,(char const *__restrict __input, char const *__restrict __format, __builtin_va_list __args),(__input,__format,__args))
#endif /* vsscanf_s... */
#if defined(__CRT_HAVE_vsnprintf_s)
__CDECLARE(__ATTR_LIBC_PRINTF(4, 0) __ATTR_NONNULL((4)),__STDC_INT_AS_SIZE_T,__NOTHROW_NCX,vsnprintf_s,(char *__restrict __buf, size_t __bufsize, size_t __buflen, char const *__restrict __format, __builtin_va_list __args),(__buf,__bufsize,__buflen,__format,__args))
#endif /* vsnprintf_s... */
#endif /* __USE_DOS_SLIB */

#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED 1
#if defined(__CRT_HAVE__wperror)
__CDECLARE_VOID(__ATTR_COLD,,_wperror,(__WCHAR_TYPE__ const *__restrict __message),(__message)) __THROWS(...)
#endif /* _wperror... */
#endif /* !_CRT_WPERROR_DEFINED */

#endif /* _STDIO_DEFINED */
#if defined(__CRT_HAVE_fgetc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fgetc_nolock,(__FILE *__restrict __stream),fgetc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fgetc_nolock,(__FILE *__restrict __stream),getc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fgetc_nolock,(__FILE *__restrict __stream),getc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fgetc_nolock,(__FILE *__restrict __stream),fgetc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/fgetc_unlocked.h>
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL _fgetc_nolock)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc_unlocked))(__stream); }
#endif /* _fgetc_nolock... */
#if __has_builtin(__builtin_fputc_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL _fputc_nolock)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc_unlocked(__ch, __stream); }
#elif defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_fputc_nolock,(int __ch, __FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_fputc_nolock,(int __ch, __FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_fputc_nolock,(int __ch, __FILE *__restrict __stream),putc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_fputc_nolock,(int __ch, __FILE *__restrict __stream),fputc,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/fputc_unlocked.h>
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL _fputc_nolock)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc_unlocked))(__ch, __stream); }
#endif /* _fputc_nolock... */
#if defined(__CRT_HAVE_fgetc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_getc_nolock,(__FILE *__restrict __stream),fgetc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc_unlocked)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_getc_nolock,(__FILE *__restrict __stream),getc_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_getc)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_getc_nolock,(__FILE *__restrict __stream),getc,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc)
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_getc_nolock,(__FILE *__restrict __stream),fgetc,(__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/fgetc_unlocked.h>
/* Same as `fgetc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL _getc_nolock)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fgetc_unlocked))(__stream); }
#endif /* _getc_nolock... */
#if __has_builtin(__builtin_fputc_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL _putc_nolock)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fputc_unlocked(__ch, __stream); }
#elif defined(__CRT_HAVE_fputc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_putc_nolock,(int __ch, __FILE *__restrict __stream),fputc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc_unlocked)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_putc_nolock,(int __ch, __FILE *__restrict __stream),putc_unlocked,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_putc)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_putc_nolock,(int __ch, __FILE *__restrict __stream),putc,(__ch,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc)
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_NONNULL((2)),int,,_putc_nolock,(int __ch, __FILE *__restrict __stream),fputc,(__ch,__stream)) __THROWS(...)
#elif ((defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/fputc_unlocked.h>
/* Same as `fputc()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_NONNULL((2)) int (__LIBCCALL _putc_nolock)(int __ch, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fputc_unlocked))(__ch, __stream); }
#endif /* _putc_nolock... */
#if defined(__CRT_HAVE_getchar_unlocked)
/* Same as `getchar()', but performs I/O without acquiring a lock to `stdin' */
__CREDIRECT(,int,,_getchar_nolock,(void),getchar_unlocked,()) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s))
#include <local/stdio/getchar_unlocked.h>
/* Same as `getchar()', but performs I/O without acquiring a lock to `stdin' */
__FORCELOCAL int (__LIBCCALL _getchar_nolock)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getchar_unlocked))(); }
#endif /* _getchar_nolock... */
#if __has_builtin(__builtin_putchar_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_putchar_unlocked)
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__FORCELOCAL int (__LIBCCALL _putchar_nolock)(int __ch) __THROWS(...) { return __builtin_putchar_unlocked(__ch); }
#elif defined(__CRT_HAVE_putchar_unlocked)
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__CREDIRECT(,int,,_putchar_nolock,(int __ch),putchar_unlocked,(__ch)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s))
#include <local/stdio/putchar_unlocked.h>
/* Same as `putchar()', but performs I/O without acquiring a lock to `stdout' */
__FORCELOCAL int (__LIBCCALL _putchar_nolock)(int __ch) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putchar_unlocked))(__ch); }
#endif /* _putchar_nolock... */
#if defined(__CRT_HAVE__lock_file)
/* Acquire a lock to `STREAM' and block until doing so succeeds */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_RPC,_lock_file,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_flockfile)
/* Acquire a lock to `STREAM' and block until doing so succeeds */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_RPC,_lock_file,(__FILE *__restrict __stream),flockfile,(__stream))
#endif /* _lock_file... */
#if defined(__CRT_HAVE__unlock_file)
/* Release a previously acquired lock from `STREAM' */
__CDECLARE_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,_unlock_file,(__FILE *__restrict __stream),(__stream))
#elif defined(__CRT_HAVE_funlockfile)
/* Release a previously acquired lock from `STREAM' */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),__NOTHROW_NCX,_unlock_file,(__FILE *__restrict __stream),funlockfile,(__stream))
#endif /* _unlock_file... */
#if defined(__CRT_HAVE__fclose_nolock)
/* Close and destroy a given file `STREAM' */
__CDECLARE(__ATTR_NONNULL((1)),int,,_fclose_nolock,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fclose)
/* Close and destroy a given file `STREAM' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fclose_nolock,(__FILE *__restrict __stream),fclose,(__stream)) __THROWS(...)
#endif /* _fclose_nolock... */
#if defined(__CRT_HAVE_fflush_unlocked)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fflush_nolock,(__FILE *__restrict __stream),fflush_unlocked,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__fflush_nolock)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CDECLARE(__ATTR_NONNULL((1)),int,,_fflush_nolock,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fflush)
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fflush_nolock,(__FILE *__restrict __stream),fflush,(__stream)) __THROWS(...)
#else /* LIBC: fflush */
#include <local/stdio/fflush.h>
/* Flush any unwritten data from `STREAM' to the underlying filesystem/TTY */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL _fflush_nolock)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fflush))((__FILE *)__stream); }
#endif /* _fflush_nolock... */
#if defined(__CRT_HAVE__fread_nolock)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fread_nolock,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread_unlocked)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fread_nolock,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fread_unlocked,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fread_nolock,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fread,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread_s)
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fread_nolock,(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fread_s,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s)
#include <local/stdio/fread_unlocked.h>
/* Same as `fread()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL _fread_nolock)(void *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fread_unlocked))(__buf, __elemsize, __elemcount, __stream); }
#endif /* _fread_nolock... */
#if __has_builtin(__builtin_fwrite_unlocked) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_fwrite_unlocked)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL _fwrite_nolock)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return __builtin_fwrite_unlocked(__buf, __elemsize, __elemcount, __stream); }
#elif defined(__CRT_HAVE__fwrite_nolock)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fwrite_nolock,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_unlocked)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fwrite_nolock,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fwrite_unlocked,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fwrite_nolock,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fwrite,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fwrite_s)
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__CREDIRECT(__ATTR_WUNUSED __ATTR_NONNULL((1, 4)),size_t,,_fwrite_nolock,(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),fwrite_s,(__buf,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s)
#include <local/stdio/fwrite_unlocked.h>
/* Same as `fwrite()', but performs I/O without acquiring a lock to `STREAM' */
__FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 4)) size_t (__LIBCCALL _fwrite_nolock)(void const *__restrict __buf, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fwrite_unlocked))(__buf, __elemsize, __elemcount, __stream); }
#endif /* _fwrite_nolock... */
#if defined(__CRT_HAVE__fread_nolock_s)
__CDECLARE(__ATTR_WUNUSED __ATTR_NONNULL((1, 5)),size_t,,_fread_nolock_s,(void *__restrict __buf, size_t __bufsize, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream),(__buf,__bufsize,__elemsize,__elemcount,__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock) || defined(__CRT_HAVE_fread) || defined(__CRT_HAVE_fread_s) || defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || (defined(__CRT_DOS) && defined(__CRT_HAVE__filbuf)) || defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc)
#include <local/stdio/_fread_nolock_s.h>
__NAMESPACE_LOCAL_USING_OR_IMPL(_fread_nolock_s, __FORCELOCAL __ATTR_WUNUSED __ATTR_NONNULL((1, 5)) size_t (__LIBCCALL _fread_nolock_s)(void *__restrict __buf, size_t __bufsize, size_t __elemsize, size_t __elemcount, __FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_fread_nolock_s))(__buf, __bufsize, __elemsize, __elemcount, __stream); })
#endif /* _fread_nolock_s... */
#if defined(__CRT_HAVE__fseek_nolock)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE_VOID(__ATTR_NONNULL((1)),,_fseek_nolock,(__FILE *__restrict __stream, long int __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseek)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),,_fseek_nolock,(__FILE *__restrict __stream, long int __off, int __whence),fseek,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko) && (__SIZEOF_LONG__ == 4)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),,_fseek_nolock,(__FILE *__restrict __stream, long int __off, int __whence),fseeko,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64) && (__SIZEOF_LONG__ == 8)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),,_fseek_nolock,(__FILE *__restrict __stream, long int __off, int __whence),fseeko64,(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE__fseeki64) && (__SIZEOF_LONG__ == 8)
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT_VOID(__ATTR_NONNULL((1)),,_fseek_nolock,(__FILE *__restrict __stream, long int __off, int __whence),_fseeki64,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseeko) || defined(__CRT_HAVE_fseeko64) || defined(__CRT_HAVE__fseeki64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseeko_unlocked) || defined(__CRT_HAVE_fseeko64_unlocked))))
#include <local/stdio/fseek.h>
/* Change the current in-file position of `STREAM' as a byte-offet from the start of the file */
__FORCELOCAL __ATTR_NONNULL((1)) void (__LIBCCALL _fseek_nolock)(__FILE *__restrict __stream, long int __off, int __whence) __THROWS(...) { (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseek))(__stream, __off, __whence); }
#endif /* _fseek_nolock... */
#if defined(__CRT_HAVE__ftell_nolock)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CDECLARE(__ATTR_NONNULL((1)),long int,,_ftell_nolock,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftell)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),long int,,_ftell_nolock,(__FILE *__restrict __stream),ftell,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello) && (__SIZEOF_LONG__ == 4)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),long int,,_ftell_nolock,(__FILE *__restrict __stream),ftello,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64) && (__SIZEOF_LONG__ == 8)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),long int,,_ftell_nolock,(__FILE *__restrict __stream),ftello64,(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE__ftelli64) && (__SIZEOF_LONG__ == 8)
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__CREDIRECT(__ATTR_NONNULL((1)),long int,,_ftell_nolock,(__FILE *__restrict __stream),_ftelli64,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_ftello) || defined(__CRT_HAVE_ftello64) || defined(__CRT_HAVE__ftelli64) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_ftello_unlocked) || defined(__CRT_HAVE_ftello64_unlocked))))
#include <local/stdio/ftell.h>
/* Return the current in-file position of `STREAM' as a byte-offet from the start of the file */
__FORCELOCAL __ATTR_NONNULL((1)) long int (__LIBCCALL _ftell_nolock)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftell))(__stream); }
#endif /* _ftell_nolock... */
#if defined(__CRT_HAVE__fseeki64_nolock)
/* 64-bit variant of `fseeko' */
__CDECLARE(__ATTR_NONNULL((1)),int,,_fseeki64_nolock,(__FILE *__restrict __stream, __off64_t __off, int __whence),(__stream,__off,__whence)) __THROWS(...)
#elif defined(__CRT_HAVE_fseeko64)
/* 64-bit variant of `fseeko' */
__CREDIRECT(__ATTR_NONNULL((1)),int,,_fseeki64_nolock,(__FILE *__restrict __stream, __off64_t __off, int __whence),fseeko64,(__stream,__off,__whence)) __THROWS(...)
#elif (defined(__CRT_HAVE_fseek) || defined(__CRT_HAVE_fseeko) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fseek_unlocked) || defined(__CRT_HAVE_fseeko_unlocked))))
#include <local/stdio/fseeko64.h>
/* 64-bit variant of `fseeko' */
__FORCELOCAL __ATTR_NONNULL((1)) int (__LIBCCALL _fseeki64_nolock)(__FILE *__restrict __stream, __off64_t __off, int __whence) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(fseeko64))(__stream, __off, __whence); }
#endif /* _fseeki64_nolock... */
#if defined(__CRT_HAVE__ftelli64_nolock)
/* 64-bit variant of `ftello' */
__CDECLARE(__ATTR_NONNULL((1)),__off64_t,,_ftelli64_nolock,(__FILE *__restrict __stream),(__stream)) __THROWS(...)
#elif defined(__CRT_HAVE_ftello64)
/* 64-bit variant of `ftello' */
__CREDIRECT(__ATTR_NONNULL((1)),__off64_t,,_ftelli64_nolock,(__FILE *__restrict __stream),ftello64,(__stream)) __THROWS(...)
#elif (defined(__CRT_HAVE_fgetpos64) || defined(__CRT_HAVE_fgetpos) || defined(__CRT_HAVE_ftell) || defined(__CRT_HAVE_ftello) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetpos64_unlocked) || defined(__CRT_HAVE_fgetpos_unlocked) || defined(__CRT_HAVE_ftell_unlocked) || defined(__CRT_HAVE_ftello_unlocked))))
#include <local/stdio/ftello64.h>
/* 64-bit variant of `ftello' */
__FORCELOCAL __ATTR_NONNULL((1)) __off64_t (__LIBCCALL _ftelli64_nolock)(__FILE *__restrict __stream) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(ftello64))(__stream); }
#endif /* _ftelli64_nolock... */
#if defined(__CRT_HAVE__ungetc_nolock)
/* Unget a single character byte of data previously returned by `getc()' */
__CDECLARE(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,_ungetc_nolock,(int __ch, __FILE *__restrict __stream),(__ch,__stream))
#elif defined(__CRT_HAVE_ungetc)
/* Unget a single character byte of data previously returned by `getc()' */
__CREDIRECT(__ATTR_NONNULL((2)),int,__NOTHROW_NCX,_ungetc_nolock,(int __ch, __FILE *__restrict __stream),ungetc,(__ch,__stream))
#endif /* _ungetc_nolock... */
#if defined(__CRT_HAVE_getchar)
/* Alias for `fgetc(stdin)' */
__CREDIRECT(,int,,fgetchar,(void),getchar,()) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fgetc) || defined(__CRT_HAVE_getc) || defined(__CRT_HAVE_fread) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fgetc_unlocked) || defined(__CRT_HAVE_getc_unlocked) || defined(__CRT_HAVE_fread_unlocked) || defined(__CRT_HAVE__fread_nolock))))
#include <local/stdio/getchar.h>
/* Alias for `fgetc(stdin)' */
__FORCELOCAL int (__LIBCCALL fgetchar)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(getchar))(); }
#endif /* fgetchar... */
#if __has_builtin(__builtin_putchar) && defined(__LIBC_BIND_CRTBUILTINS) && defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__FORCELOCAL int (__LIBCCALL fputchar)(int __ch) __THROWS(...) { return __builtin_putchar(__ch); }
#elif defined(__CRT_HAVE_putchar)
/* Alias for `fputc(CH, stdout)' */
__CREDIRECT(,int,,fputchar,(int __ch),putchar,(__ch)) __THROWS(...)
#elif !defined(__NO_STDSTREAMS) && (defined(__CRT_HAVE_fputc) || defined(__CRT_HAVE_putc) || (defined(__CRT_DOS) && defined(__CRT_HAVE__flsbuf)) || defined(__CRT_HAVE_fwrite) || defined(__CRT_HAVE_fwrite_s) || (defined(__USE_STDIO_UNLOCKED) && (defined(__CRT_HAVE_fputc_unlocked) || defined(__CRT_HAVE_putc_unlocked) || defined(__CRT_HAVE_fwrite_unlocked) || defined(__CRT_HAVE__fwrite_nolock))))
#include <local/stdio/putchar.h>
/* Alias for `fputc(CH, stdout)' */
__FORCELOCAL int (__LIBCCALL fputchar)(int __ch) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(putchar))(__ch); }
#endif /* fputchar... */
#if defined(__CRT_HAVE__flushall)
__CREDIRECT(,int,,flushall,(void),_flushall,()) __THROWS(...)
#else /* LIBC: _flushall */
#include <local/stdio/_flushall.h>
__FORCELOCAL int (__LIBCCALL flushall)(void) __THROWS(...) { return (__NAMESPACE_LOCAL_SYM __LIBC_LOCAL_NAME(_flushall))(); }
#endif /* flushall... */
#if defined(__CRT_HAVE__rmtmp)
__CREDIRECT(,int,__NOTHROW_RPC,rmtmp,(void),_rmtmp,())
#endif /* rmtmp... */
#define SYS_OPEN     _SYS_OPEN

#endif /* __CC__ */
#endif /* __USE_DOS */


#if defined(__USE_XOPEN) && !defined(__USE_XOPEN2K) && !defined(__USE_GNU)
#include <getopt.h>
#endif

#ifdef __USE_UTF
#if defined(_UCHAR_H) && !defined(_PARTS_UCHAR_STDIO_H)
#include <parts/uchar/stdio.h>
#endif
#endif /* __USE_UTF */

#endif /* !_CXX_CSTDIO || __CXX_SYSTEM_HEADER */
#endif /* !_STDIO_H */
