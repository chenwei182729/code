#include<iostream>
using namespace std; 
class Solution {
public:
    /**
     * 获得两个整形二进制表达位数不同的数量
     * 
     * @param m 整数m
     * @param n 整数n
     * @return 整型
     */
    int countBitDiff(int m, int n) {
		int cnt = 0;
		while(m != 0 && n != 0)
		{
			cnt += ((m & 1) ^ (n & 1));
			m >>= 1;
			n >>= 1; 
		}
		while(m!=0)
		{
			cnt += (m & 1);
			m >>= 1;
		}
		while(n!=0)
		{
			cnt += (n & 1);
			n >>= 1;
		}
		
		return cnt;
    }
};
int main()
{
	Solution Sol;
	cout << Sol.countBitDiff(1999,2299)<<endl;
	return 0;
}
