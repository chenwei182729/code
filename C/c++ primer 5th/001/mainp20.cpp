#define LOCAL
#include <iostream>
#include <cstdio>
#include "Sales_item.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
{
#ifdef LOCAL
	freopen("add_item","r",stdin); 
	freopen("add_item.out","w",stdout); 
#endif
	Sales_item item1,item2;
	cin>>item1>>item2;
	cout<<item1<<endl; 
	cout<<item2<<endl;
    return 0;
}
