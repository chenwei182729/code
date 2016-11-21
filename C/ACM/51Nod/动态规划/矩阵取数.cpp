#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
const int maxn=505;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data1.in","r",stdin);
    freopen("data1.out","w",stdout);
#endif
	int A[maxn][maxn],N,f[maxn][maxn],col,row;
	cin>>N;
	memset(A,0,sizeof(A));
	memset(f,0,sizeof(f));
	for(col=1;col<=N;col++)
	{
		for(row=1;row<=N;row++)
		{
			cin>>A[row][col];
		}
	} 
	for(col=1;col<=N;col++)
	{
		for(row=1;row<=N;row++)
		{
			f[row][col]=max(f[row-1][col],f[row][col-1])+A[row][col];
		}
	} 
	cout<<f[N][N]<<endl;
	return 0;
}
