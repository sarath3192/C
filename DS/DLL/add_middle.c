#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	struct st *prev;
	int num;
	struct st *next;
}ST;
void add_begin(void);
void add_middle(void);
void print(void);
//void save_file(FILE *);
ST *hp;

main()
{
	FILE *fp;
	fp=fopen("data","w");
	add_begin();
	add_begin();
	add_begin();
	add_begin();
	//print();
	//save_file(fp);
	add_middle();
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


void save_file(FILE *p)
{
  ST *temp=hp;
  while(temp)
 {
   fprintf(p,"%d ",temp->num);
   temp=temp->next;
 }
 //printf("\n");
}

void add_middle()
{
  ST *temp,*temp1=hp;
  temp=malloc(sizeof(ST));
  temp->prev=temp->next=0;
  printf("enter the number\n");
  scanf("%d",&temp->num);
  if(hp==0)
 {
   hp=temp;
  }
  while(temp->num > temp1->num)// assumming the there is already a linked list is available at least one
  {
         temp1=temp1->next;
	 if(temp1-==0)
	 {
           break;
	  }
        
  }
  
  if(tem

