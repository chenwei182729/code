/*
8.5:��д�������Զ�ģʽ��һ���ļ����������ݶ���һ��string��vector�У�
��ÿһ����Ϊһ��������Ԫ�ش���vector�� 
*/
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
void stable_elimDups(vector<string> &words);
int main()
{
	vector<string> vec_str{"better", "hello", "world", "be", "better"};
	stable_elimDups(vec_str);
	for(const auto s:vec_str)
		cout<<s<<" ";
	cout<<endl;
	
	return 0;
}
void stable_elimDups(vector<string> &words)
{
	stable_sort(words.begin(),words.end());
}
