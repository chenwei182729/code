#define LOCAL
#include<iostream>
using namespace std;
const int MAXM = 1000;
const int MAXN = 1000;
int a[MAXM][MAXN];
int b[MAXN][MAXM];
int main(void)
{
#ifdef LOCAL
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
#endif
	int flag,m,n;
	cin >> m >> n >> flag ;
	int i , j ; 
	for(i = 0 ; i < m; i++)
	{
		for(j = 0; j < n;j ++)
		{
			cin >> a[i][j];
		}
	}
	cin >> flag;
	
	if(flag == 0)
	{
		//×óÐý×ª 
		for(i = 0 ; i < m ;i ++)
		{
			for(j = 0 ;j < n ;j ++)
			{ 
				b[j][i] = a[i][m - j];
			}
		}
	}
	else if(flag == 1)
	{
		//ÓÒÐý×ª 
		for(i = 0 ; i < m ;i ++)
		{
			for(j = 0 ;j < n ;j ++)
			{ 
				b[j][m - i - 1] = a[i][j];
			}
		}
	} 
	
	for(i = 0 ; i < n; i++)
	{
		for(j = 0; j < m;j ++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl ; 
	}
	return 0;	
} 
