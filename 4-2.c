#include"ch03.h"
char buf1[]="abcdefghij";
char buf2[]="0123456789";
int main(void)
{
int fd;
if((fd=open("file.hole",0_WRONLY|0_CREAT,0623))<0)
ERR_EXIT("creat error");
if(write(fd,buf1,10)!=10)
ERR_EXIT("write error");
if(lseek(fd,40,SEEK_SET)==-1)
ERR_EXIT("lseek error");
return 0;
}
