/* HASH CRC-32:0xe6bd8aac */
DEFINE_PUBLIC_WEAK_ALIAS(sys_exit, sys_invalid1);                    /* 1 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fork, sys_invalid0);                    /* 2 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_read, sys_invalid3);                    /* 3 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_write, sys_invalid3);                   /* 4 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_open, sys_invalid3);                    /* 5 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_close, sys_invalid1);                   /* 6 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_waitpid, sys_invalid3);                 /* 7 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_creat, sys_invalid2);                   /* 8 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_link, sys_invalid2);                    /* 9 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_unlink, sys_invalid1);                  /* 10 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_execve, sys_invalid3);                  /* 11 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_chdir, sys_invalid1);                   /* 12 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_time, sys_invalid1);                    /* 13 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mknod, sys_invalid3);                   /* 14 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_chmod, sys_invalid2);                   /* 15 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lchown, sys_invalid3);                  /* 16 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_oldstat, sys_invalid2);           /* 18 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lseek, sys_invalid3);                   /* 19 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getpid, sys_invalid0);                  /* 20 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mount, sys_invalid5);                   /* 21 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_umount, sys_invalid1);                  /* 22 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setuid, sys_invalid1);                  /* 23 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getuid, sys_invalid0);                  /* 24 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_stime, sys_invalid1);                   /* 25 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ptrace, sys_invalid4);                  /* 26 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_alarm, sys_invalid1);                   /* 27 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_oldfstat, sys_invalid2);          /* 28 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pause, sys_invalid0);                   /* 29 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utime, sys_invalid2);                   /* 30 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_access, sys_invalid2);                  /* 33 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_nice, sys_invalid1);                    /* 34 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ftime, sys_invalid1);                   /* 35 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sync, sys_invalid0);                    /* 36 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kill, sys_invalid2);                    /* 37 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rename, sys_invalid2);                  /* 38 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mkdir, sys_invalid2);                   /* 39 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rmdir, sys_invalid1);                   /* 40 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_dup, sys_invalid1);                     /* 41 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pipe, sys_invalid1);                    /* 42 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_times, sys_invalid1);                   /* 43 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_brk, sys_invalid1);                     /* 45 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setgid, sys_invalid1);                  /* 46 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getgid, sys_invalid0);                  /* 47 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_signal, sys_invalid2);                  /* 48 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_geteuid, sys_invalid0);                 /* 49 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getegid, sys_invalid0);                 /* 50 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_acct, sys_invalid1);                    /* 51 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_umount2, sys_invalid2);                 /* 52 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ioctl, sys_invalid3);                   /* 54 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fcntl, sys_invalid3);                   /* 55 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setpgid, sys_invalid2);                 /* 57 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_oldolduname, sys_invalid1);             /* 59 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_umask, sys_invalid1);                   /* 60 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_chroot, sys_invalid1);                  /* 61 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ustat, sys_invalid2);                   /* 62 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_dup2, sys_invalid2);                    /* 63 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getppid, sys_invalid0);                 /* 64 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getpgrp, sys_invalid0);                 /* 65 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setsid, sys_invalid0);                  /* 66 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigaction, sys_invalid3);               /* 67 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sgetmask, sys_invalid0);                /* 68 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ssetmask, sys_invalid1);                /* 69 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setreuid, sys_invalid2);                /* 70 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setregid, sys_invalid2);                /* 71 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigsuspend, sys_invalid1);              /* 72 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigpending, sys_invalid1);              /* 73 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sethostname, sys_invalid2);             /* 74 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setrlimit, sys_invalid2);               /* 75 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getrlimit, sys_invalid2);               /* 76 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getrusage, sys_invalid2);               /* 77 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_gettimeofday, sys_invalid2);            /* 78 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_settimeofday, sys_invalid2);            /* 79 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getgroups, sys_invalid2);               /* 80 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setgroups, sys_invalid2);               /* 81 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_select, sys_invalid5);                  /* 82 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_symlink, sys_invalid2);                 /* 83 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_oldlstat, sys_invalid2);          /* 84 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readlink, sys_invalid3);                /* 85 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_swapon, sys_invalid2);                  /* 87 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_reboot, sys_invalid1);                  /* 88 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readdir, sys_invalid3);                 /* 89 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mmap, sys_invalid6);                    /* 90 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_munmap, sys_invalid2);                  /* 91 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_truncate, sys_invalid2);                /* 92 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ftruncate, sys_invalid2);               /* 93 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchmod, sys_invalid2);                  /* 94 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchown, sys_invalid3);                  /* 95 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getpriority, sys_invalid2);             /* 96 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setpriority, sys_invalid3);             /* 97 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_profil, sys_invalid4);                  /* 98 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_statfs, sys_invalid2);                  /* 99 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fstatfs, sys_invalid2);                 /* 100 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ioperm, sys_invalid3);                  /* 101 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_socketcall, sys_invalid2);              /* 102 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_syslog, sys_invalid3);                  /* 103 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setitimer, sys_invalid3);               /* 104 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getitimer, sys_invalid2);               /* 105 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_stat32, sys_invalid2);            /* 106 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_lstat32, sys_invalid2);           /* 107 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_fstat32, sys_invalid2);           /* 108 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_olduname, sys_invalid1);                /* 109 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_iopl, sys_invalid1);                    /* 110 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_vhangup, sys_invalid0);                 /* 111 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_wait4, sys_invalid4);                   /* 114 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_swapoff, sys_invalid1);                 /* 115 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sysinfo, sys_invalid1);                 /* 116 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fsync, sys_invalid1);                   /* 118 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigreturn, sys_invalid6);               /* 119 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clone, sys_invalid5);                   /* 120 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setdomainname, sys_invalid2);           /* 121 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_uname, sys_invalid1);                   /* 122 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_modify_ldt, sys_invalid3);              /* 123 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mprotect, sys_invalid3);                /* 125 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigprocmask, sys_invalid3);             /* 126 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getpgid, sys_invalid1);                 /* 132 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchdir, sys_invalid1);                  /* 133 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setfsuid, sys_invalid1);                /* 138 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setfsgid, sys_invalid1);                /* 139 */
DEFINE_PUBLIC_WEAK_ALIAS(sys__llseek, sys_invalid5);                 /* 140 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getdents, sys_invalid3);                /* 141 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_flock, sys_invalid2);                   /* 143 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_msync, sys_invalid3);                   /* 144 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readv, sys_invalid3);                   /* 145 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_writev, sys_invalid3);                  /* 146 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getsid, sys_invalid1);                  /* 147 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fdatasync, sys_invalid1);               /* 148 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mlock, sys_invalid2);                   /* 150 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_munlock, sys_invalid2);                 /* 151 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mlockall, sys_invalid1);                /* 152 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_munlockall, sys_invalid0);              /* 153 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_setparam, sys_invalid2);          /* 154 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_getparam, sys_invalid2);          /* 155 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_setscheduler, sys_invalid3);      /* 156 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_getscheduler, sys_invalid1);      /* 157 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_yield, sys_invalid0);             /* 158 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_get_priority_max, sys_invalid1);  /* 159 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_get_priority_min, sys_invalid1);  /* 160 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_rr_get_interval, sys_invalid2);   /* 161 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_nanosleep, sys_invalid2);               /* 162 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mremap, sys_invalid5);                  /* 163 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setresuid, sys_invalid3);               /* 164 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getresuid, sys_invalid3);               /* 165 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_poll, sys_invalid3);                    /* 168 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setresgid, sys_invalid3);               /* 170 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getresgid, sys_invalid3);               /* 171 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigaction, sys_invalid4);            /* 174 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigprocmask, sys_invalid4);          /* 175 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigpending, sys_invalid2);           /* 176 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigtimedwait, sys_invalid4);         /* 177 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigqueueinfo, sys_invalid3);         /* 178 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigsuspend, sys_invalid2);           /* 179 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pread64, sys_invalid5);                 /* 180 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pwrite64, sys_invalid5);                /* 181 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_chown, sys_invalid3);                   /* 182 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getcwd, sys_invalid2);                  /* 183 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sigaltstack, sys_invalid2);             /* 186 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sendfile, sys_invalid4);                /* 187 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_vfork, sys_invalid0);                   /* 190 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mmap2, sys_invalid6);                   /* 192 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_truncate64, sys_invalid3);              /* 193 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ftruncate64, sys_invalid3);             /* 194 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_stat64, sys_invalid2);            /* 195 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_lstat64, sys_invalid2);           /* 196 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_fstat64, sys_invalid2);           /* 197 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lchown32, sys_invalid3);                /* 198 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getuid32, sys_invalid0);                /* 199 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getgid32, sys_invalid0);                /* 200 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_geteuid32, sys_invalid0);               /* 201 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getegid32, sys_invalid0);               /* 202 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setreuid32, sys_invalid2);              /* 203 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setregid32, sys_invalid2);              /* 204 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getgroups32, sys_invalid2);             /* 205 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setgroups32, sys_invalid2);             /* 206 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchown32, sys_invalid3);                /* 207 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setresuid32, sys_invalid3);             /* 208 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getresuid32, sys_invalid3);             /* 209 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setresgid32, sys_invalid3);             /* 210 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getresgid32, sys_invalid3);             /* 211 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_chown32, sys_invalid3);                 /* 212 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setuid32, sys_invalid1);                /* 213 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setgid32, sys_invalid1);                /* 214 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setfsuid32, sys_invalid1);              /* 215 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setfsgid32, sys_invalid1);              /* 216 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mincore, sys_invalid3);                 /* 218 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_madvise, sys_invalid3);                 /* 219 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getdents64, sys_invalid3);              /* 220 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fcntl64, sys_invalid3);                 /* 221 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_gettid, sys_invalid0);                  /* 224 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readahead, sys_invalid4);               /* 225 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setxattr, sys_invalid5);                /* 226 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lsetxattr, sys_invalid5);               /* 227 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fsetxattr, sys_invalid5);               /* 228 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getxattr, sys_invalid4);                /* 229 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lgetxattr, sys_invalid4);               /* 230 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fgetxattr, sys_invalid4);               /* 231 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_listxattr, sys_invalid3);               /* 232 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_llistxattr, sys_invalid3);              /* 233 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_flistxattr, sys_invalid3);              /* 234 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_removexattr, sys_invalid2);             /* 235 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lremovexattr, sys_invalid2);            /* 236 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fremovexattr, sys_invalid2);            /* 237 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_tkill, sys_invalid2);                   /* 238 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sendfile64, sys_invalid4);              /* 239 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_futex, sys_invalid6);                   /* 240 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_setaffinity, sys_invalid3);       /* 241 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_getaffinity, sys_invalid3);       /* 242 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_exit_group, sys_invalid1);              /* 252 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_epoll_create, sys_invalid1);            /* 254 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_epoll_ctl, sys_invalid4);               /* 255 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_epoll_wait, sys_invalid4);              /* 256 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_remap_file_pages, sys_invalid5);        /* 257 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_set_tid_address, sys_invalid1);         /* 258 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_create, sys_invalid3);            /* 259 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_settime, sys_invalid4);           /* 260 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_gettime, sys_invalid2);           /* 261 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_getoverrun, sys_invalid1);        /* 262 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_delete, sys_invalid1);            /* 263 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_settime, sys_invalid2);           /* 264 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_gettime, sys_invalid2);           /* 265 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_getres, sys_invalid2);            /* 266 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_nanosleep, sys_invalid4);         /* 267 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_statfs64, sys_invalid2);                /* 268 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fstatfs64, sys_invalid2);               /* 269 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_tgkill, sys_invalid3);                  /* 270 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utimes, sys_invalid2);                  /* 271 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_waitid, sys_invalid5);                  /* 284 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ioprio_set, sys_invalid3);              /* 289 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ioprio_get, sys_invalid2);              /* 290 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_openat, sys_invalid4);                  /* 295 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mkdirat, sys_invalid3);                 /* 296 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mknodat, sys_invalid4);                 /* 297 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchownat, sys_invalid5);                /* 298 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_futimesat, sys_invalid3);               /* 299 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linux_fstatat64, sys_invalid4);         /* 300 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_unlinkat, sys_invalid3);                /* 301 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_renameat, sys_invalid4);                /* 302 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_linkat, sys_invalid5);                  /* 303 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_symlinkat, sys_invalid3);               /* 304 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readlinkat, sys_invalid4);              /* 305 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchmodat, sys_invalid4);                /* 306 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_faccessat, sys_invalid4);               /* 307 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pselect6, sys_invalid6);                /* 308 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ppoll, sys_invalid5);                   /* 309 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_unshare, sys_invalid1);                 /* 310 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_splice, sys_invalid6);                  /* 313 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sync_file_range, sys_invalid6);         /* 314 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_tee, sys_invalid4);                     /* 315 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_vmsplice, sys_invalid4);                /* 316 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getcpu, sys_invalid3);                  /* 318 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_epoll_pwait, sys_invalid5);             /* 319 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utimensat, sys_invalid4);               /* 320 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_signalfd, sys_invalid3);                /* 321 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timerfd_create, sys_invalid2);          /* 322 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_eventfd, sys_invalid1);                 /* 323 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fallocate, sys_invalid4);               /* 324 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timerfd_settime, sys_invalid4);         /* 325 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timerfd_gettime, sys_invalid2);         /* 326 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_signalfd4, sys_invalid4);               /* 327 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_eventfd2, sys_invalid2);                /* 328 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_epoll_create1, sys_invalid1);           /* 329 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_dup3, sys_invalid3);                    /* 330 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pipe2, sys_invalid2);                   /* 331 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_preadv, sys_invalid5);                  /* 333 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pwritev, sys_invalid5);                 /* 334 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_tgsigqueueinfo, sys_invalid4);       /* 335 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_recvmmsg, sys_invalid5);                /* 337 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_prlimit64, sys_invalid4);               /* 340 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_name_to_handle_at, sys_invalid5);       /* 341 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_open_by_handle_at, sys_invalid3);       /* 342 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_syncfs, sys_invalid1);                  /* 344 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sendmmsg, sys_invalid4);                /* 345 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setns, sys_invalid2);                   /* 346 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_process_vm_readv, sys_invalid6);        /* 347 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_process_vm_writev, sys_invalid6);       /* 348 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kcmp, sys_invalid5);                    /* 349 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_renameat2, sys_invalid5);               /* 353 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_execveat, sys_invalid5);                /* 358 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_socket, sys_invalid3);                  /* 359 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_socketpair, sys_invalid4);              /* 360 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_bind, sys_invalid3);                    /* 361 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_connect, sys_invalid3);                 /* 362 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_listen, sys_invalid2);                  /* 363 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_accept4, sys_invalid4);                 /* 364 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getsockopt, sys_invalid5);              /* 365 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setsockopt, sys_invalid5);              /* 366 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getsockname, sys_invalid3);             /* 367 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getpeername, sys_invalid3);             /* 368 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sendto, sys_invalid6);                  /* 369 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sendmsg, sys_invalid3);                 /* 370 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_recvfrom, sys_invalid6);                /* 371 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_recvmsg, sys_invalid3);                 /* 372 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_shutdown, sys_invalid2);                /* 373 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_hop, sys_invalid3);                     /* 0x80000001 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_hopf, sys_invalid4);                    /* 0x80000002 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readf, sys_invalid4);                   /* 0x80000003 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_writef, sys_invalid4);                  /* 0x80000004 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_detach, sys_invalid1);                  /* 0x80000005 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getdrives, sys_invalid0);               /* 0x80000006 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_frealpath4, sys_invalid4);              /* 0x80000007 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_frealpathat, sys_invalid5);             /* 0x80000008 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rpc_schedule, sys_invalid4);            /* 0x80000009 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sysctl, sys_invalid2);                  /* 0x8000000a */
DEFINE_PUBLIC_WEAK_ALIAS(sys_openpty, sys_invalid5);                 /* 0x8000000b */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fchdirat, sys_invalid3);                /* 0x8000000c */
DEFINE_PUBLIC_WEAK_ALIAS(sys_time64, sys_invalid1);                  /* 0x8000000d */
DEFINE_PUBLIC_WEAK_ALIAS(sys_set_exception_handler, sys_invalid3);   /* 0x8000000e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_get_exception_handler, sys_invalid3);   /* 0x8000000f */
DEFINE_PUBLIC_WEAK_ALIAS(sys_set_library_listdef, sys_invalid1);     /* 0x80000010 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_debugtrap, sys_invalid2);               /* 0x80000011 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lfutex, sys_invalid5);                  /* 0x80000012 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lseek64, sys_invalid4);                 /* 0x80000013 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lfutexexpr, sys_invalid5);              /* 0x80000014 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_lfutexlockexpr, sys_invalid6);          /* 0x80000015 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_mktty, sys_invalid4);                   /* 0x80000016 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_raiseat, sys_invalid2);                 /* 0x80000017 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_coredump, sys_invalid6);                /* 0x80000018 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_stime64, sys_invalid1);                 /* 0x80000019 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utime64, sys_invalid2);                 /* 0x8000001e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ioctlf, sys_invalid4);                  /* 0x80000036 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fsmode, sys_invalid2);                  /* 0x8000003c */
DEFINE_PUBLIC_WEAK_ALIAS(sys_gettimeofday64, sys_invalid2);          /* 0x8000004e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_settimeofday64, sys_invalid2);          /* 0x8000004f */
DEFINE_PUBLIC_WEAK_ALIAS(sys_select64, sys_invalid5);                /* 0x80000052 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_maplibrary, sys_invalid5);              /* 0x80000056 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_setitimer64, sys_invalid3);             /* 0x80000068 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_getitimer64, sys_invalid2);             /* 0x80000069 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kreaddir, sys_invalid4);                /* 0x8000008d */
DEFINE_PUBLIC_WEAK_ALIAS(sys_readvf, sys_invalid4);                  /* 0x80000091 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_writevf, sys_invalid4);                 /* 0x80000092 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rpc_service, sys_invalid0);             /* 0x8000009e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_sched_rr_get_interval64, sys_invalid2); /* 0x800000a1 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_nanosleep64, sys_invalid2);             /* 0x800000a2 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_rt_sigtimedwait64, sys_invalid4);       /* 0x800000b1 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pread64f, sys_invalid6);                /* 0x800000b4 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pwrite64f, sys_invalid6);               /* 0x800000b5 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kstat, sys_invalid2);                   /* 0x800000c3 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_klstat, sys_invalid2);                  /* 0x800000c4 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kfstat, sys_invalid2);                  /* 0x800000c5 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kreaddirf, sys_invalid5);               /* 0x800000dc */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_settime64, sys_invalid4);         /* 0x80000104 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timer_gettime64, sys_invalid2);         /* 0x80000105 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_settime64, sys_invalid2);         /* 0x80000108 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_gettime64, sys_invalid2);         /* 0x80000109 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_getres64, sys_invalid2);          /* 0x8000010a */
DEFINE_PUBLIC_WEAK_ALIAS(sys_clock_nanosleep64, sys_invalid4);       /* 0x8000010b */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utimes64, sys_invalid2);                /* 0x8000010f */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fmkdirat, sys_invalid4);                /* 0x80000128 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fmknodat, sys_invalid5);                /* 0x80000129 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_futimesat64, sys_invalid3);             /* 0x8000012b */
DEFINE_PUBLIC_WEAK_ALIAS(sys_kfstatat, sys_invalid4);                /* 0x8000012c */
DEFINE_PUBLIC_WEAK_ALIAS(sys_frenameat, sys_invalid5);               /* 0x8000012e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fsymlinkat, sys_invalid4);              /* 0x80000130 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_freadlinkat, sys_invalid5);             /* 0x80000131 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pselect6_64, sys_invalid6);             /* 0x80000134 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_ppoll64, sys_invalid5);                 /* 0x80000135 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_utimensat64, sys_invalid4);             /* 0x80000140 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_fallocate64, sys_invalid6);             /* 0x80000144 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timerfd_settime64, sys_invalid4);       /* 0x80000145 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_timerfd_gettime64, sys_invalid2);       /* 0x80000146 */
DEFINE_PUBLIC_WEAK_ALIAS(sys_preadvf, sys_invalid6);                 /* 0x8000014d */
DEFINE_PUBLIC_WEAK_ALIAS(sys_pwritevf, sys_invalid6);                /* 0x8000014e */
DEFINE_PUBLIC_WEAK_ALIAS(sys_recvmmsg64, sys_invalid5);              /* 0x80000151 */