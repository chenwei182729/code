#include <iostream>
#include<iterator>
#include <vector>
using namespace std;
void find_vec_i(vector<int>::iterator v_start,vector<int>::iterator v_end,int fval);
//测试vector的值传递与址传递
int main(void)
{
    vector<int> vec_int;
    for(int i=0;i<10;i++)
        vec_int.push_back(i);
        
	find_vec_i(vec_int.begin(),vec_int.end(),10);
  
    return 0;
}
void find_vec_i(vector<int>::iterator v_start,vector<int>::iterator v_end,int fval)
{
	bool flag=false;
    while(v_start!=v_end)
    {
    	if(*v_start==fval)
    	{
    		flag=true;
    		cout << fval << endl;
		}
    	v_start++;
	}
	if(!flag)
		cout << "Not Found!" << endl;
}
