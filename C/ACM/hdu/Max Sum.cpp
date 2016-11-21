#if 0
最后一行数据不能多一个空格
#endif
#define LOCAL
#include<iostream>
#include<cstring>
using namespace std;
const int maxn=100005;
int main(void)
{
#ifdef LOCAL
    freopen("Max Sum.in","r",stdin);
    freopen("Max Sum.out","w",stdout);
#endif
	int T,N,line,idx,start,answerstart,answerend;
	long long endmax,answer;
	int a[maxn];
	cin>>T;
	line=1;
	while(line<=T)
	{
		memset(a,0,sizeof(a));
		cin>>N;
		for(idx=1;idx<=N;idx++)
		{
			cin>>a[idx];
		}
		start=1;
		answerstart=answerend=1;
		endmax=answer=a[1];
		for(idx=2;idx<=N;idx++)
		{
			if(endmax>=0)
				endmax=endmax+a[idx];
			else
			{
				endmax=a[idx];
				start=idx;
			}
			if(endmax>=answer)
			{
				answer=endmax;
				answerstart=start;
				answerend=idx;
			}
		}
		cout<<"Case "<<line<<":\n";
		cout<<answer<<" "<<answerstart<<" "<<answerend<<"\n";
		if(line<T) 
			cout<<"\n";
		line++;
	}
}
