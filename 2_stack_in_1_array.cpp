#include<stdio.h>
#define SIZE 10
int a[SIZE],top1=-1,top2=SIZE;
int overflow()
{
	return top1==top2;
}
int underFlow()
{
	if(top1==-1)
	{
		return top1==-1;
	}
	else
	{
		return top2==SIZE;
	}
}
void push1(int item)
{
	if(overflow())
	{
		printf("stop\n");
	}
		top1++;
		a[top1]=item;
	printf("%d %d\n",top1,a[top1]);	
		
}
void push2(int item)
{
	if(overflow())
	{
		printf("stop\n");
	}
		top2--;
		a[top2]=item;
			
	printf("%d %d\n",top2,a[top2]);	
		
}
int pop1()
{
	if(underFlow())
	{printf("stop\n");
	return -1;
	}
	int temp=a[top1--];
	printf("deleted %d\n",temp);
	return temp;
}
int pop2()
{
	if(underFlow())
	{printf("stop\n");
	return -1;
	}
	int temp=a[top2++];
	printf("deleted %d\n",temp);
	return temp;
}
int main()
{
	push1(10);
	push2(20);
	push1(40);
	push1(30);
	push1(50);
	push2(60);
	pop1();
	pop2();
	pop1();
	pop2();
	pop2();
}
