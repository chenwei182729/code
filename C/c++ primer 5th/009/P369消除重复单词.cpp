/*
8.5:��д�������Զ�ģʽ��һ���ļ����������ݶ���һ��string��vector�У�
��ÿһ����Ϊһ��������Ԫ�ش���vector�� 
*/
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
void elimDups(vector<string> &words); 
int main()
{
	vector<string> vec_str{"better", "hello", "world", "be", "better"};
	cout << vec_str.size() << endl;
	elimDups(vec_str); 
	cout <<"after elimDups\n";
	cout << vec_str.size() << endl;
	return 0;
}
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}
