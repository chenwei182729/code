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
        Reverse(str,0,len - 1);
        for(idx = 0 ; idx < len; ++idx)
        {
        	if(str[idx] == ' ')
        	{
        		Reverse(str,preBlankPos,idx - 1);
        		preBlankPos = idx + 1;
			}
		}
		Reverse(str,preBlankPos,len - 1);
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
