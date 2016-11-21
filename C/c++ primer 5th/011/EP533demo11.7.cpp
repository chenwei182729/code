#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
	map<string,vector<string>> ms_vs;
	vector<string> v_name;
	v_name.push_back("chen1") ;
	v_name.push_back("chen2") ;
	v_name.push_back("chen3") ;
	v_name.push_back("chen4") ;
	ms_vs["John"]=v_name;
	return 0;
}

