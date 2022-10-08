/*
 * Copyright (c) 2001 Hewlett-Packard, Matthew Wilcox
 */

	{ 0,	0,	sys_restart_syscall,	"restart_syscall"	}, /* 0 */
	{ 1,	TP|SE,	sys_exit,		"exit"			}, /* 1 */
	{ 0,	TP,	sys_fork,		"fork"			}, /* 2 */
	{ 3,	TD,	sys_read,		"read"			}, /* 3 */
	{ 3,	TD,	sys_write,		"write"			}, /* 4 */
	{ 3,	TD|TF,	sys_open,		"open"			}, /* 5 */
	{ 1,	TD,	sys_close,		"close"			}, /* 6 */
	{ 3,	TP,	sys_waitpid,		"waitpid"		}, /* 7 */
	{ 2,	TD|TF,	sys_creat,		"creat"			}, /* 8 */
	{ 2,	TF,	sys_link,		"link"			}, /* 9 */
	{ 1,	TF,	sys_unlink,		"unlink"		}, /* 10 */
	{ 3,	TF|TP|SE|SI,	sys_execve,		"execve"		}, /* 11 */
	{ 1,	TF,	sys_chdir,		"chdir"			}, /* 12 */
	{ 1,	0,	sys_time,		"time"			}, /* 13 */
	{ 3,	TF,	sys_mknod,		"mknod"			}, /* 14 */
	{ 2,	TF,	sys_chmod,		"chmod"			}, /* 15 */
	{ 3,	TF,	sys_chown,		"lchown"		}, /* 16 */
	{ 3,	TN,	sys_socket,		"socket"		}, /* 17 */
	{ 2,	TF,	sys_stat,		"newstat"		}, /* 18 */
	{ 3,	TD,	sys_lseek,		"lseek"			}, /* 19 */
	{ 0,	0,	sys_getpid,		"getpid"		}, /* 20 */
	{ 5,	TF,	sys_mount,		"mount"			}, /* 21 */
	{ 3,	TN,	sys_bind,		"bind"			}, /* 22 */
	{ 1,	0,	sys_setuid,		"setuid"		}, /* 23 */
	{ 0,	NF,	sys_getuid,		"getuid"		}, /* 24 */
	{ 1,	0,	sys_stime,		"stime"			}, /* 25 */
	{ 4,	0,	sys_ptrace,		"ptrace"		}, /* 26 */
	{ 1,	0,	sys_alarm,		"alarm"			}, /* 27 */
	{ 2,	TD,	sys_fstat,		"newfstat"		}, /* 28 */
	{ 0,	TS,	sys_pause,		"pause"			}, /* 29 */
	{ 2,	TF,	sys_utime,		"utime"			}, /* 30 */
	{ 3,	TN,	sys_connect,		"connect"		}, /* 31 */
	{ 2,	TN,	sys_listen,		"listen"		}, /* 32 */
	{ 2,	TF,	sys_access,		"access"		}, /* 33 */
	{ 1,	0,	sys_nice,		"nice"			}, /* 34 */
	{ 3,	TN,	sys_accept,		"accept"		}, /* 35 */
	{ 0,	0,	sys_sync,		"sync"			}, /* 36 */
	{ 2,	TS,	sys_kill,		"kill"			}, /* 37 */
	{ 2,	TF,	sys_rename,		"rename"		}, /* 38 */
	{ 2,	TF,	sys_mkdir,		"mkdir"			}, /* 39 */
	{ 1,	TF,	sys_rmdir,		"rmdir"			}, /* 40 */
	{ 1,	TD,	sys_dup,		"dup"			}, /* 41 */
	{ 1,	TD,	sys_pipe,		"pipe"			}, /* 42 */
	{ 1,	0,	sys_times,		"times"			}, /* 43 */
	{ 3,	TN,	sys_getsockname,	"getsockname"		}, /* 44 */
	{ 1,	TM|SI,	sys_brk,		"brk"			}, /* 45 */
	{ 1,	0,	sys_setgid,		"setgid"		}, /* 46 */
	{ 0,	NF,	sys_getgid,		"getgid"		}, /* 47 */
	{ 2,	TS,	sys_signal,		"signal"		}, /* 48 */
	{ 0,	NF,	sys_geteuid,		"geteuid"		}, /* 49 */
	{ 0,	NF,	sys_getegid,		"getegid"		}, /* 50 */
	{ 1,	TF,	sys_acct,		"acct"			}, /* 51 */
	{ 2,	TF,	sys_umount2,		"umount2"		}, /* 52 */
	{ 3,	TN,	sys_getpeername,	"lock"			}, /* 53 */
	{ 3,	TD,	sys_ioctl,		"ioctl"			}, /* 54 */
	{ 3,	TD,	sys_fcntl,		"fcntl"			}, /* 55 */
	{ 4,	TN,	sys_socketpair,		"socketpair"		}, /* 56 */
	{ 2,	0,	sys_setpgid,		"setpgid"		}, /* 57 */
	{ 4,	TN,	sys_send,		"send"			}, /* 58 */
	{ 1,	0,	sys_uname,		"newuname"			}, /* 59 */
	{ 1,	0,	sys_umask,		"umask"			}, /* 60 */
	{ 1,	TF,	sys_chroot,		"chroot"		}, /* 61 */
	{ 2,	0,	sys_ustat,		"ustat"			}, /* 62 */
	{ 2,	TD,	sys_dup2,		"dup2"			}, /* 63 */
	{ 0,	0,	sys_getppid,		"getppid"		}, /* 64 */
	{ 0,	0,	sys_getpgrp,		"getpgrp"		}, /* 65 */
	{ 0,	0,	sys_setsid,		"setsid"		}, /* 66 */
	{ 2,	TF,	sys_pivotroot,		"pivot_root"		}, /* 67 */
	{ 0,	TS,	sys_siggetmask,		"sgetmask"		}, /* 68 */
	{ 1,	TS,	sys_sigsetmask,		"ssetmask"		}, /* 69 */
	{ 2,	0,	sys_setreuid,		"setreuid"		}, /* 70 */
	{ 2,	0,	sys_setregid,		"setregid"		}, /* 71 */
	{ 3,	TM,	sys_mincore,		"mincore"		}, /* 72 */
	{ 1,	TS,	sys_sigpending,		"sigpending"		}, /* 73 */
	{ 2,	0,	sys_sethostname,	"sethostname"		}, /* 74 */
	{ 2,	0,	sys_setrlimit,		"setrlimit"		}, /* 75 */
	{ 2,	0,	sys_getrlimit,		"getrlimit"		}, /* 76 */
	{ 2,	0,	sys_getrusage,		"getrusage"		}, /* 77 */
	{ 2,	0,	sys_gettimeofday,	"gettimeofday"		}, /* 78 */
	{ 2,	0,	sys_settimeofday,	"settimeofday"		}, /* 79 */
	{ 2,	0,	sys_getgroups,		"getgroups"		}, /* 80 */
	{ 2,	0,	sys_setgroups,		"setgroups"		}, /* 81 */
	{ 6,	TN,	sys_sendto,		"sendto"		}, /* 82 */
	{ 2,	TF,	sys_symlink,		"symlink"		}, /* 83 */
	{ 2,	TF,	sys_lstat,		"newlstat"		}, /* 84 */
	{ 3,	TF,	sys_readlink,		"readlink"		}, /* 85 */
	{ 1,	TF,	sys_uselib,		"uselib"		}, /* 86 */
	{ 2,	TF,	sys_swapon,		"swapon"		}, /* 87 */
	{ 4,	0,	sys_reboot,		"reboot"		}, /* 88 */
	{ 6,	TD|TM|SI,	sys_mmap_4koff,		"mmap2"			}, /* 89 */
	{ 6,	TD|TM|SI,	sys_mmap,		"mmap"			}, /* 90 */
	{ 2,	TM|SI,	sys_munmap,		"munmap"		}, /* 91 */
	{ 2,	TF,	sys_truncate,		"truncate"		}, /* 92 */
	{ 2,	TD,	sys_ftruncate,		"ftruncate"		}, /* 93 */
	{ 2,	TD,	sys_fchmod,		"fchmod"		}, /* 94 */
	{ 3,	TD,	sys_fchown,		"fchown"		}, /* 95 */
	{ 2,	0,	sys_getpriority,	"getpriority"		}, /* 96 */
	{ 3,	0,	sys_setpriority,	"setpriority"		}, /* 97 */
	{ 4,	TN,	sys_recv,		"recv"			}, /* 98 */
	{ 2,	TF,	sys_statfs,		"statfs"		}, /* 99 */
	{ 2,	TD,	sys_fstatfs,		"fstatfs"		}, /* 100 */
	{ 2,	TF,	sys_stat64,		"stat64"		}, /* 101 */
	{ 5,	0,	NULL,			NULL			}, /* 102 */
	{ 3,	0,	sys_syslog,		"syslog"		}, /* 103 */
	{ 3,	0,	sys_setitimer,		"setitimer"		}, /* 104 */
	{ 2,	0,	sys_getitimer,		"getitimer"		}, /* 105 */
	{ 2,	0,	sys_capget,		"capget"		}, /* 106 */
	{ 2,	0,	sys_capset,		"capset"		}, /* 107 */
	{ 5,	TD,	sys_pread,		"pread"			}, /* 108 */
	{ 5,	TD,	sys_pwrite,		"pwrite"		}, /* 109 */
	{ 2,	TF,	sys_getcwd,		"getcwd"		}, /* 110 */
	{ 0,	0,	sys_vhangup,		"vhangup"		}, /* 111 */
	{ 2,	TD,	sys_fstat64,		"fstat64"		}, /* 112 */
	{ 0,	TP,	sys_vfork,		"vfork"			}, /* 113 */
	{ 4,	TP,	sys_wait4,		"wait4"			}, /* 114 */
	{ 1,	TF,	sys_swapoff,		"swapoff"		}, /* 115 */
	{ 1,	0,	sys_sysinfo,		"sysinfo"		}, /* 116 */
	{ 2,	TN,	sys_shutdown,		"shutdown"		}, /* 117 */
	{ 1,	TD,	sys_fsync,		"fsync"			}, /* 118 */
	{ 3,	TM,	sys_madvise,		"madvise"		}, /* 119 */
	{ 5,	TP,	sys_clone,		"clone"			}, /* 120 */
	{ 2,	0,	sys_setdomainname,	"setdomainname"		}, /* 121 */
	{ 4,	TD|TN,	sys_sendfile,		"sendfile"		}, /* 122 */
	{ 6,	TN,	sys_recvfrom,		"recvfrom"		}, /* 123 */
	{ 1,	0,	sys_adjtimex,		"adjtimex"		}, /* 124 */
	{ 3,	TM|SI,	sys_mprotect,		"mprotect"		}, /* 125 */
	{ 3,	TS,	sys_sigprocmask,	"sigprocmask"		}, /* 126 */
	{ 2,	0,	sys_create_module,	"create_module"		}, /* 127 */
	{ 4,	0,	sys_init_module,	"init_module"		}, /* 128 */
	{ 2,	0,	sys_delete_module,	"delete_module"		}, /* 129 */
	{ 1,	0,	sys_get_kernel_syms,	"get_kernel_syms"	}, /* 130 */
	{ 4,	TF,	sys_quotactl,		"quotactl"		}, /* 131 */
	{ 1,	0,	sys_getpgid,		"getpgid"		}, /* 132 */
	{ 1,	TD,	sys_fchdir,		"fchdir"		}, /* 133 */
	{ 0,	0,	sys_bdflush,		"bdflush"		}, /* 134 */
	{ 5,	0,	sys_sysfs,		"sysfs"			}, /* 135 */
	{ 1,	0,	sys_personality,	"personality"		}, /* 136 */
	{ 5,	0,	sys_afs_syscall,	"afs_syscall"		}, /* 137 */
	{ 1,	NF,	sys_setfsuid,		"setfsuid"		}, /* 138 */
	{ 1,	NF,	sys_setfsgid,		"setfsgid"		}, /* 139 */
	{ 5,	TD,	sys_llseek,		"_llseek"		}, /* 140 */
	{ 3,	TD,	sys_getdents,		"getdents"		}, /* 141 */
	{ 5,	TD,	sys_select,		"_newselect"		}, /* 142 */
	{ 2,	TD,	sys_flock,		"flock"			}, /* 143 */
	{ 3,	TM,	sys_msync,		"msync"			}, /* 144 */
	{ 3,	TD,	sys_readv,		"readv"			}, /* 145 */
	{ 3,	TD,	sys_writev,		"writev"		}, /* 146 */
	{ 1,	0,	sys_getsid,		"getsid"		}, /* 147 */
	{ 1,	TD,	sys_fdatasync,		"fdatasync"		}, /* 148 */
	{ 1,	0,	sys_sysctl,		"_sysctl"		}, /* 149 */
	{ 2,	TM,	sys_mlock,		"mlock"			}, /* 150 */
	{ 2,	TM,	sys_munlock,		"munlock"		}, /* 151 */
	{ 1,	TM,	sys_mlockall,		"mlockall"		}, /* 152 */
	{ 1,	TM,	sys_munlockall,		"munlockall"		}, /* 153 */
	{ 2,	0,	sys_sched_setparam,	"sched_setparam"	}, /* 154 */
	{ 2,	0,	sys_sched_getparam,	"sched_getparam"	}, /* 155 */
	{ 3,	0,	sys_sched_setscheduler,	"sched_setscheduler"	}, /* 156 */
	{ 2,	0,	sys_sched_getscheduler,	"sched_getscheduler"	}, /* 157 */
	{ 0,	0,	sys_sched_yield,	"sched_yield"		}, /* 158 */
	{ 1,	0,	sys_sched_get_priority_max,"sched_get_priority_max"}, /* 159 */
	{ 1,	0,	sys_sched_get_priority_min,"sched_get_priority_min"}, /* 160 */
	{ 2,	0,	sys_sched_rr_get_interval,"sched_rr_get_interval"}, /* 161 */
	{ 2,	0,	sys_nanosleep,		"nanosleep"		}, /* 162 */
	{ 5,	TM|SI,	sys_mremap,		"mremap"		}, /* 163 */
	{ 3,	0,	sys_setresuid,		"setresuid"		}, /* 164 */
	{ 3,	0,	sys_setresuid,		"getresuid"		}, /* 165 */
	{ 2,	TS,	sys_sigaltstack,	"sigaltstack"		}, /* 166 */
	{ 5,	0,	sys_query_module,	"query_module"		}, /* 167 */
	{ 3,	TD,	sys_poll,		"poll"			}, /* 168 */
	{ 3,	0,	sys_nfsservctl,		"nfsservctl"		}, /* 169 */
	{ 3,	0,	sys_setresgid,		"setresgid"		}, /* 170 */
	{ 3,	0,	sys_setresgid,		"getresgid"		}, /* 171 */
	{ 5,	0,	sys_prctl,		"prctl"			}, /* 172 */
	{ 0,	TS,	sys_sigreturn,		"rt_sigreturn"		}, /* 173 */
	{ 4,	TS,	sys_rt_sigaction,	"rt_sigaction"		}, /* 174 */
	{ 4,	TS,	sys_rt_sigprocmask,	"rt_sigprocmask"	}, /* 175 */
	{ 2,	TS,	sys_rt_sigpending,	"rt_sigpending"		}, /* 176 */
	{ 4,	TS,	sys_rt_sigtimedwait,	"rt_sigtimedwait"	}, /* 177 */
	{ 3,	TS,	sys_rt_sigqueueinfo,	"rt_sigqueueinfo"	}, /* 178 */
	{ 2,	TS,	sys_rt_sigsuspend,	"rt_sigsuspend"		}, /* 179 */
	{ 3,	TF,	sys_chown,		"chown"			}, /* 180 */
	{ 5,	TN,	sys_setsockopt,		"setsockopt"		}, /* 181 */
	{ 5,	TN,	sys_getsockopt,		"getsockopt"		}, /* 182 */
	{ 3,	TN,	sys_sendmsg,		"sendmsg"		}, /* 183 */
	{ 3,	TN,	sys_recvmsg,		"recvmsg"		}, /* 184 */
	{ 4,	TI,	sys_semop,		"semop"			}, /* 185 */
	{ 4,	TI,	sys_semget,		"semget"		}, /* 186 */
	{ 4,	TI,	sys_semctl,		"semctl"		}, /* 187 */
	{ 4,	TI,	sys_msgsnd,		"msgsnd"		}, /* 188 */
	{ 4,	TI,	sys_msgrcv,		"msgrcv"		}, /* 189 */
	{ 4,	TI,	sys_msgget,		"msgget"		}, /* 190 */
	{ 4,	TI,	sys_msgctl,		"msgctl"		}, /* 191 */
	{ 3,	TI|TM|SI,	sys_shmat,		"shmat"			}, /* 192 */
	{ 1,	TI|TM|SI,	sys_shmdt,		"shmdt"			}, /* 193 */
	{ 3,	TI,	sys_shmget,		"shmget"		}, /* 194 */
	{ 3,	TI,	sys_shmctl,		"shmctl"		}, /* 195 */
	{ 5,	0,	sys_getpmsg,		"getpmsg"		}, /* 196 */
	{ 5,	0,	sys_putpmsg,		"putpmsg"		}, /* 197 */
	{ 2,	TF,	sys_lstat64,		"lstat64"		}, /* 198 */
	{ 3,	TF,	sys_truncate64,		"truncate64"		}, /* 199 */
	{ 3,	TD,	sys_ftruncate64,	"ftruncate64"		}, /* 200 */
	{ 3,	TD,	sys_getdents64,		"getdents64"		}, /* 201 */
	{ 3,	TD,	sys_fcntl,		"fcntl64"		}, /* 202 */
	{ 5,	0,	printargs,		"attrctl"		}, /* 203 */
	{ 5,	0,	printargs,		"acl_get"		}, /* 204 */
	{ 5,	0,	printargs,		"acl_set"		}, /* 205 */
	{ 0,	0,	sys_gettid,		"gettid"		}, /* 206 */
	{ 4,	TD,	sys_readahead,		"readahead"		}, /* 207 */
	{ 2,	TS,	sys_kill,		"tkill"			}, /* 208 */
	{ 4,	TD|TN,	sys_sendfile64,		"sendfile64"		}, /* 209 */
	{ 6,	0,	sys_futex,		"futex"			}, /* 210 */
	{ 3,	0,	sys_sched_setaffinity,	"sched_setaffinity"	}, /* 211 */
	{ 3,	0,	sys_sched_getaffinity,	"sched_getaffinity"	}, /* 212 */
	{ 5,	0,	printargs,		"set_thread_area"	}, /* 213 */
	{ 5,	0,	printargs,		"get_thread_area"	}, /* 214 */
	{ 2,	0,	sys_io_setup,		"io_setup"		}, /* 215 */
	{ 1,	0,	sys_io_destroy,		"io_destroy"		}, /* 216 */
	{ 5,	0,	sys_io_getevents,		"io_getevents"		}, /* 217 */
	{ 3,	0,	sys_io_submit,		"io_submit"		}, /* 218 */
	{ 4,	0,	sys_io_cancel,		"io_cancel"		}, /* 219 */
	{ 5,	0,	printargs,		"alloc_hugepages"	}, /* 220 */
	{ 1,	0,	printargs,		"free_hugepages"	}, /* 221 */
	{ 1,	TP|SE,	sys_exit,		"exit_group"		}, /* 222 */
	{ 4,	0,	sys_lookup_dcookie,	"lookup_dcookie"	}, /* 223 */
	{ 1,	TD,	sys_epoll_create,	"epoll_create"		}, /* 224 */
	{ 4,	TD,	sys_epoll_ctl,		"epoll_ctl"		}, /* 225 */
	{ 4,	TD,	sys_epoll_wait,		"epoll_wait"		}, /* 226 */
	{ 5,	TM|SI,	printargs,		"remap_file_pages"	}, /* 227 */
	{ 5,	TI,	sys_semtimedop,		"semtimedop"		}, /* 228 */
	{ 5,	0,	printargs,		"mq_open"		}, /* 229 */
	{ 5,	0,	printargs,		"mq_unlink"		}, /* 230 */
	{ 5,	0,	printargs,		"mq_timedsend"		}, /* 231 */
	{ 5,	0,	printargs,		"mq_timedreceive"		}, /* 232 */
	{ 5,	0,	printargs,		"mq_notify"		}, /* 233 */
	{ 5,	0,	printargs,		"mq_getsetattr"		}, /* 234 */
	{ 5,	TP,	sys_waitid,		"waitid"		}, /* 235 */
	{ 6,	TD,	sys_fadvise64_64,	"fadvise64_64"		}, /* 236 */
	{ 5,	0,	sys_set_tid_address,	"set_tid_address"	}, /* 237 */
	{ 5,	TF,	sys_setxattr,		"setxattr"		}, /* 238 */
	{ 5,	TF,	sys_setxattr,		"lsetxattr"		}, /* 239 */
	{ 5,	TD,	sys_fsetxattr,		"fsetxattr"		}, /* 240 */
	{ 4,	TF,	sys_getxattr,		"getxattr"		}, /* 241 */
	{ 4,	TF,	sys_getxattr,		"lgetxattr"		}, /* 242 */
	{ 4,	TD,	sys_fgetxattr,		"fgetxattr"		}, /* 243 */
	{ 5,	TF,	sys_listxattr,		"listxattr"		}, /* 244 */
	{ 5,	TF,	sys_listxattr,		"llistxattr"		}, /* 245 */
	{ 5,	TD,	sys_flistxattr,		"flistxattr"		}, /* 246 */
	{ 5,	TF,	sys_removexattr,	"removexattr"		}, /* 247 */
	{ 5,	TF,	sys_removexattr,	"lremovexattr"		}, /* 248 */
	{ 5,	TD,	sys_fremovexattr,	"fremovexattr"		}, /* 249 */
	{ 3,	0,	sys_timer_create,	"timer_create"		}, /* 250 */
	{ 4,	0,	sys_timer_settime,	"timer_settime"		}, /* 251 */
	{ 2,	0,	sys_timer_gettime,	"timer_gettime"		}, /* 252 */
	{ 1,	0,	sys_timer_getoverrun,	"timer_getoverrun"	}, /* 253 */
	{ 1,	0,	sys_timer_delete,	"timer_delete"		}, /* 254 */
	{ 2,	0,	sys_clock_settime,	"clock_settime"		}, /* 255 */
	{ 2,	0,	sys_clock_gettime,	"clock_gettime"		}, /* 256 */
	{ 2,	0,	sys_clock_getres,	"clock_getres"		}, /* 257 */
	{ 5,	0,	printargs,		"clock_nanosleep"	}, /* 258 */
	{ 3,	TS,	sys_tgkill,		"tgkill"		}, /* 259 */
	{ 5,	TM,	printargs,		"mbind"			}, /* 260 */
	{ 5,	TM,	printargs,		"get_mempolicy"		}, /* 261 */
	{ 5,	TM,	printargs,		"set_mempolicy"		}, /* 262 */
	{ 5,	0,	sys_vserver,		"vserver"		}, /* 263 */
	{ 5,	0,	sys_add_key,		"add_key"		}, /* 264 */
	{ 4,	0,	sys_request_key,	"request_key"		}, /* 265 */
	{ 5,	0,	sys_keyctl,		"keyctl"		}, /* 266 */
	{ 3,	0,	sys_ioprio_set,		"ioprio_set"		}, /* 267 */
	{ 2,	0,	sys_ioprio_get,		"ioprio_get"		}, /* 268 */
	{ 0,	TD,	sys_inotify_init,	"inotify_init"		}, /* 269 */
	{ 3,	TD,	sys_inotify_add_watch,	"inotify_add_watch"	}, /* 270 */
	{ 2,	TD,	sys_inotify_rm_watch,	"inotify_rm_watch"	}, /* 271 */
	{ 4,	TM,	sys_migrate_pages,	"migrate_pages"		}, /* 272 */
	{ 6,	TD,	sys_pselect6,		"pselect6"		}, /* 273 */
	{ 5,	TD,	sys_ppoll,		"ppoll"			}, /* 274 */
	{ 4,	TD|TF,	sys_openat,		"openat"		}, /* 275 */
	{ 3,	TD|TF,	sys_mkdirat,		"mkdirat"		}, /* 276 */
	{ 4,	TD|TF,	sys_mknodat,		"mknodat"		}, /* 277 */
	{ 5,	TD|TF,	sys_fchownat,		"fchownat"		}, /* 278 */
	{ 3,	TD|TF,	sys_futimesat,		"futimesat"		}, /* 279 */
	{ 4,	TD|TF,	sys_newfstatat,		"newfstatat"		}, /* 280 */
	{ 3,	TD|TF,	sys_unlinkat,		"unlinkat"		}, /* 281 */
	{ 4,	TD|TF,	sys_renameat,		"renameat"		}, /* 282 */
	{ 5,	TD|TF,	sys_linkat,		"linkat"		}, /* 283 */
	{ 3,	TD|TF,	sys_symlinkat,		"symlinkat"		}, /* 284 */
	{ 4,	TD|TF,	sys_readlinkat,		"readlinkat"		}, /* 285 */
	{ 3,	TD|TF,	sys_fchmodat,		"fchmodat"		}, /* 286 */
	{ 3,	TD|TF,	sys_faccessat,		"faccessat"		}, /* 287 */
	{ 1,	TP,	sys_unshare,		"unshare"		}, /* 288 */
	{ 2,	0,	sys_set_robust_list,	"set_robust_list"	}, /* 289 */
	{ 3,	0,	sys_get_robust_list,	"get_robust_list"	}, /* 290 */
	{ 6,	TD,	sys_splice,		"splice"		}, /* 291 */
	{ 6,	TD,	sys_sync_file_range,	"sync_file_range"	}, /* 292 */
	{ 4,	TD,	sys_tee,		"tee"			}, /* 293 */
	{ 4,	TD,	sys_vmsplice,		"vmsplice"		}, /* 294 */
	{ 6,	TM,	sys_move_pages,		"move_pages"		}, /* 295 */
	{ 3,	0,	sys_getcpu,		"getcpu"		}, /* 296 */
	{ 6,	TD,	sys_epoll_pwait,	"epoll_pwait"		}, /* 297 */
	{ 3,	TF,	sys_statfs64,		"statfs64"		}, /* 298 */
	{ 3,	TD,	sys_fstatfs64,		"fstatfs64"		}, /* 299 */
	{ 4,	0,	sys_kexec_load,		"kexec_load"		}, /* 300 */
	{ 4,	TD|TF,	sys_utimensat,		"utimensat"		}, /* 301 */
	{ 3,	TD,	printargs,		"signalfd"		}, /* 302 */
	{ 4,	TD,	printargs,		"timerfd"		}, /* 303 */
	{ 1,	TD,	sys_eventfd,		"eventfd"		}, /* 304 */
	{ 6,	TD,	sys_fallocate,		"fallocate"		}, /* 305 */
	{ 2,	TD,	sys_timerfd_create,	"timerfd_create"	}, /* 306 */
	{ 4,	TD,	sys_timerfd_settime,	"timerfd_settime"	}, /* 307 */
	{ 2,	TD,	sys_timerfd_gettime,	"timerfd_gettime"	}, /* 308 */
	{ 4,	TD|TS,	sys_signalfd4,		"signalfd4"		}, /* 309 */
	{ 2,	TD,	sys_eventfd2,		"eventfd2"		}, /* 310 */
	{ 1,	TD,	sys_epoll_create1,	"epoll_create1"		}, /* 311 */
	{ 3,	TD,	sys_dup3,		"dup3"			}, /* 312 */
	{ 2,	TD,	sys_pipe2,		"pipe2"			}, /* 313 */
	{ 1,	TD,	sys_inotify_init1,	"inotify_init1"		}, /* 314 */
	{ 5,	TD,	sys_preadv,		"preadv"		}, /* 315 */
	{ 5,	TD,	sys_pwritev,		"pwritev"		}, /* 316 */
	{ 4,	TP|TS,	sys_rt_tgsigqueueinfo,	"rt_tgsigqueueinfo"	}, /* 317 */
	{ 5,	TD,	sys_perf_event_open,	"perf_event_open"	}, /* 318 */
	{ 5,	TN,	sys_recvmmsg,		"recvmmsg"		}, /* 319 */
	{ 4,	TN,	sys_accept4,		"accept4"		}, /* 320 */
	{ 4,	0,	sys_prlimit64,		"prlimit64"		}, /* 321 */
	{ 2,	TD,	sys_fanotify_init,	"fanotify_init"		}, /* 322 */
	{ 6,	TD|TF,	sys_fanotify_mark,	"fanotify_mark"		}, /* 323 */
	{ 2,	0,	sys_clock_adjtime,	"clock_adjtime"		}, /* 324 */
	{ 5,	TD|TF,	sys_name_to_handle_at,	"name_to_handle_at"	}, /* 325 */
	{ 3,	TD,	sys_open_by_handle_at,	"open_by_handle_at"	}, /* 326 */
	{ 1,	TD,	sys_syncfs,		"syncfs"		}, /* 327 */
	{ 2,	TD,	sys_setns,		"setns"			}, /* 328 */
	{ 4,	TN,	sys_sendmmsg,		"sendmmsg"		}, /* 329 */
	{ 6,	0,	sys_process_vm_readv,	"process_vm_readv"	}, /* 330 */
	{ 6,	0,	sys_process_vm_writev,	"process_vm_writev"	}, /* 331 */
	{ 5,	0,	sys_kcmp,		"kcmp"			}, /* 332 */
	{ 3,	TD,	sys_finit_module,	"finit_module"		}, /* 333 */
