/*
**8.9:使用8.1.3节第一个练习所编写的函数打印一个istringstream对象的内容
** 
*/ 
#include <iostream>
#include <string>
#include <sstream> 
#include <vector>

using namespace std;

istream& is_input(istream& in)
{
    string line,s;
    
    while (getline(in,line))
    {
    	istringstream record(line);
    	while(record>>s)
    		cout << s << "\n";
	}       
    return in;
 } 

 int main()
 {
    is_input(cin);
    return 0;
 }
