#define LOCAL
#include<iostream>
const int MAXN = 2000 ;
char S[MAXN] ;
int N ;
using namespace std;
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("1546.in","r",stdin);
    freopen("1546.out","w",stdout);
#endif
	while (cin >> N )
	{
		for(int i = 0 ; i < N ; i++) 
			cin >> S[i] ;
		solve();
	}
	return 0;	
} 
void solve()
{
	int a = 0, b = N - 1 ;
	while ( a <= b)
	{
		bool left = false ;//从左到右字符串比较
		for(int i = 0 ; a + i <= b ; i++ )
		{
			if(S[a+i] < S[b-i])
			{
				left = true ;
				break ;
			}
			else if(S[a+i] > S[b-i])
			{
				left = false ;
				break ;
			}
		} 
		if(left) putchar(S[a++]);
		else putchar(S[b--]) ;
	}
	putchar('\n');
}
