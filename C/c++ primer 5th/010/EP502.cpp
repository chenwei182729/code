#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm> 
using namespace std;
bool check_size(const string& s,string::size_type sz)
{
	return s.size()>=sz;
}
int main()
{
	auto check6=bind(check_size,std::placeholders::_1,6);
	string s="hello";
	bool b1 = check6(s);
	cout << b1 << endl;
	
	vector<string> vs{"better", "hello", "world", "be", "better"};
	int sz=6;
	auto wc=find_if(vs.begin(),vs.end(),[sz](const string &s){ return s.size()>sz;});
	auto wc2=find_if(vs.begin(),vs.end(),bind(check_size,std::placeholders::_1,6));
	return 0;
}

