#include<iostream>
int
main()
{
	int ivar = 0 ,sum = 0 ;
	while( std::cin>>ivar )
	{
		sum += ivar;
	}
	std::cout<<"sum is "<<sum<<std::endl;
	return 0;
}
