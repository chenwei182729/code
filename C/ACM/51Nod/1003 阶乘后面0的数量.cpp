#include<iostream>
int main(void)
{
	int N,sum=0;
	std::cin>>N;
	while(N)
	{
		N=N/5;
		sum=sum+N; 
	}
	std::cout<<sum<<std::endl;
	return 0;
}
