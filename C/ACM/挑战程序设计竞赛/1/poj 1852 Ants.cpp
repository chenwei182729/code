//#define LOCAL
#include<iostream>
#include<algorithm>
using namespace std;
void solve();
int main()
{
#ifndef LOCAL
    freopen("poj 1852 Ants.in","r",stdin);
    freopen("poj 1852 Ants.out","w",stdout);
#endif
	solve();
	return 0;
} 
void solve()
{
	int L,n,x,T;
	int minT = 0,maxT = 0;
	cin>> T;
	while(T--)
	{
		cin>>L>>n;
		minT = 0 ,maxT = 0 ;
		for(int i = 0 ; i < n;i++)
		{
			cin>>x;
			minT = max(minT,min(x,L - x));
			maxT = max(maxT,max(x,L - x));
		}
		cout<<minT<< " " << maxT << endl;
	}
}
