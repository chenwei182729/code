//#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
const int maxn=10005;
const int maxnn=105;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data6.in","r",stdin);
    freopen("data6.out","w",stdout);
#endif
	int f[maxn],i,j,A[maxnn],N,sum1,sum;
	cin>>N;
	sum1=0;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
		sum1+=A[i];
	}
	memset(f,maxn,0);
	sum=sum1/2;
	for(i=0;i<N;i++)
	{
		for(j=sum;j>=A[i];j--)
		{
			if(A[i]<=j)
			{
				f[j]=max(f[j],f[j-A[i]]+A[i]);
			}
		}	
	}
	cout<<sum1-2*f[sum]<<endl;
	return 0;
}
