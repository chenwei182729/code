#define LOCAL
#include<iostream>
#include<cstring>
const int MAXN=101;
const int MAXW=50001;
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("���ر�������.in","r",stdin);
    freopen("���ر�������.out","w",stdout);
#endif
	int N, i, j, W;
	int f[MAXW];
	int w[MAXN],p[MAXN],c[MAXN];//�������ֵ������ 
	cin >> N >> W;
	for(i = 1 ; i <= N ; i ++)
	{
		cin >> w[i] >> p[i] >> c[i];
	}
	memset(f,0,sizeof(f));
//	for(j = 0 ; j <= W ; j ++)
//		cout << f[j] << " ";
	int k ;
	for(i = 1 ; i <= N ; )
	{
		//((--c[i])== 0 ? i : i ++)
		--c[i] ;
		//�˴���j��W��С��w[i] 
		for(j = W;j >= w[i] ; j--)
		{
			f[j]=max(f[j],f[j-w[i]]+p[i]);
		}
//		for(j = 0 ; j <= W ; j ++)
//			cout << f[j] << " ";
//		cout << endl ; 
		if(c[i] == 0)
			i++;
	}
	cout << f[W] << endl ; 
	return 0;
}
