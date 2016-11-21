#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> vs{"better", "hello", "world", "be", "better"};
	auto count=count_if(vs.begin(),vs.end(),[](const string &s1){return s1.length()>5;	}) ;
	cout << count << endl;
	return 0;
}

