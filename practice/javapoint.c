#include
/*int main()
{
 int i=0;
 char *p=0;
}*/

int main()
{
 float i=10,*j;
 void *k;

 j=k=&i;
 j++;
 k++;
 printf("%u %u",*j,k);
 return 0;
}

/*int main()
{
 int i=5;
 int a[3]={1,2,4};
 int *p=a;
 printf("%d %d %d\n",*p,*p++,*p++);
 printf("%d %d %d\n",i,++i,i++);
}*/

/*int main()
{
 static char *s[]={"hello","hi","bye"};
 int i;
 for(i=0;i<3;i++) 
 printf("%c\n",s[i][0]);
}*/

