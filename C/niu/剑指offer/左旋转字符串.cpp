#include<iostream>
#include<algorithm> 
#include<string>
using namespace std; 
class Solution {
public:
    string LeftRotateString(string &str, int n) {
    	int len=str.length();
		reverse(str,0,n-1);
		reverse(str,n,len-1);
		reverse(str,0,len-1);
		return str;
    }
    void reverse(string &str,int begin,int end)
    {
    	cout << "begin:" << begin << "end:" << end << endl; 
		while(begin <= end)
		{
			cout << "begin:" << begin << "end:" << end << endl; 
			swap(str[begin],str[end]);
			++begin;
			--end;	
		}    	
	}
};
//string LeftRotateString(string str, int n) {
//	
//	int len=str.length();
//	cout << len << endl;
//	reverse(str,0,n-1);
//	reverse(str,n,len);
//	reverse(str,0,len);
//	return str;
//}
//void reverse(string str,int begin,int end)
//{
//	cout << "begin:" << begin << "end:" << end << endl; 
//	while(begin < end)
//	{
//		cout << "hello" << endl;
//		swap(str[begin],str[end]);
//		++begin;
//		--end;	
//		cout << "begin:" << begin << "end:" << end << endl; 
//	}    	
//}
int main(void)
{
	string S="abcXYZdef";
	Solution solution;
	solution.LeftRotateString(S,3);
	cout << S << endl;
	return 0;
}
