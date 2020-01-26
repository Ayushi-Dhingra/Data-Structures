#include<stdio.h>
#define SIZE 10
int  top=-1,o;

struct stack
{
	int x;
	char c;
}s[SIZE];
int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

int push(char item,int no)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  top++;
  s[top].x=no;
    s[top].c = item;
    printf("%d %c\n",  top,  s[top].c);
  
}

// Function to remove an item from stack.  It decreases top by 1
void pop()
{
  char temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
   //return -1;
  }
  top--;
  temp=s[top].c;
  s[top].x;
printf(" %c popped from stack\n",temp);
 // printf("Top is now at %d\n", top);
  //return temp;
}
char peak()
{o=s[top].x;
	return s[top].c;
}
int main()
{
	//stack s[SIZE];
	char st[SIZE];
	for(int i=0;i<SIZE;i++)
	{
		scanf("%c",&st[i]);
	}
	for(int i=0;i<SIZE;i++)
	{char x=peak();
		if(st[i]=='('||st[i]=='['||st[i]=='{')
		{ push(st[i],i);
		}

   else  if((st[i]==')')&&(x=='('))
	{
		pop();
	}
  else   if(st[i]=='}'&&peak()=='{')
	{
		pop();
	}
  else  if(st[i]==']'&&peak()=='[')
	{
		pop();
	}
else if((st[i]=='}'||st[i]==')'||st[i]==']')&&(st[i]!=peak()))
{
	printf("INCORRECT AT %d\n",i);
	break;
	}
	
	
}
//	printf("%c\n",peak());
//	else if()


	/*for(int i=0;i<SIZE;i++)
	{
		printf("%d %c\n",s[i].c,s[i].x);
	}*/

}
