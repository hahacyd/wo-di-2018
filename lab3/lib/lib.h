#ifndef __lib_h__
#define __lib_h__

#define __NR_exit 1
#define __NR_fork 2
#define __NR_read 3
#define __NR_write 4
#define __NR_open 5
#define __NR_close 6
#define __NR_waitpid 7

#define __NR_clock_nanosleep 230
void printf(const char *format,...);
void fs_write(int fd,const char* address,int length);
int fork();
int sleep();
int exit();
#endif
