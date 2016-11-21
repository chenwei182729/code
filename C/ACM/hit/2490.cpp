#define LOCAL
#include<iostream>
#include<algorithm>
using namespace std;
 const int MAXN = 1005;
int X[MAXN];
int N, R;
 void init ();
void solve ();
int
main (void) 
{
  
#ifdef LOCAL
    freopen ("2490.in", "r", stdin);
  freopen ("2490.out", "w", stdout);
  
#endif	/*  */
    while ((cin >> R >> N) && (R != -1) && (N != -1))
    
    {
      for (int i = 0; i < N; i++)
	cin >> X[i];
      solve ();
    } return 0;
}

void
solve () 
{
  sort (X, X + N);
  int i, ans, s;
  ans = 0, i = 0;
  while (i < N)
    
    {
      s = X[i];
      while (i < N && X[i] <= R + s)
	i++;
       int p = X[i - 1];
       while (i < N && X[i] <= p + R)
	i++;
      ans++;
    }
  cout << ans << endl;
}


