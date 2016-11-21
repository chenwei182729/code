#include<iostream>
#include<algorithm>
#define LOCAL
using namespace std;
const long long LINF=1e18+100;
const int MAXN=60*60*60;
long long llarr[MAXN];
int cnt=0;
void Init()
{
	cnt=0;
	long long i=2,j=3,k=5;
	for(i=1;i<=LINF;i*=2)
	{
		for(j=1;i*j<=LINF;j*=3)
		{
			for(k=1;i*j*k<=LINF;k*=5)
			{
				llarr[cnt++]=i*j*k; 
			}
		}
	}
	sort(llarr,llarr+cnt);
}
int main(void)
{	
	Init();
#ifdef LOCAL
    freopen("1010.in","r",stdin);
    freopen("1010.out","w",stdout);
#endif 
	int T=0;
	long long n=0;
	cin>>T;
	while(T--)
	{
		cin>>n;
		long long l=1,r=cnt,mid;
		while(l<r)
		{
			mid=(l+r)/2;
			if(llarr[mid]>=n)
			{
				r=mid;
			}
			else
			{
				l=mid+1;
			}
		}
		printf("%lld\n",llarr[l]);
	}
	return 0;
} 
