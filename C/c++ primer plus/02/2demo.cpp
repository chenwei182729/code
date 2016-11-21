#define LOCAL
#include<iostream>
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("2demo.in","r",stdin);
    freopen("2demo.out","w",stdout);
#endif 
	long distance = 1 ;
	cin>>distance; 
	cout<<(long)distance/220<<endl;
	return 0;
} 
