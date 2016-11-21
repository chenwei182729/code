#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
class Reverse {
public:
    string reverseString(string iniString) {
        // write code here
        reverse(iniString.begin(),iniString.end());
        return iniString;
    }
};
int main()
{
	Reverse Rev;
	cout << Rev.reverseString("aeiou");
	return 0;
}
