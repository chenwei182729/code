#define LOCAL
#include<iostream>
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("1demo.in","r",stdin);
    freopen("1demo.out","w",stdout);
#endif 
	char name[20];
	char address[20];
	cin>>name>>address;
	cout<<"name:"<<name<<endl;
	cout<<"address:"<<address<<endl;
	cout<<endl;
	return 0;
} 
