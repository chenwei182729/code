/*
8.5:编写函数，以读模式打开一个文件，将其内容读到一个string的vector中，
将每一行作为一个独立的元素存于vector中 
*/
#include <iostream>
#include <string>
#include <vector>
#include<fstream> 
using namespace std;
int main()
{
	ifstream in;
	in.open("P307demo8.1.cpp");
	string str;
	vector<string> vec_str;
	while(in>>str)
	{
		vec_str.push_back(str); 
	}
	cout<<vec_str.size();
	in.close();
	return 0;
}
