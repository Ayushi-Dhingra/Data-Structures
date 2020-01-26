#include<stdio.h>
void checkHeap(int arr[],int n)
{int f=0;
	for(int i=0;i<n/2;i++)
	{int l=2*i+1;
	int r=2*i+2;
		if(arr[i]<arr[l]&&arr[i]<arr[r])
		{
			f=0;
			break;
		}
		else
		{
			f=1;
		}
	}
	if(f==1)
	{
		printf("max heap\n");
	}
	else
	{
		printf("not\n");
	}
}
void maxheap(int arr[],int n)
{ int max=0;
for(int i=(n/2)-1;i>=0;i--)
	{int l=2*i+1;
	int r=2*i+2;
	if(arr[l]<arr[r])
	{
		max=r;
	}
	else
	{max=l ;
	}
		if(arr[i]<arr[max])
		{
			int temp=arr[i];
			arr[i]=arr[max];
			arr[max]=temp;
			
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		
}
int main()
{
	int arr[7]={2,3,1,96,97,98,99};
	checkHeap(arr,7);
	maxheap(arr,7);
}
