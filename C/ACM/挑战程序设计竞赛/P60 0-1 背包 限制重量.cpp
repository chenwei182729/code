//0 1 背包 
#define LOCAL
#include<iostream>
#include<queue>
#include<climits>
const int maxn=101;
const int maxw=10001;
using namespace std;
int w[maxn],v[maxn];
int n , W ;
int dp[maxn+1][maxn * maxw + 1];
void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("p51.in","r",stdin);
    freopen("p51.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
//读入数据 
void init()
{
	cin >> n >> W ;
	for(int i = 0 ; i < n ; i++)
		cin >> w[i] >> v[i] ;
}

void solve()
{
	fill(dp[0] , dp[0] + maxn * maxw + 1, INF);
	dp[0][0] = 0 ;
	for(int i = 0 ; i < n ;i ++)
	{
		for(int j = 0 ; j <= MAX_N * MAX_V; j++)
		{
			if(j < v[i])
			{
				dp[i + 1][j] = dp[i][j];
			}
			else
			{
				dp[i + 1][j] = min(dp[i][j],dp[i][j - v[i]] + w[i]);
			}
		}
	}
	int res = 0 ;
	for(int i = 0 ; i <= maxn * maxw ; i ++) if(dp[n][i] <= W) res = i ;
	printf("%d\n",res);
}

