/*
	典型的贪心，每个兔子只能射一次，所以只能用伤害值大于其血量的箭，在此前提下，箭越便宜
越好，故对兔子血量升序排列，箭对伤害值升序排列。 
 	若i小于j 则第i支箭可以杀死的兔子，第j支箭也一定能杀死，而若j的价格小于i，就应该用j，
所以用优先数列维护即可。
*/ 
#include<cstdio>
#include<cstring>
#include<cstdlib>
//#define LOCAL
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
#include<functional>
#include<vector>
using namespace std;
const int N = 50009;
pair<int, int> p[N];
int b[N];
int main()
{
#ifdef LOCAL
    freopen("1191.in","r",stdin);
    freopen("1191.out","w",stdout);
#endif
    int n,m;
    scanf("%d%d",&n,&m);
    if(m < n)
    {
        printf("No Solution\n");
        return 0;
    }
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(int i=0;i<m;i++)
        scanf("%d%d",&p[i].first, &p[i].second);
    sort(b, b+n);
    sort(p, p+m);
    priority_queue<int> q;
    
    int i = 0, j = 0;
    long long ans = 0;
    //此处经典 
    while(j < m)
    {
        ans += p[j].second;
        q.push(p[j].second);//价值越大，优先级越高，越出的快 
        if(p[j].first >= b[i] && i < n)
        {
            ++i;++j;
        }
        else
        {
            ans -= q.top();
            q.pop();
            ++j;
        }
    }
    if(i < n)
        printf("No Solution\n");
    else
        printf("%lld\n",ans);
    return 0;
} 
      
 
