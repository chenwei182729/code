#include<iostream>
int
main()
{
	int sum = 0 ,ivar=50;
	while( ivar <= 100 )
	{
		sum += ivar;
		std::cout<<ivar<<std::endl;
		ivar++;
	}
	std::cout<<"sum = "<<sum<<std::endl;
	return 0;
}
