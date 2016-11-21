#include<iostream>
#include<stack>
#include<vector>
using namespace std; 
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        bool bPossible = false;
        int nlength = pushV.size();
        if(pushV.size()>0&&popV.size()>0){
            int *pNextPush = pushV;
            int *pNextPop = popV;
            stack<int> stackData;
            while(pNextPop-popV < nlength){
                while(stackData.empty()||stackData.top()!=*pNextPop){
                    if(pNextPush - pushV == nlength){
                        break;
                    }
                    stackData.push(*pNextPush);
                    pNextPush ++;
                }
                if(stackData.empty()&&pNextPop - popV == nlength)
                    bPossible = true;
            }
        }
        return bPossible;
    }
};
int main()
{
	return 0;
}
