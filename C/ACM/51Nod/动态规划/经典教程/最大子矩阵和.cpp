#define LOCAL
#include<iostream>
const int maxn=505;
const int maxm=505;
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("����Ӿ����.in","r",stdin);
    freopen("����Ӿ����.out","w",stdout);
#endif
	int M,N;
	long long v[maxn][maxm],c[maxn],endmax,answer,ans;
	int i,j,k;
	cin >> M >> N ;
	for(i = 1 ;i <= N ; i ++)
		for(j = 1 ; j <= M ; j ++)
			cin >> v[i][j] ;
			
	c[0] = v[1][1] ;
	ans = v[1][1];
	for(i = 1 ; i <= M ; i ++ )
	{
		for(j = i ; j <= M ; j++)
		{
			//�����j�� 
			for(k = 1 ; k <= N ; k ++)
			{
				c[k] = (j == i) ? v[k][j] : (c[k] + v[k][j]);	
			}
//			for(k = 1 ; k <= N ; k ++)
//			{
//				cout << c[k] << " ";
//			} 
//			cout << endl ;
			// ��̬�滮��������ֶκ�
			endmax = answer = c[1] ;
			for (k = 2 ; k <= N ; k ++)
			{
				endmax = max (endmax,0ll) + c[k];
				answer = max (answer,endmax);
			}
//			cout << answer << endl ; 
			if (ans < answer)
				ans = answer ;	
		}
	}
	cout << ans << endl ;
				
	return 0;
}
