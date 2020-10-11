#include "ch2.h"
int main()
{
int ret;
printf("2-2isrunning\n");
ret=write(1,"helloworld\n",13);
sleep(100);
exit(0);
}