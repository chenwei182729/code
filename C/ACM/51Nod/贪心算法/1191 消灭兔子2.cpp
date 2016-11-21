/*
	���͵�̰�ģ�ÿ������ֻ����һ�Σ�����ֻ�����˺�ֵ������Ѫ���ļ����ڴ�ǰ���£���Խ����
Խ�ã��ʶ�����Ѫ���������У������˺�ֵ�������С� 
 	��iС��j ���i֧������ɱ�������ӣ���j֧��Ҳһ����ɱ��������j�ļ۸�С��i����Ӧ����j��
��������������ά�����ɡ�
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
    //�˴����� 
    while(j < m)
    {
        ans += p[j].second;
        q.push(p[j].second);//��ֵԽ�����ȼ�Խ�ߣ�Խ���Ŀ� 
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
      
 
