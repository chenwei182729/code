#define LOCAL
#include<iostream>
#include<algorithm>
const int maxn=505;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("1002.in","r",stdin);
    freopen("1002.out","w",stdout);
#endif
	int a[maxn][maxn];
	int i,j,N;
	cin>>N;
	for(j=1;j<=N;j++)
	{
		for(i=1;i<=j;i++)
		{
			cin>>a[i][j];
		}
	}
	for(j=N;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
			a[i][j-1]=max(a[i][j-1]+a[i][j],a[i][j-1]+a[i+1][j]);
		}
	}
	cout<<a[1][1]<<endl;
	return 0;
}
