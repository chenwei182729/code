#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//{1,2,4,7,11,15}
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> vec(2);
        bool found = false;
        int len = array.size(),maxSum = INT_MAX;
        int ahead = len -1 ;
		int behind = 0;
		while(ahead > behind)
		{
			int curSum = array[ahead]+array[behind];
			if(curSum == sum)
			{
				found = true;
				if(array[ahead] * array[behind] < maxSum)
				{
					vec[1]=array[ahead];
					vec[0]=array[behind];
				} 
				--ahead;
			}else if(curSum > sum)
				--ahead;
			else
				++behind;
		} 
		if(!found) vec.clear();
		return vec;
    }
};
int main()
{
	Solution solution;
	vector<int> vec=solution.FindNumbersWithSum({1,2,4,7,11,15},15);
	cout<<vec[0]<<" "<<vec[1]<<endl;
	return 0;
}
