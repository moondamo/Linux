#include "ch03.h"
int main()
{
int d1;
d1=open("./out.info",0_CREAT|0_TRUNC|0_WRONLY,0623);
dup2(d1,1);
/* d1=dup(STDOUT_FILENO);
 */
printf("redirect stdout file\n");
return 0;
}
