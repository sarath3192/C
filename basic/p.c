#include<stdio.h>
enum test{mon=1,tus,wed=6,thu,fri=2,sat,sun};
 char p(int);
int main()
{
 enum test v;
//v *p;
//p=&s;
//p=&mon;
 printf("%d %d %d %d %d %d %d\n",mon,tus,wed,thu,fri,sat,sun);
 printf("%d\n",mon);
 printf("%d\n",sizeof(p));

}
char p(int i)
{

}
