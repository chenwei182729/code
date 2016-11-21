#include<iostream>
using namespace std;
 
class Solution {
public:
	bool IsUgly(int number)
	{
		while(number % 2 == 0)
			number /= 2;
		while(number % 3 == 0)
			number /= 3;
		while(number % 5 == 0)
			number /= 5;
		return (number == 1) ? true : false;
	}
//    int GetUglyNumber_Solution(int index) {
//    	if(index <= 0)
//    		return 0;
//    	int number = 0;
//    	int uglyFound = 0;
//    	while(uglyFound < index)
//    	{
//    		++number;
//    		if(IsUgly(number))
//    		{
//    			++uglyFound;
//			}
//		}
//		return number;
//    }
    int GetUglyNumber_Solution(int index) {
    	if(index <= 0)
    		return 0;
    		
    	int *pUglyNumbers = new int[index];
    	pUglyNumbers[0] = 1;
    	int nextUglyIndex = 1;
    	int *pMultiply2 = pUglyNumbers;
    	int *pMultiply3 = pUglyNumbers;
    	int *pMultiply5 = pUglyNumbers;
    	while(nextUglyIndex < index){
    		int minnum = min(*pMultiply2 * 2,min(*pMultiply3 * 3,*pMultiply5 * 5));
			pUglyNumbers[nextUglyIndex] = minnum;
			
			while(*pMultiply2 * 2 <= pUglyNumbers[nextUglyIndex])
				++pMultiply2; 
			while(*pMultiply3 * 3 <= pUglyNumbers[nextUglyIndex])
				++pMultiply3; 
			while(*pMultiply5 * 5 <= pUglyNumbers[nextUglyIndex])
				++pMultiply5; 
			++nextUglyIndex;
		}
    	int ugly = pUglyNumbers[nextUglyIndex - 1];
    	delete[] pUglyNumbers;
    	
		return ugly;
    }
};
int main(void)
{
	Solution Sol;
	return 0;
}




















