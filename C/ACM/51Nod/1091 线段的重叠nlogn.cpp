#include<stdio.h>
#include<algorithm>
#include<cmath>
#define SIZE 50001
#define LOCAL
typedef struct Line
{
	int left,right;
}Line;
bool cmp(const Line &a,const Line &b)
{
	if(a.left<b.left) return true;
	else if(a.left==b.left&&a.right<b.right) return true;
	else	return false;
}
int main()
{
#ifdef LOCAL
    freopen("1091.in","r",stdin);
    freopen("1091.out","w",stdout);
#endif
	Line line[SIZE];
	int maxn=0,N=0,tmp=0,i=0,now=0,position=0,right=0;
	scanf("%d",&N);
	while(i<N)
	{
		scanf("%d%d",&line[i].left,&line[i].right);
		i++;
	}
	std::sort(line,line+N,cmp);
	right=0;//最靠右的那根 
	for(now=0;now<N;now++)
	{
		if(line[now].right>=right)
		{
			maxn=std::max(maxn,right-line[now].left);
			right=line[now].right;
		}
		else
			maxn=std::max(maxn,line[now].right-line[now].left);
	}	
	printf("%d\n",maxn);	
	return 0;
}

