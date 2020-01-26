#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *start;


void add(int item)
{
struct node *newnode;
//start =NULL;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->info=item;
newnode->link=start;
start=newnode;

}
void traverse()
{
	struct node *ptr=start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->link;
	} 
}
int main()
{ 
int i=0;
while(i!=5)
{
	add(i);
	i++;
}
traverse();


}
