#include<iostream>
using namespace std;
const int M=1000000001;
const int SIZE=100;
int main(void)
{
	int prime[SIZE],residue[SIZE],N=0,index=0,position=0,flag=0;
	cin>>N;
	for(index=0;index<N;index++)
	{
		cin>>prime[index]>>residue[index];
	}
	int num=0;
	for(index=1;num<M;index++)
	{
		num=prime[0]*index+residue[0];
		flag=1;
		for(position=1;position<N;position++)
		{
			if(num%prime[position]!=residue[position])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			break;
		}
	}
	cout<<num<<endl;
	return 0;
} 
