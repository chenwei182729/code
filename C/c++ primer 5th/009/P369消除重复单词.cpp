/*
8.5:编写函数，以读模式打开一个文件，将其内容读到一个string的vector中，
将每一行作为一个独立的元素存于vector中 
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
