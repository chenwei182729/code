#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
const int maxn=105;
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("data3.in","r",stdin);
    freopen("data3.out","w",stdout);
#endif
	int c[maxn][maxn],b[maxn][maxn],dp[maxn]; 
	char A[maxn],B[maxn];
	int lena,lenb,i,j;
	cin>>A;
	cin>>B;
	lena=strlen(A);
	lenb=strlen(B);
	for(i=0;i<lena;i++)
	{
		c[0][i]=0;
	}
	for(i=0;i<lenb;i++)
	{
		c[i][0]=0;
	}
	for(i=1;i<=lena;i++)
	{
		for(j=1;j<=lenb;j++)
		{
			if(A[i-1]==B[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]=0;
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]=1;
			}					
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]=2;
			}		
		}
	}
	int pos=0;
	i=lena,j=lenb;
	dp[pos++]=lena;
	while(i>0&&j>0)
	{
		if(b[j][i]==0)
		{
			dp[pos++]=i;
			--i;
			--j;
		}
		else if(b[j][i]==1)
		{
			--j;
		}
		else
		{
			--i;
		}
		
	}
	for(i=pos-1;i>0;i--)
	{
		cout<<B[dp[i]-1];
	}
	cout<<endl;
	return 0;
}
