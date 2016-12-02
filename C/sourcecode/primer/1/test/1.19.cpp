#include<iostream>
using namespace std;
int
main()
{
	int istart=0,iend=0,tmp=0;
	cin>>istart>>iend;
	if(istart>iend)
	{
		tmp=istart;
		istart=iend;
		iend=tmp;
	}
	while(istart<=iend)
	{
		cout<<istart<<" ";
		istart++;
	}
	cout<<endl;
	return 0;
}
