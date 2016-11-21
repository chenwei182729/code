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
	freopen("add_item.demo1_20.out","w",stdout); 
#endif
	Sales_item item;
	while(cin>>item)
		cout<<item<<endl;

    return 0;
}
