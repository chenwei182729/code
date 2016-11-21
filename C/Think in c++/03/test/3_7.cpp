#include<iostream>
#include<string>
using namespace std;
void change_str_ptr(string *str);
void change_str_ref(string &str); 
int
main()
{
	string str="hello";
	change_str_ptr(&str);
	cout<<str<<endl;
	change_str_ref(str);
	cout<<str<<endl;
	return 0;
} 
void change_str_ptr(string *str)
{
	cout<<*str<<endl;
	
	str->append("ptr add ");
	cout<<*str<<endl;
}
void change_str_ref(string &str)
{
	cout<<str<<endl;
	
	str.append("ref add ");
	cout<<str<<endl;
}
