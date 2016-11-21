#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	bool VerifySquenceOfBST2(vector<int> sequence,int length) {
	}
    bool VerifySquenceOfBST(vector<int> sequence) {
		if(sequence.size() <= 0) return false;
        int length = sequence.size();
        int root = sequence[length - 1];
        int i = 0;
        for(;i<length - 1 ; ++i){
            if(sequence[i] > root)
                break;
        }
        int j = i;
        for(;j<length - 1;++j){
            if(sequence[j]<root)
                return false;
        }
        bool left = true;
        if(i > 0)
            left = VerifySquenceOfBST2(sequence,i);
        
        bool right = true;
        if(i < length - 1)
            right = VerifySquenceOfBST2(sequence+i,length - i - 1);;
        return left && right;
    }
    
};
int main(void)
{
	Solution Sol;
	cout << Sol.VerifySquenceOfBST({5,7,6,9,11,10,8}) ;
	return 0;
}

