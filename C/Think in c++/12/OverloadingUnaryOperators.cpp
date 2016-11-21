#include<iostream>
using namespace std;
// Non-member function
class Integer{
	long i;
	Integer* This() { return this;	}
public:
	void show()
	{
		cout<<"i="<<i<<endl;
	}
	Integer(long ll):i(ll){}
	~Integer()
	{
		cout<<"Îö¹¹º¯ÊýÖ´ÐÐ"<<endl;	
	} 
	friend const Integer&
		operator+(const Integer& a);

	friend const Integer
		operator-(const Integer& a);
#if 0
	friend const Integer
		operator~(const Integer& a);
	friend Integer*
		operator&(Integer &a);
	friend int
		operator!(const Integer& a);
	
	friend const Integer&
		operator++(Integer& a);
		
	friend const Integer&
		operator++(Integer& a,int);
		
	friend const Integer&
		operator--(Integer& a);
		
	friend const Integer
		operator--(Integer& a,int); 
#endif
}; 
const Integer& operator+(const Integer& a)
{
	cout<<"+Integer\n";
	return a;//Unary + has no effect
}
const Integer operator-(const Integer& a)
{
	cout<<"-Integer\n";
	return Integer(-a.i);//Unary + has no effect
}
int
main()
{
	Integer i1(10);
	i1.show();
	Integer i2=-i1;

	i2.show();
	
	Integer i3=-i2;
	i3.show();
	return 0;
}
