#include<iostream>
#include<cmath>
using namespace std;
//ÊÇËØÊıreturn 1 
int prime(int n)
{
	if(n==1) return 0;
	int tmp=sqrt(n);
	for(int i=2;i<=tmp;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
} 
int main(void)
{
	int N,T;
	cin>>N;
	while(N--)
	{
		cin>>T;
		if(prime(T))
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}	
	return 0;
}
