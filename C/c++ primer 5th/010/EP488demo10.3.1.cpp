/*
8.5:编写函数，以读模式打开一个文件，将其内容读到一个string的vector中，
将每一行作为一个独立的元素存于vector中 
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
