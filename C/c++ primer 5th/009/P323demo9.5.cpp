#include <iostream>
#include<iterator>
#include <vector>
using namespace std;
vector<int>::iterator find_vec_i(vector<int>::iterator v_start,vector<int>::iterator v_end,int fval);
//测试vector的值传递与址传递
int main(void)
{
    vector<int> vec_int;
    for(int i=0;i<10;i++)
        vec_int.push_back(i);
    vector<int>::iterator result_it=find_vec_i(vec_int.begin(),vec_int.end(),10);
    if(result_it!=vec_int.end())
    {
    	cout<<*result_it<<endl;
	}
	else
	{
		cout<<"Not Found!"<<endl;
	}

    return 0;
}
vector<int>::iterator find_vec_i(vector<int>::iterator v_start,vector<int>::iterator v_end,int fval)
{
    while(v_start!=v_end)
    {
    	if(*v_start==fval)
    		return v_start;
    	v_start++;
	}
	return v_end;
}
