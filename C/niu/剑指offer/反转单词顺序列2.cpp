#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//{1,2,4,7,11,15}
class Solution {
public:
    string ReverseSentence(string &str) 
	{
        int preBlankPos = 0,newBlankPos = 0 , idx = 0 ;
		int len = str.length();
		cout << ":" << endl;
		cout << str << endl;

		reverse(str.begin(),str.end());
    	cout << "first reverse:" << endl;
		cout << str << endl;
       	for(idx = 0 ; idx < len; ++idx)
        {
        	if(str[idx] == ' ' || str[idx] == '\0')
        	{
        		Reverse(str,preBlankPos,idx - 1);
        		cout << "idx:" << endl; 
        		cout << str << endl;
        		preBlankPos = idx + 1;
			}
		}
		cout << str << endl;
		
		return str; 
    }
    void Reverse(string &str,int begin,int end)
    {
    	while(begin<end)
    	{
    		swap(str[begin],str[end]);
    		++begin;
    		--end;
		}
	}
};
int main()
{
	Solution solution;
	string str="student. a am I";
	solution.ReverseSentence(str);
	cout << str << endl;
	return 0;
}
