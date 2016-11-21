#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
const int maxn=10005;
const int maxnn=101;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data5.in","r",stdin);
    freopen("data5.out","w",stdout);
#endif
	int N,W;
	long f[maxn];
	int i,j;
	int w[maxnn],p[maxnn];
	cin>>N>>W;
	for(i=0;i<N;i++)
	{
		cin>>w[i]>>p[i]; 
	} 
	for(i=0;i<=W;i++)
		f[i]=0;
	for(i=0;i<N;i++)
	{
		//此处是j从W减小到w[i] 
		for(j=W;j>=w[i];j--)
		{
			f[j]=max(f[j],f[j-w[i]]+p[i]);
		}
	}
	cout<<f[W]<<endl;
	return 0;
}
