#include <iostream>
using namespace std;
int main(void)
{
	long long la,lb,lc;
	int T,count=1;
	scanf("%d",&T);
	while(count <= T)
	{
		scanf("%lld%lld%lld",&la,&lb,&lc);
		if(la+lb>lc)
		{
			cout<<"Case #"<<count<<": true"<<endl;
		}
		else
		{
			cout<<"Case #"<<count<<": false"<<endl;
		}
		++count;
	}	
	return 0;
} 
