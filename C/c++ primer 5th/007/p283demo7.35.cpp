#include<iostream>
#include<string>
using namespace std;
typedef string Type;
Type initVal()
{
	string str="hello";
	return str; 
};
class Exercise
{
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
private:
	int val;
		
}; 
Exercise::Type 
Exercise::initVal()
{
	val=0;
}
Exercise::Type Exercise::setVal(Type param)
{
	val=param+initVal();
	return  val;
}
int
main(void)
{
	Exercise e;
	e.initVal();
	e.setVal(1.2);
	return 0;
}
