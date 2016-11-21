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
	size_t��һ�����͵ı��������Ӧ���Ǳ�int��ģ�size_t �Ǽ�������������������˼���ǡ�
	�㴫�ݽ�����ctr��1������Ǿͷ���word�ַ�����������Ǿͽ������ַ���������������
	���ء��������Ҫô�������β�word�ĸ�����Ҫô����һ��δ��������ʱstring�������
	��ʱ���������ַ���word��ending��Ӷ��ɵģ�������������£�return���ڵ��øú�����
	�ط������˷��ص�string����
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

