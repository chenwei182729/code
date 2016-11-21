#define LOCAL
#include<iostream>
#include<cstring>
const int MAXN=101;
const int MAXW=50;
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("多重背包问题.in","r",stdin);
    freopen("多重背包问题.out","w",stdout);
#endif
	int N, i, j, W;
	long long dp[MAXN][MAXW],tmp;
	int w[MAXN],p[MAXN],c[MAXN];//体积，价值，数量 
	cin >> N >> W;
	for(i = 1 ; i <= N ; i ++)
	{
		cin >> w[i] >> p[i] >> c[i];
	}
	for(i = 1 ; i <= N ; i ++)
	{
		cout << w[i] << " " << p[i] << " " << c[i] << endl ;
	}
	memset(dp,0,sizeof(dp)/sizeof(*dp));
	int k ;
	for(i = 1 ; i <= N ; i ++)
	{
		for(j = w[i] ; j <= W ; j ++)
		{
			k = c[i] ;
			tmp = dp[i - 1][j];
			for( ; k >= 0 ; k --)
			{
				if(j - k * w[i] >= 0) 
				{
					tmp = max(dp[i - 1][ j - k * w[i]] + k * w[i],tmp);
				}
			}
			dp[i][j] = tmp ;
		}	
	}
	for(i = 0 ; i <= W ; i ++)
		cout << i << " ";
	cout << endl ; 
	for(i = 0 ; i <= N ; i ++)
	{
		for(j = 0 ; j <= W ; j ++)
		{
			cout << dp[i][j] << " ";
		}	
		cout << endl ;
	}
	return 0;
}
