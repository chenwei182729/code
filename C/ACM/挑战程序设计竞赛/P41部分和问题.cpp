//#define LOCAL
#include<iostream>
using namespace std;
const int maxn=25;
int a[maxn],k,n;
//已经对前i项进行搜索，和为sum 
bool dfs(int i,int sum)
{
	if(i==n)	return sum==k;
	if(dfs(i+1,sum)) return true;
	if(dfs(i+1,sum+a[i]))	return true;
	return false;
}
void solve()
{
	if(dfs(0,0)) cout<<"Yes\n";
	else cout<<"No\n"; 
}
int main(void)
{
#ifndef LOCAL
    freopen("data1.in","r",stdin);
    freopen("data1.out","w",stdout);
#endif
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	solve();
	return 0;
} 
