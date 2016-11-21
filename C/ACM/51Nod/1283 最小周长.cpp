#include<iostream>
#include<cmath>
#define LOCAL
using namespace std;
int main()
{
#ifdef LOCAL
    freopen("1283.in","r",stdin);
    freopen("1283.out","w",stdout);
#endif
	int S=0,r=0,d=0,tmp=0,sum=0;
	cin>>S;
	r=sqrt(S);
	for(d=0;d<=r;d++)
	{
		tmp=S%(r+d);
		if(tmp==0)
		{
			tmp=S/(r+d);
			break;	
		}
	}
	cout<<"r="<<r<<",tmp="<<tmp<<"d="<<d<<endl;	
	sum=2*(S/tmp+tmp);
	cout<<sum<<endl;
	return 0;
}
