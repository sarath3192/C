#include<stdio.h>
int ffun(void);
int ffun()
{
  extern int a[];
  
  printf("SIZE2%d",a[1]);

}
