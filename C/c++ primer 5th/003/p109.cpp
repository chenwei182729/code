#include<string>
#include<iostream>
#include<typeinfo>
using namespace std;
int main(void)
{
	string s("Hello World!!!");
	//punct_cnt���ͺ�s.size()������ͬ
	decltype(s.size()) punct_cnt=0; 
	//ͳ��s�б����ŵ�����
	for(auto c:s)
	{
		cout<<typeid(c).name()<<endl;
		if(ispunct(c))
			++punct_cnt;
	}
	cout<<punct_cnt<<" punctuation characters in "<<s<<endl; 
	return 0;
} 
