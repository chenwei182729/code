#include <iostream>
#include <iterator>
#include <list>
using namespace std;

//测试vector的值传递与址传递
int main( void )
{
   	list<int> lst1;
    for(int i = 0;i < 10;i ++)
        lst1.push_back(i);

	list<int>::iterator iter1 = lst1.begin(),iter2 = lst1.end();
	while(iter1 != iter2)
	{
		
	}
	
    return 0;
}