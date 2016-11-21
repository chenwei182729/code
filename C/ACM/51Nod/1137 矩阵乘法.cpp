#include<iostream>
const int SIZE=101; 
using namespace std;
int main(void)
{
	int M1[SIZE][SIZE]={0},M2[SIZE][SIZE]={0},M3[SIZE][SIZE]={0},N=0,col=0,row=0;
	cin>>N;
	for(row=0;row<N;row++)
	{
		for(col=0;col<N;col++)
		{
			cin>>M1[row][col];
		}
	}
	for(row=0;row<N;row++)
	{
		for(col=0;col<N;col++)
		{
			cin>>M2[row][col];
		}
	}
	int index=0,tmp=0;
	for(row=0;row<N;row++)
	{
		for(col=0;col<N;col++)
		{
			tmp=0;
			for(index=0;index<N;index++)
			{
				tmp=tmp+M1[row][index]*M2[index][col];
			} 
			M3[row][col]=tmp;
		}	
	}	
	for(row=0;row<N;row++)
	{
		for(col=0;col<N;col++)
		{
			cout<<M3[row][col]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
