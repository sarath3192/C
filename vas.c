#include<stdio.h>
main()
{
int i=1<<31|1<<29;
unsigned int j=1,k;
k=i>>j;
printf("%d %d\n",(unsigned)i>>j,k);
}
