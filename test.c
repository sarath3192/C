#include<stdio.h>
struct st
{
 char j;
 int m:5;
 int l;
 float f;
};
int main()
{
 struct st a;
 printf("%d",sizeof(struct st));
}
