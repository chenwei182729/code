//#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
const int maxn=50005;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data2.in","r",stdin);
    freopen("data2.out","w",stdout);
#endif
	long A[maxn],N,i;
	long endmax,answer;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	sum=answer=A[0];
	for(i=1;i<N;i++)
	{
		sum=max(sum,0L)+A[i];
		answer=max(answer,sum);
	}
	cout<<answer<<endl; 
	return 0;
}
