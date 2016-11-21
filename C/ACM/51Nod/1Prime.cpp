#include<iostream>
#include<cmath>
#define LOCAL
using namespace std;
const int MAX_V=1001;
int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int N,M;
void prem()
{
	// 最小距离是INT_MAX 
	for(int i=1;i<=N;i++)
	{
		mincost[i]=INT_MAX;
		used[i]=false;
	}
	mincost[1]=0;//默认选中第一个
	long res=0;
	
	while(true)
	{
		int v=0;
		for(int u=1;u<=N;u++)
		{
			if(!used[u]&&(v==0||mincost[u]<mincost[v]))
			{
				v=u;
			}
		}
		if(v==0)  break;
		used[v]=true;
		res=res+mincost[v];
		cout<<"v="<<v<<" mincost[v]="<<mincost[v]<<endl;
		for(int u=1;u<=N;u++)
		{
			cout<<"cost["<<v<<"]["<<u<<"]="<<cost[v][u]<<"-->mincost["<<u<<"]="<<mincost[u]<<endl;
			mincost[u]=min(mincost[u],cost[v][u]);
		} 
		for(int u=1;u<=N;u++)
		{
			cout<<" mincost["<<u<<"]="<<mincost[u]<<" "<<endl;
		}
	} 
	cout<<res<<endl;
}
int main(void)
{
#ifdef LOCAL
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
#endif 
	int i,j,S=0,E=0,W=0;
	cin>>N>>M;
	for(i=0;i<=N;i++)
		for(j=0;j<=N;j++)
		//	cost[i][j]=0;
			cost[i][j]=INT_MAX;
	while(M--)
	{
		cin>>S>>E>>W;
		cost[S][E]=W;
		cost[E][S]=W;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<cost[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	prem();
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
				cout<<cost[i][j]<<" ";
		}
		cout<<endl;
	}	
	return 0;
} 
