#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int Partition(vector<int> &data,int len,int start,int end)
	{
		if(data.size() < 0 || start < 0 || end >= len) 
			return 0;
		int small = start - 1,idx;
		for(idx = start ; idx < end ; ++idx)
		{
			if(data[idx]<data[end])
			{
				++small;
				if(small!=idx) swap(data[idx],data[small]); 
			} 
		}
		++small;
		swap(data[small],data[end]);
		return small;
	}
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> vec_it;
        int n = input.size() ;
		if(n <= 0 || k<= 0 || n < k) 
		{
			vec_it.clear();
			return vec_it;
		}
		int start = 0,end = n - 1;
		int idx = Partition(input,n,start,end);
		while(idx != k - 1)
		{
			if(idx > k - 1)
			{
				end = idx - 1;
				idx = Partition(input,n,start,end);
			}
			else
			{
				start = idx + 1;
				idx = Partition(input,n,start,end); 
			}
		}
		for(idx = 0 ; idx < k;++idx)
			vec_it.push_back(input[idx]);
		return vec_it;
    }
};
int main()
{
	Solution sol;
	vector<int> vec = sol.GetLeastNumbers_Solution({4,5,1,6,2,7,3,8	},4);
	
	for(auto it = vec.begin();it!=vec.end();++it)
		cout<<*it<<endl;
	return 0;
}
