#define LOCAL
#include<iostream>
#include<cstring>
const int MAXN=101;
const int MAXW=50001;
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("多重背包问题.in","r",stdin);
    freopen("多重背包问题.out","w",stdout);
#endif
	int N, i, j, W;
	int f[MAXW];
	int w[MAXN],p[MAXN],c[MAXN];//体积，价值，数量 
	int tmpw,tmpp;
	cin >> N >> W;
	for(i = 1 ; i <= N ; i ++)
	{
		cin >> w[i] >> p[i] >> c[i];
	}
	memset(f,0,sizeof(f));
	int k ;
	for(i = 1 ; i <= N ; i++)
	{
		for(k = 1 ; k <= c[i] ;k *= 2)
		{
			tmpw = k * w[i] ;
			tmpp = k * p[i] ;
			for(j = W;j >= tmpw ; j--)
			{
				f[j]=max(f[j],f[j-tmpw]+tmpp);
			}
			c[i] = c[i] - k ;
		}
		for(k = W ; k >= w[i] * c[i] ; k --)
			f[k] = max(f[k],f[k-w[i] * c[i]] + p[i] * c[i]);
	}
	cout << f[W] << endl ; 
	return 0;
}
