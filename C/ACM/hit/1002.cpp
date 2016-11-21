#define LOCAL
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
const int MAX_M = 5005;
pair < int, int >p[MAX_M];
int
main () 
{
  
#ifdef LOCAL
    freopen ("1002.in", "r", stdin);
  freopen ("1002.out", "w", stdout);
  
#endif	/*  */
  int N, M, i;
  scanf ("%d%d", &N, &M);
  for (i = 0; i < M; i++)
    scanf ("%d%d", &p[i].first, &p[i].second);
  
    //按价格从小到大排序    
    sort (p, p + M);
  int ans = 0, cnt = 0;
  for (i = 0; i < M; i++)
    
    {
      cnt = min (p[i].second, N);
      ans = ans + cnt * p[i].first;
      N = N - cnt;
      if (N <= 0)
	break;
    }
  printf ("%d\n", ans);
  return 0;
}

  
