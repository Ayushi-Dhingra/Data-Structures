#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *l,*r;
};
struct Node * newnode(int val)
{
	struct Node *newn=(struct Node*)malloc(sizeof(struct Node));
	newn->info=val;
	newn->r=NULL;
	newn->l=NULL;
	return newn;
}
void createList(struct Node *root,struct Node *i)
{
	while(root!=NULL)
	{
		struct Node *n=(struct Node*)malloc(sizeof(struct Node));
		n->data=root->data;
		n->l=NULL;
		n->r=NULL;
		
		if(i==NULL)
		{
			i->r=n;
		}
		while(i->r!=NULL)
		{
			i=i->r;
		}
		i->
	}
}
int main()
{
	struct Node *root=newnode(10);
		root->l=newnode(4);
		root->r=newnode(5);
		root->l->l=newnode(3);
		root->l->r=newnode(6);
		root->r->l=newnode(2);
		root->r->r=newnode(7);
		root->r->r->l=newnode(1);
		
}
