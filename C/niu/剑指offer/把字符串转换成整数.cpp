#include<iostream>
#include<algorithm> 
#include<string>
using namespace std; 
class Solution {
public:
    int StrToInt(string str) {
        if(str.length() < 0) return 0;
		int symbol,idx=0,num = 0;
		if(str[0] == '-')
		{
			 symbol = -1;
			 idx = 1;
		}
		else if(str[0] == '+') 
		{
			symbol = 1;
			idx = 1;
		}
		for(idx;idx<str.length();++idx)
		{
			if(str[idx]>='0'&&str[idx]<='9')
			{
				num = num * 10 + str[idx] - '0';
			}
			else
			{
				return 0;
			}
		}
		return num; 
    }
};

int main(void)
{
	string S="+2147483647";
	Solution sol;
	cout << sol.StrToInt(S)<<endl;
	S="1a33";
	cout << sol.StrToInt(S);
	//
	//+2147483647
	//	1a33 
	return 0;
}
