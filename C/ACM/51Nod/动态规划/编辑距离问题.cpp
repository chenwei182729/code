#define LOCAL
#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
const int maxn=1001;
using namespace std;
int same(char A,char B)
{
	if(A==B)
		return 0;
	else
		return 1;
}
int main(void)
{
#ifndef LOCAL
    freopen("data4.in","r",stdin);
    freopen("data4.out","w",stdout);
#endif
	int f[maxn]; //g保存对角线的值 
	char A[maxn],B[maxn];
	int lena,lenb,i,j,last,temp;
	cin>>A;
	cin>>B;
	lena=strlen(A);
	lenb=strlen(B);
	for(j=0;j<lena;j++)
	{
		f[j]=j;
	}
	for(i=1;i<=lenb;i++)
	{
		last=f[0];
		f[0]=i;
		for(j=1;j<=lena;j++)
		{
			temp=f[j];
			f[j]=min(last+same(A[i-1],B[j-1]),min(f[j-1]+1,f[j]+1));
			last=temp;
		}
	}
	cout<<f[lena]<<endl;
	return 0;
}
