#include<iostream>
#include<algorithm>
using namespace std;
const int SIZE=1001;
int main(void)
{
	int array[SIZE],i,j,k,N,flag;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>array[i];
	}
	sort(array,array+N);
	flag=0;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			for(k=j+1;k<N;k++)
			{
				if(array[i]+array[j]+array[k]==0)
				{
					flag=1;
					cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
				}
			}
		}
	}
	if(flag==0)
	{
		cout<<"No Solution"<<endl;
	}
	return 0;
} 
