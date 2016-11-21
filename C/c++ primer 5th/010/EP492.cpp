#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> vec_str{"better", "hello", "world", "be", "better"};
	int sz=5;
	auto wc = find_if(vec_str.begin(), vec_str.end(),[sz](const string &a){ return a.size() >= sz; });
	
	cout<<*wc<<" ";
	cout<<endl;
	
	return 0;
}

