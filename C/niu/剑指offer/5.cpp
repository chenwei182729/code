#include<iostream>
//用两个栈实现队列 
#include<stack>
using namespace std;
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }
    int pop() {
        if(stack2.empty()){
            //stack1 往stack2转移
           while(!stack1.empty()){
               //
               int tmp = stack1.top();
               stack2.push(tmp);
               stack1.pop();
           }
        }
        int ret = stack2.top();
		stack2.pop(); 
        return ret;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
int main()
{
	Solution solution;
	
	return 0;
}
