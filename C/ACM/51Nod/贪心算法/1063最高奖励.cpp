#define LOCAL 
#include <iostream>
#include <algorithm>
#include <cstdio>
#include<queue>
#include<functional>
using namespace std;
const int MAXN = 50009;
pair<long long,long long> p[MAXN];
int main()
{
#ifdef LOCAL
    freopen("1063.in","r",stdin);
    freopen("1063.out","w",stdout);
#endif
   	int N;
   	priority_queue<long long,vector<long long>,greater<long long>> pq;
   	long long ans = 0 ;
   	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	sort(p,p+N);
	for(int i = 0 ; i < N; i++)
	{
		long long k = p[i].second;
		if(p[i].first > pq.size())
		{
			ans += k ;
			pq.push(k);
		}
		else
		{
			ans += k ;
			pq.push(k);
			long long tmp = pq.top();
			ans -= tmp ;
			pq.pop();
			
		}
	}
	cout << ans << endl;
    return 0;
} 
      
 
