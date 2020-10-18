include"ch02.h"
int main()
{
FILE *fp;
fd =fdopen(1,"w+");
fprintf(fp,"test data %s\n","hello");
fclose(fp);
return 0;
}