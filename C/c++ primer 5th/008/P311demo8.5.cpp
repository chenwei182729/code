/*
8.5:��д�������Զ�ģʽ��һ���ļ����������ݶ���һ��string��vector�У�
��ÿһ����Ϊһ��������Ԫ�ش���vector�� 
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
