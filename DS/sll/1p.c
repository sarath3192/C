#include<stdio.h>
#include<stdlib.h>
#include"sllheader.h"
void main()
{
  system("clear");
 // char ch;
  S *hp=0;
/*  do
   {
    addbegin(&hp);
    printf("do you want to add one more node:Y/y ");
    scanf(" %c",&ch);
    system("clear"); 
   }while((ch=='y')||(ch=='Y'));
  // print(hp);
   savefile(hp);*/
 scanfile(&hp);
 print(hp);
 revlink(&hp);
printf("revlink\n");
 print(hp);
//savefilerec(hp);
// revprint(hp);
}
void revprintrec(S *ptr)
{
   if((ptr->pt)!=NULL)
    revprintrec(ptr->pt);
   printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

 } 

void scanfile(S **ptr)
{
  int *s=0;	
  char ch=0;
  int i=0;
  S *temp;
  free(temp);
  FILE *fp;
   fp=fopen("studentdata","r");
   temp=(S*)malloc(sizeof(S));
   while(fscanf(fp,"%d %s %f",&(temp->roll),temp->name,&(temp->marks))!=EOF)
   {
    temp->pt=*ptr;
    *ptr=temp;
    temp=malloc(sizeof(S));
    //printf("yes\n");
   }
   perror("free:");
}
void savefile(S *ptr)
{
  S *temp=ptr;
  FILE *fp;
  fp=fopen("studentdata","w");
  while(temp)
  {
    fprintf(fp,"%d %s %f\n",temp->roll,temp->name,temp->marks);
    temp=temp->pt;
  }
}  
void addend(S **ptr)
{
  S *temp1,*temp;
  temp=malloc(sizeof(S));
  printf("enter the name: ");
  scanf("%s",temp->name);
  printf("\n");
  printf("enter the roll number: ");
  scanf("%d",&(temp->roll));
  printf("\n");
  printf("enter the mark: ");
  scanf("%f",&(temp->marks));
  printf("\n");
  temp->pt=0;
  if(*ptr==0)
  {
    *ptr=temp;
  }
  else
  {
    temp1=*ptr;
    while(temp1->pt)
    {
      temp1=temp1->pt;
    }
    temp1->pt=temp;
        
  }
  
}

void addbegin(S **ptr)
{
  S *temp;
  temp=malloc(sizeof(S));
  printf("enter the name: ");
  scanf("%s",temp->name);
  printf("\n");
  printf("enter the roll number: ");
  scanf("%d",&(temp->roll));
  printf("\n");
  printf("enter the mark: ");
  scanf("%f",&(temp->marks));
  printf("\n");
  temp->pt=*ptr;
  *ptr=temp;
//  system
}

void print(S *ptr)
{
  if(ptr==0)
  {
   printf("there is no nodes present\n");
   return;
  }   
  while(ptr)
  {	  
  printf("roll:%d",ptr->roll);
  printf(" name:%s",ptr->name);
  printf(" marks:%f ",ptr->marks);
  printf("\n");
    ptr=ptr->pt;
  }
}

void revprint(S *ptr)
{
  int count=0,j;
  S *temp=ptr;
  count=nodecount(ptr);
  if(count==0)
  {
    printf("no nodes are present\n");
    return;
  }
  while(count)
  {
    for(j=1;j<count;j++)
    {
      ptr=ptr->pt;
    }
     printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
     ptr=temp;
     count--;
  }
}

int nodecount(S *ptr)
{
  int count=0;
  while(ptr)
  {
   count++;
   ptr=ptr->pt;
  }
  return count;
}  

void printrec(S *ptr)
{
  if(!ptr)
  {	  
    printf("no nodes are present\n");
    return;
  }
  printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
  if(ptr->pt)
  printrec(ptr->pt);
}

void savefilerec(S *ptr)
{
	static int i=0;
	static FILE *fp;
	if(i==0)
	{
		if(!ptr)
		{
			printf("no nodes are present\n");
			return;
		}
		fp=fopen("studdata","w");
		if(fp==0)
		{
			perror("file:");
			return;
		}
		i=1;
	}
    fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
    if(ptr->pt)
    {
     savefilerec(ptr->pt);
    }
}
      
void scanfilerec(S **ptr)
{
   static int i=0;
   static  S *temp;
   static FILE *fp;
   if(i==0)
   {
     fp=fopen("studentdata","r");
     temp=(S*)malloc(sizeof(S));
   }
   if(fscanf(fp,"%d %s %f",&(temp->roll),temp->name,&(temp->marks))!=EOF)
   {
    temp->pt=*ptr;
    *ptr=temp;
    temp=malloc(sizeof(S));
    scanfilerec(ptr);
    //printf("yes\n");
   }
   //perror("free:");
   free(temp);
}

void revlink(S **ptr)
{
	int i=0,j=0;
	i=nodecount(*ptr);
	if(i==0)
	{
		printf("no nodes are present\n");
		return;
	}
	S *p,*temp1=(S*)*ptr,temp;
	p=malloc(8*i);
	i=0;
	while(temp1)
	{
		p[i++]=temp1;
		temp1=temp1->pt;
	}

	temp1=p[j];
	for(j=0;j<i;j++,i--)
	{
		temp=p[j];
		p[j]=p[i];
		p[i]=temp;
	}
}


