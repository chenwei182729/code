#include<iostream>
#include<vector> 
using namespace std;

class Solution {
public:
	//数组中出现一次的数字 
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int sz = data.size();
        int sum = 0 ;
        for(int i = 0 ; i < sz ; i++){
            sum ^= data[i];
        }
        int lowbit = sum & (-sum) ;
        for(int i = 0 ; i < sz ; i++)
        {      
            int tmp = data[i] & (-data[i]);
            if(lowbit & tmp )
            {
                *num1 ^= data[i];
            }
            else
            {
                *num2 ^= data[i];
            }
        }
    }
    //数组中出现次数超过一半的数字 
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    	int sz = numbers.size();
    	if(sz == 0) return 0;
    	int search_val,nTimes,i;
    	for(i = nTimes = 0 ;i < sz ; ++i)
		{
			if(0 == nTimes)
			{
				search_val = numbers[i];
				nTimes = 1;
			}
			else
			{
				if(search_val == numbers[i])
					++nTimes;
				else
					--nTimes;
			}
		} 
		nTimes = 0 ;
		for(i = 0 ;i < sz ; ++i)
		{
			if(search_val == numbers[i])
				++nTimes;
		}
		if(nTimes * 2 < sz)
		{
			return 0;
		}
		else
		{
			return search_val ;
		}
    }
    //第一个只出现一次的字符
    //先找到单个字符，再查找 
    int FirstNotRepeatingChar(string str) {
        int arr[53]={0};
        int idx,sz=str.length(),numIdx;
        for(idx = 0 ;idx < sz ; ++idx)
		{
			if(islower(str[idx]))
			{
				numIdx = str[idx] - 'a' + 27;
			}	
			else
			{
				numIdx = str[idx] - 'A' + 1;
			}
			if(0 == arr[numIdx])
			{
				arr[numIdx] = idx + 1;
			}
			else
			{
				arr[numIdx] = sz + 1;
			}
		} 
		sz = sz + 1; 
		for(idx = 1 ; idx < 53 ; idx++)
		{
			if(arr[idx] != 0)
				sz=min(arr[idx],sz);
		}
		return sz - 1;
    }
    // 
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(0 == rotateArray.size() || 1 == rotateArray.size()) return 0;
        int pre,idx,sz=rotateArray.size();
        pre = rotateArray[0];
		for(idx = 1 ; idx != sz ; ++idx)
		{
			if(pre > rotateArray[idx])
				return rotateArray[idx];	
		}   
		return 0;     
    }
};

int main(void)
{
//	int arr[]={2,4,3,6,3,2,5,5};
	int arr[]={1,2,3,2,2,2,5,4,2,1};
	int sz = sizeof(arr)/sizeof(*arr) ;
	//找到两个不同的数，然后一道数组末尾
	vector<int> vec={};
	Solution solution;
//	cout<<solution.MoreThanHalfNum_Solution(vec);
	//
	string str="google";
//	cout<<solution.FirstNotRepeatingChar(str);
	
	cout<<solution.minNumberInRotateArray({6501,6828,6963,7036,7422,7674,8146,8468,8704,8717,9170,9359,9719,9895,9896,9913,9962,154,293,334,492,1323,1479,1539,1727,1870,1943,2383,2392,2996,3282,3812,3903,4465,4605,4665,4772,4828,5142,5437,5448,5668,5706,5725,6300,6335});
	return 0; 
} 
