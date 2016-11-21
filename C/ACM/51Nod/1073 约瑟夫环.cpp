#include<iostream>
using namespace std;
void solve(long long &N,long long &K)
{
	long long s=0;
	for(long long i=2;i<=N;i++)
	{
		s=(s+K)%i;
	}
	cout<<s+1<<endl;
}
int main(void)
{
	long long N,K;
	cin>>N>>K;
	solve(N,K);
	return 0;
} 
