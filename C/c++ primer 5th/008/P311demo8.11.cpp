/*
**8.9:编写程序，将来自文件总的行保存在一个vector<string>中。然后使用
**	一个istringstream冲vector读取数据元素，每次读取一个单词 
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include<fstream> 
using namespace std;
int main()
{
	ifstream in;
	in.open("P307demo8.1.cpp");
	string str;
	vector<string> vec_str;
	while(getline(in,str))
	{
		vec_str.push_back(str); 
	}
//	cout<<vec_str.size();
	in.close();
	istringstream record;
	for(auto it=vec_str.begin();it!=vec_str.end();it++)
	{
		string str;
		record.str(*it);
		while(record>>str)
			cout<<str<<" ";
		//注意clear 
		record.clear();
	}
	cout << endl;
	return 0;
}
