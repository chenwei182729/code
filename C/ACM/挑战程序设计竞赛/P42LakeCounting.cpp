//深度优先搜索 
#define LOCAL
#include<iostream>
const int maxn=100;
const int maxm=100;
using namespace std;
int N,M;
char field[maxn][maxm];
void init();
void dfs(int x,int y);
void solve();
void output();
int main(void)
{
#ifdef LOCAL
    freopen("Lake Counting.in","r",stdin);
    freopen("Lake Counting.out","w",stdout);
#endif
	init();
	//output();
	solve();
	//output();
	return 0;	
} 
//读入数据 
void init()
{
	cin>>N>>M;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			cin>>field[i][j];
}
//读入数据 
void output()
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
			cout<<field[i][j];
		cout<<endl;	
	}
}
void dfs(int x,int y) 
{
	field[x][y]='.';
	//循环遍历8个方向
	for(int dx=-1;dx<=1;dx++)
	{
		for(int dy=-1;dy<=1;dy++)
		{
			int nx=x+dx,ny=y+dy;
			//
			if(0<=nx&&nx<N&&0<=ny&&ny<M&&field[nx][ny]=='W')
				dfs(nx,ny);	
		}	
	}
	return ;
}
void solve()
{
	int res=0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(field[i][j]=='W')
			{
				dfs(i,j);
				res++;
			}
		}
	}
	printf("%d\n",res);
}

