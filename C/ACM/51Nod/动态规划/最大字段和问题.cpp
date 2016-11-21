#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
const int maxn=50005;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data2.in","r",stdin);
    freopen("data2.out","w",stdout);
#endif
	long long A[maxn],N,i;
	long long endmax,answer;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	endmax=answer=A[0];
	for(i=1;i<N;i++)
	{
		endmax=max(endmax,0LL)+A[i];
		answer=max(answer,endmax);
	}
	cout<<answer<<endl; 
	return 0;
}
