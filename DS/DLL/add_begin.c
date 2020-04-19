#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	struct st *prev;
	int num;
	struct st *next;
}ST;
void add_begin(void);
void print(void);
ST *hp;

main()
{
	add_begin();
	add_begin();
	add_begin();
	add_begin();
	print();
}

void add_begin()
{
	ST *temp;
	temp=malloc(sizeof(ST));
	printf("enter the data\n");
	scanf("%d",&temp->num);
	temp->prev=0,temp->next=0;
	if(hp==0)
	{
		hp=temp;
	}
	else
	{
		hp->prev=temp;
		temp->next=hp;
		hp=temp;
	}
}


void print()
{
  ST *temp=hp;
  while(temp)
 {
   printf("%d ",temp->num);
   temp=temp->next;
 }
 printf("\n");
}
