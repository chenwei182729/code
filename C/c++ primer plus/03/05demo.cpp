#define LOCAL
#include<iostream>
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("05demo.in","r",stdin);
    freopen("05demo.out","w",stdout);
#endif 
	long long world_population , us_population ;
	cout<<"Ehter the world's population :"<<endl;
	cin>>world_population;
	cout<<"Enter the population of the US:"<<endl;
	cin>>us_population;
	long double world_us = (long double) us_population /world_population  * 100;
	cout<<"The population of the US is "<<world_us<<"% of the world pupulation."<<endl;
	 
	
	return 0;
} 
