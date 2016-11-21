#include<iostream>
using namespace std; 

class Transform {
public:
    int calcCost(int A, int B) {
        // write code here
        int count = 0;//不是二进制，是十进制
//		while(A > 0 || B > 0)
//		{
//			int tmpa=A%10;
//			int tmpb=B%10;
//			if(tmpa!=tmpb)
//				count += 1;
//			A=A/10;
//			B=B/10;
//		} 
        for(int i=0;i<32;i++){
        	count += (A & 1) ^ (B & 1);//异或
			A>>=1;
			B>>=1; 
		}
		return count;
    }
};
int main(void)
{
	Transform tran;
	cout << tran.calcCost(19114,17568);
	return 0; 
} 
