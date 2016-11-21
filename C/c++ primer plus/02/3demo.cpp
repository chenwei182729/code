#define LOCAL
#include<iostream>
using namespace std;
void fun1()
{
	cout<<"Three blind mice"<<endl;
}
void fun2()
{
	cout<<"See how they run"<<endl;
}
int
main()
{
#ifdef LOCAL
    freopen("3demo.in","r",stdin);
    freopen("3demo.out","w",stdout);
#endif 
	fun1();
	fun1();
	fun2();
	fun2(); 
	return 0;
} 
