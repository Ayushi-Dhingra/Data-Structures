#include<stdio.h>
#include<math.h>
int fact(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	return num*fact(num-1);
}
void armstrong(int num)
{
	int n=num;
	int c=0;
	while(n>0)
	{c++;
		int x=n%10;
		n=n/10;
		
	}
	n=num;
	int sum=0;
	while(num>0)
	{
		int x=num%10;
		sum=sum+pow(x,c);
		num=num/10;
	}
	if(sum==n)
	printf("armstrong\n");
	else
	printf("Not armstrong\n");
}
void linear(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		printf("No found\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int x=fact(n);
	printf("Factorial is %d",x);
	scanf("%d",&n);
	armstrong(n);
	printf("\n No of elemnts in array\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\nthe no to be search");
	int f;
	//scanf("%d",&n);
	scanf("%d",&f);
	linear(arr,n,f);
	
	
	
}
