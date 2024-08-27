/*Ojas Hegde 
MT2024105
2. Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
identify all the process related information in the corresponding proc directory.
*/
int main(){
    while(1);
}
/*
$ ./a.out &
[1] 22542
$ cat /proc/22542/status
Name:   a.out
Umask:  0002
State:  R (running)
Tgid:   22542
Ngid:   0
Pid:    22542
PPid:   3365
TracerPid:      0
Uid:    1000    1000    1000    1000
Gid:    1000    1000    1000    1000
FDSize: 256
Groups: 4 24 27 30 46 100 114 1000 
NStgid: 22542
NSpid:  22542
NSpgid: 22542
NSsid:  3365
Kthread:        0
VmPeak:     2624 kB
VmSize:     2552 kB
VmLck:         0 kB
VmPin:         0 kB
VmHWM:      1024 kB
VmRSS:      1024 kB
RssAnon:               0 kB
RssFile:            1024 kB
RssShmem:              0 kB
VmData:       92 kB
VmStk:       136 kB
VmExe:         4 kB
VmLib:      1748 kB
VmPTE:        40 kB
VmSwap:        0 kB
HugetlbPages:          0 kB
CoreDumping:    0
THP_enabled:    1
untag_mask:     0xffffffffffffffff
Threads:        1
SigQ:   0/30676
SigPnd: 0000000000000000
ShdPnd: 0000000000000000
SigBlk: 0000000000000000
SigIgn: 0000000000000000
SigCgt: 0000000000000000
CapInh: 0000000000000000
CapPrm: 0000000000000000
CapEff: 0000000000000000
CapBnd: 000001ffffffffff
CapAmb: 0000000000000000
NoNewPrivs:     0
Seccomp:        0
Seccomp_filters:        0
Speculation_Store_Bypass:       thread vulnerable
SpeculationIndirectBranch:      conditional enabled
Cpus_allowed:   f
Cpus_allowed_list:      0-3
Mems_allowed:   00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000001
Mems_allowed_list:      0
voluntary_ctxt_switches:        0
nonvoluntary_ctxt_switches:     215
x86_Thread_features:
x86_Thread_features_locked:
*/