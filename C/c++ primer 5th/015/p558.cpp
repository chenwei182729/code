#include<iostream>
#include<ostream>
class Base
{
public:
	static void statment()
		{ 	std::cout << "in statment" << std::endl;	}	
}; 
class Derived : public Base
{
public:
	void f(const Derived& derived_obj)
	{
		std::cout << " Base :";
		Base::statment();
		std::cout << " Sub :";
		Derived::statment();
		std::cout << " 实例对象 :";
		derived_obj.statment();
		std::cout << " 参数 :";
		statment();
	}	
}; 
int main(void)
{
	Derived d ;
	d.f(d);
	return 0;
} 
