#define LOCAL
#include<stdio.h>
#include<string.h>
#define maxn 1005
int tree[maxn];
int lowbit(int x)
{
    return x&(-x);
}
void update(int pos,int num)
{
    while(pos<=maxn)
    {
        tree[pos]+=num;
        pos+=lowbit(pos);
    }
}
int sum(int pos)
{
    int ans=0;
    while(pos>0)
    {
        ans+=tree[pos];
        pos-=lowbit(pos);
    }
    return ans;
}
int main()
{
#ifdef LOCAL
    freopen("1283.in","r",stdin);
    freopen("1283.out","w",stdout);
#endif
    int t,i,num,ans;
    while(~scanf("%d",&t))
    {
        memset(tree,0,sizeof(tree));
        ans=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d",&num);
            update(num,1);
            ans+=i-sum(num);
        }
        printf("%d\n",ans);
    }
    return 0;
}


