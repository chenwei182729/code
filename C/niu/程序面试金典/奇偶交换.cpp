#include<iostream>
#define ODD 0x55555555
#define EVEN  0xAAAAAAAA
using namespace std; 
//����ĳһλΪ1
//����ĳһλΪ0 
class Exchange {
public:
    int exchangeOddEven(int x) {
    	int oddx = x & ODD;//����λ 
    	int evenx = x & EVEN;//ż��λ 
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
