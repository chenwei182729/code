#include<iostream>
//������ջʵ�ֶ��� 
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
            //stack1 ��stack2ת��
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
