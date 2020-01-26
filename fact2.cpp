#include<iostream>
#include<math.h>
using namespace std;
class abc
{
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
	cout<<"armstrong\n";
	else
	cout<<"Not armstrong\n";
}
void linear(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		cout<<"No found\n";
	}
}
};
int main()
{
	abc j=new 
	int n;
	cin>>n;
	int x=fact(n);
	cout<<"FACTORIAL OF THE NUMBER "<<x;
	cin>>n;
	armstrong(n);
	cout<<"\n No of elemnts in array\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"\nthe no to be search";
	int f;
	//scanf("%d",&n);
	cin>>f;
	linear(arr,n,f);
	
}
