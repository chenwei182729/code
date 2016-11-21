#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
		if(sequence.size()==0) return false;
		return Verify(sequence,0,sequence.size());
    }
    bool Verify(vector<int> sequence,int start,int length){
    	int root = sequence[length - 1];
    	//×ó×ÓÊ÷
		int i = start;
		for(;i < length - 1;++ i){
			if(sequence[i] > root)
				break;
		}
		int j = i;
		for(;j < length - 1; ++ j){
			if(sequence[j] < root){
				return false;
			}
		}
		bool left = true;
		if(i > 0)
			left = Verify(sequence,0,i);
		bool right = true;
		if(i < length - 1)
			right = Verify(sequence,i,length - 1);
		
		return left&&right;
	}
};
int main()
{
	Solution Sol;
	cout << Sol.VerifySquenceOfBST({5,7,6,9,11,10,8});
	
	return 0;
}
