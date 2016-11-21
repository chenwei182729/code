#include<iostream>
using namespace std;
int main(void)
{
	register long long N,K,s=0;
	cin>>N>>K;
	for(long long i=2;i<=N;i++)
	{
		s=(s+K)%i;
	}
	cout<<s+1<<endl;
	return 0;
} 
