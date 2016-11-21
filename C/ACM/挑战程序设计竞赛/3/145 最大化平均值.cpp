#define LOCAL
#include<iostream>
#include<climits>
#include<algorithm>
const int MAXN = 10001 ;
int w[MAXN],v[MAXN] ;
double y[MAXN] ;
int N,k ;
using namespace std;
bool C(double x);
void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("145 最大化平均值.in","r",stdin);
    freopen("145 最大化平均值.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
bool C(double x)
{
	for(int i = 0;i < N ; i++)
	{
		y[i] = v[i] - x * w[i] ;
	}
	sort(y,y + N);
	//
	double sum = 0 ;
	for(int i = 0 ; i < k ; i ++)
	{
		sum += y[N - i - 1] ;
	}
	
	return sum >= 0 ;
}
void init()
{
	cin >> N >> k ;
	for(int i = 0 ; i < N ; i++) 
		cin >> w[i] >> v[i];
}
void solve()
{
	double lb = 0 , ub = INT_MAX;
	for(int i = 0;i < 100 ; i ++)
	{
		double mid = (lb + ub) / 2 ; 
		if(C(mid)) lb = mid;
		else ub = mid ;
	}
	printf("%.2f\n",ub);
}
