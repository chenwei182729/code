#define LOCAL
#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
const int MAXN = 2000 ;
double x[MAXN] ;
int N,M;
using namespace std;
bool C(double x);
void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("143 Aggressive cows.in","r",stdin);
    freopen("143 Aggressive cows.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
bool C(double d)
{
	int last = 0 ;
	for(int i = 1; i < M ; i++)
	{
		int crt = last + 1 ;
		while(crt < N && x[crt] - x[last] < d)
			crt++;
		
		if(crt == N) return false;
		last = crt ;
	}
	return true;
}
void init()
{
	cin >> N >> M ;
	for(int i = 0 ; i < N ; i++) 
		cin >> x[i] ;
}
void solve()
{
	sort(x,x + N);
	
	int lb = 0 , ub = INT_MAX;
	while (ub - lb > 1)
	{
		int mid = (ub + lb) / 2 ;
		if(C(mid)) lb = mid ;
		else ub = mid;
	}
	printf("%d\n",lb);
}
