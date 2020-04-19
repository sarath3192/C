#include<stdio.h>
#define rot (*(volatile unsigned long*)0Xff)
void main()
{

 rot= 0;
 printf("%d",rot);

}
