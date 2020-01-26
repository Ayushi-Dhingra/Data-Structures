#include<iostream>
using namespace std;
int su(int n,int f=0)
{int sod=0;
	if(f==0)
	{
		f=1;
		sod=sod+n%10+su(n/10,f);
		return sod;
	}
	else{
		if(n<10){
			return n;
		}
		else
		{
			return su(n/10,f);
		}
	}
}
/*int main()
{
	int k;
	cin>>k;
	cout<<endl<<su(k);
}*/
