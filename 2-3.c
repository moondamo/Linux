#include"ch2.h"
int main()
{
int ret;
char buf[101];
int fd;
memset(buf,0,sizeof(buf));
fd=open("./test.data",0_CREAT|0_TRUNC|0_RDWR,0623);
printf("newfile descripting%d\n",fd);
printf("%d : 2-2isrunning\n",13);
ret=write(1,"helloworld\n",13);
printf("ret = %d\n",ret);
sleep(10);
printf("input data <=100:\n");
fgets(buf,100,stdin);
ret=write(fd,buf,sizeof(buf));
printf("ret = %d\n ",ret);
exit(0);
}