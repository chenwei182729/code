/*
**8.9:��д���򣬽������ļ��ܵ��б�����һ��vector<string>�С�Ȼ��ʹ��
**	һ��istringstream��vector��ȡ����Ԫ�أ�ÿ�ζ�ȡһ������ 
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
		//ע��clear 
		record.clear();
	}
	cout << endl;
	return 0;
}
