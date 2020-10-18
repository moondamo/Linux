include"ch02.h"
int main()
{
FILE *fp;
char buf[80];
int ret;
memset(buf,0,sizeof(buf));
if((fp=fopen("./test1.txt","w"))==NULL)
  perror("open failed!\n");
printf("please input string you want to store in file:\t");
fgets(buf,sizeof(buf),stdin);
printf("Content is %s\n,the size of stream is %ld bytes.\nc",buf,sizeof(buf));
ret = fwrite(buf,4,sizeof(buf)/4,fp);
printf("actual writing number of item is %d/n",ret);
fclose(fp);
return 0;
}

