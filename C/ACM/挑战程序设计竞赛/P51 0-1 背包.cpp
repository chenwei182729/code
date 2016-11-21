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
int dp[maxn][maxw];
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
	//dp[i + 1][j] := 从前i个物品选出总重量不超过j的物品是总价值的最大值
	//dp[0][j] = 0
	for(int i = 0 ; i < n ; i ++)
	{
		for(int j = 0 ; j <= W ; j ++)
		{
			if(j < w[i])
				dp[i + 1][j] = dp[i][j];
			else
				dp[i + 1][j] = max(dp[i][j],dp[i][j - w[i]] + v[i]);
		}
	}
	printf("%d\n",dp[n][W]); 
}

