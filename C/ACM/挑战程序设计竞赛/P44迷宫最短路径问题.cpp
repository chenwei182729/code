//宽度优先搜索 
#define LOCAL
#include<iostream>
#include<queue>
#include<climits>
const int maxn=100;
const int maxm=100;
using namespace std;
const int INF=1000000;
int N,M;
char field[maxn][maxm];
int d[maxn][maxm];
int sx,sy,gx,gy;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
typedef pair<int,int> P;

void init();
int bfs();
void solve();
int main(void)
{
#ifdef LOCAL
    freopen("迷宫的最短路径.in","r",stdin);
    freopen("迷宫的最短路径.out","w",stdout);
#endif
	init();
	solve();
	return 0;	
} 
//读入数据 
void init()
{
	cin>>N>>M;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>field[i][j];
			if(field[i][j]=='S')
			{
				sx=i;
				sy=j;
			}
			else if(field[i][j]=='G')
			{
				gx=i;
				gy=j;
			}	
		}
	}

	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			d[i][j]=INF;
}

int bfs() 
{
	queue<P> que;
	que.push(P(sx,sy));
	d[sx][sy]=0; 
	while(que.size())
	{
		//队列不为空
		P p=que.front();que.pop();
		if(p.first==gx&&p.second==gy)
			break;
		
		for(int i=0;i<4;i++)
		{
			int nx=p.first+dx[i],ny=p.second+dy[i];
			if(0<=nx&&nx<N&&0<=ny&&ny<M&&field[nx][ny]!='#'&&d[nx][ny]==INF)
			{
				que.push(P(nx,ny));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}
	}
	return d[gx][gy];
}
void solve()
{
	int res=bfs();
	printf("%d\n",res);
}

