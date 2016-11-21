#define LOCAL
#include<iostream>
const int maxn=50005;
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("循环数组最大字段和.in","r",stdin);
    freopen("循环数组最大字段和.out","w",stdout);
#endif
	int N;
	long long s[maxn]; 
	long long endmin,ansmin,endmax,ansmax,sum;
	int i;
	cin >> N ;
	sum = 0 ;
	for(i = 0 ;i < N ; i ++)
	{
		cin >> s[i] ;
		sum += s[i] ;
	}
	endmin = ansmin = s[0];
	endmax = ansmax = s[0];
	for(i=1;i<N;i++)
	{
		endmin = min(endmin,0LL) + s[i];
		ansmin = min(ansmin,endmin);
		
		endmax = max(endmax,0LL) + s[i];
		ansmax = max(ansmax,endmax); 
	}
	cout << max(ansmax,sum-ansmin) << endl;
				
	return 0;
}
