
```
//头文件set map
#include<set>
#include<map>
//greater头文件
#include<functional>
//按从大->小排序
multiset<int,greater<int>> bset;
multimap<int,int,greater<int>> dbmap;

//查找第一个大于等于指定值得迭代器
multimap<int,int,greater<int>> dbmap;
class map_finder 
{ 
public: 
	map_finder(const int &v):value(v){} 
	bool operator ()(const multimap<int,int,greater<int>>::value_type &pair) 
	{ 
		return pair.first >= value; 
	} 
private: 
    const int value;                     
}; 
multimap<int,int>::iterator it=find_if(dbmap.begin(),dbmap.end(),map_finder(d));
//注意查找的迭代器和rbegin() rend()

```
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
    //此处经典，先把p[j].first加入优先级队列，通过比较，看p[j]能否杀死第[i]只兔子 
	//如果不能杀死，就从优先级队列中去掉一个优先级最高的(注意p[j]能杀死第i只以前
	//的所有兔子)，注意此时该值不一定等于
	//p[j].fisrt
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
```

```
[参考](http://cache.baiducontent.com/c?m=9d78d513d9c043ab5ffa940f1a60d2716e2397624cc0a61768a7905f92144c37407197cd30236013a5c06b1100b8482cfd803265467437b6ebdff839cacae43c68c8793b2a5ac00305d26ab2d6167b9c75875a9efe58b1e6e732e4f28595c20e50c853067c87f4815f0109992fb64f60bdf1841e421943e1b37178f9537c299c2042b5&p=9a62cb5e86cc46ad1c81c7710f56&newp=9c39c802ba934ea85aadc7710f0592695803ed6338d1d501298ffe0cc4241a1a1a3aecbf26201702d8ce7f6706aa495ce1f23276370434f1f689df08d2ecce7e6f&user=baidu&fm=sc&query=1065+%D7%EE%D0%A1%D5%FD%D7%D3%B6%CE%BA%CD&qid=d65e4c4600308e55&p1=2)
思路：利用前缀和,注意如果使用tmp = p[i].first - p[i-1].first 结果错误，原因不知
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
```



