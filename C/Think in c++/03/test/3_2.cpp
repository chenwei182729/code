#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int ivar)
{
	if(ivar<2) return false;
	bool flag=true;
	int n=sqrt(ivar);
	for(int i=2;i<=n;i++)
	{
		if(ivar%i==0)
		{
			flag=false;
			break;
		}	
	} 
	return flag;
}
int
main()
{
	int count=200;
	for(int i=0;i<count;i++)
	{
		if(is_prime(i))
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
} 
