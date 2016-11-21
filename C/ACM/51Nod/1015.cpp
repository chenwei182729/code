#include<iostream>
using namespace std;
int main(void)
{
	const int N=5;
	int array[]={153,370,371,407,1634};
	int index=0,M;
	cin>>M;
	for(index=0;index<N;index++)
	{
		if(array[index]>=M)
			break;
	}
	cout<<array[index]<<endl;
	return 0;
} 
