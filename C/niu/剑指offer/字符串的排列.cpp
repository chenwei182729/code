#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> vec_str;
        int len = str.length();
        if(len <= 0){
            return vec_str;
        }
        sort(str.begin(),str.end());
        do{
            vec_str.push_back(str);
        }while(std::next_permutation(str.begin(),str.end()));
        
        return vec_str;
    }
    
};

int main(void)
{
	Solution Sol;
	cout << Sol.Permutation("abc").size();
	return 0;
}

