#include <iostream>
#include"Sales_data.h"
#include"Person.h"
int main(int argc, char** argv) 
{
	Sales_data data1;
	Sales_data data2("bookno");
	Sales_data data3("bookno",10,12.5);
	print(cout,data1)<<endl;  
	print(cout,data2)<<endl;
	print(cout,data3)<<endl; 
	Sales_data data4(cin);
	Person p; 
	return 0;
}
