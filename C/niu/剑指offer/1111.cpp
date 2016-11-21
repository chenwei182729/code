#include<iostream>
#include<ostream>
#include<string> 
using namespace std;
struct A
{
	int a;
	short b;
	int c;
	char d;
} ;
struct B
{
	int a;
	short b;
	char d;
	int c;
};
void sizeofstruct()
{
	cout<<sizeof(A)<<endl<<sizeof(B)<<endl;
} 
void point()
{
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char) a;
	char *b=(char*)&a;
	printf("%08x,%08x\n",i,*b);
}
template<typename T,typename _PrintFunc>
void PrintAll(const T *values,int size ,_PrintFunc _print)
{
	for(int i=0;i<size;i++) _print(values[i]);
	cout << endl;
}
template<typename T>
void Print(const T value)
{
	cout<< value;
}
/*
** �º����� 
** ��C++��׼����⡷һ���жԷº����Ľ��ͣ�
**	�κζ�����ֻҪ����Ϊ�������Ϳ��Գ�֮Ϊ�º�����
*/
class MyPrint    
{    
public:  
	template<typename T> 
    void operator()(T value) const    
    {    
        cout<< value;
    }    
};      

class C
{
public:
	C()
	{
		cout<<"constructor sup C"<<endl;
	}
	~C()
	{
		cout<<"Destory sup C"<<endl;
	}
	void fun()
	{
		cout<< "sup C fun()" << endl;	
	} 
	virtual  void fun2() 
	{
		cout << "sup C fun2()" << endl;
	}
};
class D:public C
{
public:
	D()
	{
		cout<<"constructor sub D"<<endl;
	}
	~D()
	{
		cout<<"Destory sub D"<<endl;
	}
	
	void fun()
	{
		cout<< "sub D fun()" << endl;	
	} 
	virtual  void fun2() 
	{
		cout << "sub D fun2()" << endl;
	}
}; 
int iV[5] = {1,2,3,4,5};
string sV[3]={"aaa","bbb","ccc"};

int main(void)
{
	point();
	PrintAll(iV,5,Print<int>);
	PrintAll(sV,3,Print<string>); 
	// 
	MyPrint myPrint;
	PrintAll(iV,5,myPrint);
	PrintAll(sV,3,myPrint); 
	{
		C *c = new D();
		c->fun();
		c->fun2();
		delete c; 	
	}
	return 0;
}
