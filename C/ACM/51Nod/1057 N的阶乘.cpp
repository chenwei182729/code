#define LOCAL
#include<iostream>
using namespace std;
const int maxn=1000;
int num[maxn];
int cnt=0;
void Init()
{
	num[0]=1;
	for(int i=1;i<maxn;i++)
	{
		num[i]=0;
	}
}
int main(void)
{
#ifndef LOCAL
    freopen("1057.in","r",stdin);
    freopen("1057.out","w",stdout);
#endif
	int i,N,now=1;
	Init();
	cin>>N;
	cnt=1;
	for(i=N;i>0;i--)
	{
		for(j=0;j<cnt;j++)
		{
			
		}
	}
	return 0;
}
