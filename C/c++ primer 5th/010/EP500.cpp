#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main()
{
	vector<int> vi{1,-1,2,-2,3,-3,4,4,-4,-5,-6};
	//
	transform(vi.begin(),vi.end(),vi.begin(),[](int i){ return i<0?-i:i;});
	//error:cannot deduce the return type for the lambda,g++�ܹ���������c++ò�Ʋ���c++��׼ 
	transform(vi.begin(),vi.end(),vi.begin(),[](int i) { if(i<0)return -i;else return i;});
	//�������ȷд����ָ������ֵ������ 
	transform(vi.begin(),vi.end(),vi.begin(),[](int i) -> int { if(i<0)return -i;else return i;});
	
	return 0;
}

