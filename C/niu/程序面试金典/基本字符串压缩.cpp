#include<iostream>
#include<string>
using namespace std; 
class Zipper {
public:
    string zipString(string iniString) {
    	string str{iniString};
    	char nCh;
    	int idx,nTimes,pos,sum;
    	int len = iniString.length();
    	nTimes = 0,sum = 2;//sum表示多少个字符能存下 
		for(idx = 0 ; idx < len; ++idx)
		{
			if(0 == nTimes)
			{
				nCh = iniString[idx];
			}
			
			if(iniString[idx] == nCh)
			{
				++nTimes;
			}
			else
			{
				sum += 2;
				nCh = iniString[idx];
				nTimes = 1;
			}
		} 
//		cout << sum << endl;
		if(sum >= len) 	return iniString;
		pos = 0;
		nTimes = 0;
		for(idx = 0 ; idx < len; ++idx)
		{
			if(0 == nTimes)
			{
				nCh = iniString[idx];
			}
			
			if(iniString[idx] == nCh)
			{
				++nTimes;
			}
			else
			{
				str[pos++] = nCh;
				str[pos++] = '0' + nTimes;
				nCh = iniString[idx];
				nTimes = 1;
			}
		} 
		str[pos++] = nCh;
		str[pos++] = 48 + nTimes;
		str[pos]='\0';
		return str;
    }
};
int main(void)
{
	Zipper zip;
	cout << zip.zipString("aabcccccaaa") << endl;
	cout << zip.zipString("aaaaaaaaaaaaa") << endl;
	cout << zip.zipString("welcometonowcoderrrrr") << endl;
	return 0;
}
