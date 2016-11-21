#define LOCAL
#include<iostream>
#include<cstdio>
const int MAXN = 2005 ;
char S[MAXN] ;
int N ;
using namespace std;

void init();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("Best Cow Line.in","r",stdin);
    freopen("Best Cow Line.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
void init()
{
	cin >> N ;
	for(int i = 0 ; i < N ; i++) 
		cin >> S[i] ;
}
void solve()
{
	int a = 0, b = N - 1 ;
	int cnt = 0 ;
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
		++cnt ;
		if(cnt % 80 == 0)
		{
			puts("");
		}
	}
}
