#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
class Different {
public:
    bool checkDifferent(string iniString) {
        // write code here
        int len = iniString.length();
        if(len <= 0) return true;
        sort(iniString.begin(),iniString.end());
        for(int idx = 1;idx < len; ++idx){
            if(iniString[idx-1]==iniString[idx])
                return false;
        }
        return true;
    }
};
int main()
{
	Different dif;
	cout << dif.checkDifferent("aeiou");
	cout << dif.checkDifferent("BarackObama");
	return 0;
}
