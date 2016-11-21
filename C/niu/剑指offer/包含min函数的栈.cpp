#include<iostream>
#include<stack>
using namespace std;
class Solution {
private:
public:
    stack<int> m_data,m_min;
    void push(int value) {
        m_data.push(value);
        
        if(m_min.size()==0||value < m_min.top())
            m_min.push(value);
        else
            m_min.push(m_min.top());
    }
    void pop() {
        ///assert(m_data.size()>0 && m_min.size()>0);
        m_data.pop();
        m_min.pop();
    }
    int top() {
       // assert(m_data.size()>0);
        m_data.top();
    }
    int min() {
       // assert(m_data.size()>0 && m_min.size()>0);
        return m_min.top();
    }
};
int main()
{
	return 0;
}
