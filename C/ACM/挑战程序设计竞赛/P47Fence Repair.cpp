#define LOCAL
#include<iostream>
const int MAXL = 20005 ;
int L[MAXL] ;
int N ;
using namespace std;

void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("Fence Repair.in","r",stdin);
    freopen("Fence Repair.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
void init()
{
	cin >> N ;
	for(int i = 0 ; i < N ; i++)
		cin >> L[i] ; 
}
void solve()
{
	long long ans = 0 ;
	while ( N > 1)
	{
		//最短板下标 和 次短板下标 
		int mii1 = 0, mii2 = 1;
		
		if(L[mii1] > L[mii2]) swap(mii1,mii2);
		//找到最短板 和 次短板 
		for(int i = 2 ;i < N - 1 ; i++)
		{
			if (L[i] < L[mii1])
			{
				mii2 = mii1;
				mii1 = i ;
			}
			else if(L[i] < L[mii2])
			{
				mii2 = i ;
			}
		} 
		int tmp = L[mii1] + L[mii2];
		ans = ans + tmp ;
		// 
		if(mii1 == N - 1) swap(mii1,mii2);
		L[mii1] = tmp ;
		L[mii2] = L[N - 1];
		N-- ;
	}
	cout << ans << endl ;
}
