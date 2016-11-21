#include<iostream>
#define ODD 0x55555555
#define EVEN  0xAAAAAAAA
using namespace std; 
//设置某一位为1
//设置某一位为0 
class Exchange {
public:
    int exchangeOddEven(int x) {
    	int oddx = x & ODD;//奇数位 
    	int evenx = x & EVEN;//偶数位 
    	oddx <<=1;
    	evenx >>= 1;
    	//
    	cout << "oddx:" << oddx << endl;
    	cout << "evenx:" << evenx << endl;
		return (oddx | evenx); 
    }
};
int main(void)
{
	Exchange exc;
	cout << exc.exchangeOddEven(711908) << endl;
	int x = 711908;
	cout << "x = " << x << endl;
	return 0; 
} 
