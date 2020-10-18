include"ch02.h"
int main()
{
int fd;
fd = open("./test1.txt",0_CREAT,0623);
printf("file fd = %d\n",fd);
clode(fd);
return 0;
}