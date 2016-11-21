#include<iostream>
#include<cmath>
#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
    freopen("1283.in","r",stdin);
    freopen("12833.out","w",stdout);
#endif
	long S=0,r=0,d=0,min=1000000000,tmp=0;
	cin>>S;
	r=sqrt(S);
	for(d=1;d<=r;d++)
	{
		if(S%d==0)
		{
			tmp=(S/d+d)*2;
			if(tmp<min)
			{
				min=tmp;
			}
		}
	}
	cout<<min<<endl;
	return 0;
}
