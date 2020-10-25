#include"ch03.h"
int main()
{
int n,i,fd;
char buf;
fd=open("./test.dat",0_CREAT|0_WRONLY,0623);
for(i=0;i<2;i++)
{
srand(time(0));
n=rand()%26;
buf=(char)('A'+n);
write(fd,&buf,1);
lseek(fd,10,SEEK_SET);
sleep(70);
}
close(fd);
}
