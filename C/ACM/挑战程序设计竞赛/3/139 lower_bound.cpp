#define LOCAL
#include<iostream>
const int MAXN = 2000 ;
char a[MAXN] ;
int N,K;
using namespace std;

void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("139 lower_bound.in","r",stdin);
    freopen("139 lower_bound.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
void init()
{
	cin >> N >> K ;
	for(int i = 0 ; i < N ; i++) 
		cin >> a[i] ;
}
void solve()
{
	int lb = 0 , ub = N ;
	while(ub - lb > 1)
	{
		int mid = (lb + ub) / 2 ;
		if(a[mid] >= K) 
		{
			ub = mid ;
		}
		else
		{
			lb = mid ;
		}
	}
	cout << ub << endl ;
}
