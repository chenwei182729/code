#define LOCAL
#include<iostream>
#include<algorithm>
using namespace std;
int solve(int n)
{
	int sum=0;
	while(n)
	{
		if(n>9) 
		{
			sum=sum+n%10+1;
		}
		else
		{
			sum+=1;
		}
		n=n/10;
	}
	return sum;
}
int main(void)
{
#ifndef LOCAL
    freopen("1009.in","r",stdin);
    freopen("1009.out","w",stdout);
#endif 
	int N;
	cin>>N;
	cout<<solve(N);
	return 0;
}
