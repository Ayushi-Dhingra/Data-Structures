#include<stdio.h>
int binary(int a[],int l,int r,int k)
{
	if(l>r)
	return -1;
	int m=(l+r)/2;
	if(a[m]==k)
	return m;
	if(a[l]<=a[m])
	{
		if(k>=a[l]&&k<=a[m])
		{
			return binary(a,l,m-1,k);
		}
		else
		{return binary(a,m+1,r,k);
		}
	}
	else
	{
	if(k>=a[m]&&k<=a[r])
	{return binary(a,m+1,r,k);
	}
	else
	{
		return binary(a,l,m,k);
	}
}
}
int main()
{
int a[7]={7,8,9,10,1,3,5};
int x=binary(a,0,6,9);
printf("%d\n",x);
}
