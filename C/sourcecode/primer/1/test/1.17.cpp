#include<iostream>
using namespace std;
int
main()
{
	int icurrentVal=0,ivar=0;
	if( std::cin>>icurrentVal)
	{
		int cnt=1;
		while( std::cin>>ivar)
		{
			if(icurrentVal==ivar)
				cnt++;
			else
			{
				cout<<icurrentVal<<" occurs "
					<<cnt<<" times " <<endl;
				icurrentVal=ivar;
				cnt=1 ;
			}
		}
		cout<<icurrentVal<<" occurs "
			<< cnt <<" items "<<endl;
	}
	return 0;
}
