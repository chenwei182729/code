#define LOCAL
#include<iostream>
#include<cmath>
#include<climits>
const int MAXN = 2000 ;
double L[MAXN] ;
int N,K;
using namespace std;
bool C(double x);
void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("141 Cable master.in","r",stdin);
    freopen("141 Cable master.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
bool C(double x)
{
	int num = 0 ;
	for(int i = 0 ; i < N ; i++)
	{
		num += (int)(L[i]/x);
	}
	return num >= K ;
}
void init()
{
	cin >> N >> K ;
	for(int i = 0 ; i < N ; i++) 
		cin >> L[i] ;
}
void solve()
{
	double lb = 0 , ub = INT_MAX ;//
	for(int i = 0 ; i < 100 ;i++)
	{
		double mid = (lb + ub) / 2;
		if(C(mid)) lb = mid ;
		else ub = mid ;
	}
	printf("%.2f\n",floor(ub * 100) / 100);
}
