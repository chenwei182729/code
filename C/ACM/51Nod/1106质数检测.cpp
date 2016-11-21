#include<iostream>
using namespace std;
const int N=400000;
const int M=10000000;
int prime[N]; 
int main(void)
{
	int ii=0,jj=0,n=3,count=1,flag=0;
	prime[0]=2;
	for(ii=3;ii<M;ii++)
	{
		flag=1;//默认是素数 
		for(jj=0;jj<count;jj++)
		{
			if(ii%prime[jj]==0)
			{
				flag=0;//不是素数 
				break;
			} 
		}
		if(flag)
		{
			prime[count++]=ii;
		}
	}	
	for(ii=0;ii<count;ii++)
	{
		cout<<prime[ii]<<" ";
	}
	cout<<endl;
	return 0;
} 
