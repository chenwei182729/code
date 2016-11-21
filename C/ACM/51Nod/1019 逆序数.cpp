#include<iostream>
#include<algorithm>
#include<vector>
const int SIZE=50001;
using namespace std;
int main(void)
{
	int array[SIZE];
	int N=0,count=0,index=0,position=0;
	long long sum=0;
	cin>>N;
	while(count<N)
	{
		cin>>array[count++];
	}
	for(position=0;position<N;position++)
	{
		for(index=position;index<N;index++)
		{
			if(array[index]<array[position])
			{
				sum=sum+1;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
} 
