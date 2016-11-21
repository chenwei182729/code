#define LOCAL 
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
const int N = 50009;
pair<long long, int> p[N];
int main()
{
#ifdef LOCAL
    freopen("1065.in","r",stdin);
    freopen("1065.out","w",stdout);
#endif
    int N;
    long long ans=0,llv;
    p[0].first = 0 ;
    p[0].second = 0 ;
    cin >> N ;
    for(int i = 1;i <= N;i++)
    {
    	cin>>llv;
    	ans = ans + llv ;
    	p[i].first = ans ;
    	p[i].second = i ;
	}
	sort(p,p+N+1);
	
	long long tmp;
	int flag = 0;
	for(int i = 1 ; i <= N ; i++)
	{
		if((p[i].first>p[i-1].first>0)&&(p[i].second>p[i-1].second))
		{
			if(flag == 0)
			{
				flag = 1 ;
				ans = p[i].first-p[i-1].first;
			}
			else
			{
				if(p[i].first-p[i-1].first < ans)
					ans = p[i].first-p[i-1].first ;
			}	
		}	
	}
	cout << ans << endl; 
    return 0;
} 
      
 
