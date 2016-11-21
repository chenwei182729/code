#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
string make_plural (size_t ctr , const string &word ,const string &ending) 
{ 
    return ( ctr == 1 ) ? word : word + ending; 
} 
/*
	size_t是一种整型的变量，宽度应该是比int大的，size_t 是计数器。整个函数的意思就是。
	你传递进来的ctr是1吗？如果是就返回word字符串，如果不是就将两个字符串连接起来后再
	返回。这个函数要么返回其形参word的副本，要么返回一个未命名的临时string对象，这个
	临时对象是由字符串word和ending相加而成的，在这两种情况下，return都在调用该函数的
	地方复制了返回的string对象。
*/
int main()
{
	vector<string> vec_str{"better", "hello", "world", "be", "better"};
	sort(vec_str.begin(),vec_str.end(),
		[](const string &s1,const string &s2){
			return s1.size()>s2.size();
		}) ;
	int sz=5;
	auto wc = find_if(vec_str.begin(), vec_str.end(),[sz](const string &a){ return a.size() >= sz; });
	auto count=vec_str.end()-wc;
	cout << count << " " << make_plural(count, "word", "s")
		 << " of length " << sz << " or longer" << endl;
	// print words of the given size or longer, each one followed by a space
	for_each(wc, vec_str.end(),[](const string &s){cout << s << " ";});
	cout<<endl;
	
	return 0;
}

