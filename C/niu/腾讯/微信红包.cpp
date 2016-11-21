#include<iostream>
#include<vector>
using namespace std; 
class Gift {
public:
    int getValue(vector<int> gifts, int n) {
    	if(n == 0) return 0;
    	else if(n == 1) return gifts[0];
    	int result = gifts[0];
    	int times = 1;
    	for(int i=1;i < n;++i)
    	{
    		if(times == 0)
    		{
    			result = gifts[i];
    			times = 1;
			}
			else if(gifts[i] == result)
				++times;
			else
				--times;
		}
		//检查result是否真的出现次数大于数组个数的一半 
		times = 0;
		for(int i = 0 ; i < n; i++)
		{
			if(result == gifts[i])
				++times;
		}
		if(n > times * 2)
			result = 0;
		return result;
    }
};
int main()
{
	Gift gift;
	cout << gift.getValue({1,2,3,2,2},5);
	return 0;
}
