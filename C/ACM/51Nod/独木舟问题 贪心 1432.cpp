#include<iostream>
#include<algorithm>
#include<vector>
const int N=10001; 
using namespace std;
int main()
{
	int array[N];
	int N=0,M=0,count=0;
	cin>>N>>M;
	while(count<N)
	{
		cin>>array[count++];
	}
	sort(array,array+N);
//	for(int i=0;i<N;i++)
//	{
//		cout<<array[i];
//	}
//	cout<<endl;
	int begin=0,end=N-1;
	count=0;
	while(begin<=end)
	{
		int tmp=array[begin]+array[end];
		if(M>=tmp)
		{
			begin++;
			end--;
		}
		else
		{
			end--;
		}
		count++;
	}
	cout<<count<<endl;
	return 0;
} 
