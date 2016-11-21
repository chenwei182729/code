#include<string>
#include<iostream>
#include<typeinfo>
using namespace std;
int main(void)
{
	string s("Hello World!!!");
	//punct_cnt类型和s.size()类型相同
	decltype(s.size()) punct_cnt=0; 
	//统计s中标点符号的数量
	for(auto c:s)
	{
		cout<<typeid(c).name()<<endl;
		if(ispunct(c))
			++punct_cnt;
	}
	cout<<punct_cnt<<" punctuation characters in "<<s<<endl; 
	return 0;
} 
