#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *b;
	struct node *f;
};
struct node *start;
void push(int item)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=item;
	newnode->b=NULL;
	newnode->f=start;
	if(start!=NULL)
	start->b=newnode;
	start=newnode;
	
}
void push2(int item,int i2)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=start;
	while(ptr->info!=i2)
	{
		ptr=ptr->f;
	}
	newnode->info=item;
	newnode->b=ptr;
	newnode->f=ptr->f;
	ptr->f=newnode;
	newnode->f->b=newnode;
}
void push3(int item)
{
struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=start;
	while(ptr->f!=NULL)
	{
		ptr=ptr->f;
		}	
		newnode->info=item;
		newnode->f=NULL;
		newnode->b=ptr;
		ptr->f=newnode;
   } 
   void delet(int del)
   {
   	if(start==NULL)
   	{
   		printf("Cannot delete");
	   }
	struct node *ptr=start;
	while(ptr->info!=del)
	{
		ptr=ptr->f;
	}
	ptr->b->f=ptr->f;
	ptr->f->b=ptr->b;
	 }  
void read()
{
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr=ptr->f;
	}
}
int main()
{
	push(1);
	push(2);
	push(5);
	push(3);
	push2(4,2);
	push3(60);
	delet(5);
	read();
}
