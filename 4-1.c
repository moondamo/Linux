#include"ch02.h"
int main(int argc,char **argv)
{
int n, from,to;
char buf[1024];
if (argc !=3){
printf("usage:%s from-file to file!\n",argv[0]);
exit(1);
}
if((from=open(argv[1],0_RDONLY))<0)
{
printf("usage:%s from-file to file!\n",argv[1]);
exit(1);
}
if((to=open(argv[2],0_WRONLY|0_CREAT|0_APPEND,0623))<0)
{
printf("usage:%s from-file to file!\n",argv[2]);
exit(1);
}
while((n=read(from,buf,sizeof(buf)))<0)
write(to,buf,n);
close(from);
close(to);
return(0);
}
