#include<stdio.h>
void fun(int r,int c,int arr[4][4])
{
	if(r==4||c>=4||c<0)
	{

	}
	else
	{ 
		printf("%d ",arr[r][c]);
		fun(r+1,c-1,arr);
		fun(r+1,c+1,arr);
	}
}
int main()
{int n,m,x,y;
scanf("%d%d",&n,&m);
int arr[4][4];
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		scanf("%d",&arr[i][j]);
	}
 } 
 scanf("%d%d",&x,&y);
 fun(x,y,arr);
 
 
}
