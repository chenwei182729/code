/*
**8.9:ʹ��8.1.3�ڵ�һ����ϰ����д�ĺ�����ӡһ��istringstream���������
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
