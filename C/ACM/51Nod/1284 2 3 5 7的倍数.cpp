#include<iostream>
using namespace std;
const int SIZE=15;
//2 3 5 7 
int main()
{
	long long N=0,array[SIZE]={0},sum=0;
	cin>>N;
	array[0]=N/2;array[1]=N/3;array[2]=N/5;array[3]=N/7;
	array[4]=N/6;array[5]=N/10;array[6]=N/14;array[7]=N/15;array[8]=N/21;array[9]=N/35;
	array[10]=N/30;array[11]=N/42;array[12]=N/70;array[13]=N/105;
	array[14]=N/210;
	sum=N-array[0]-array[1]-array[2]-array[3]
		+array[4]+array[5]+array[6]+array[7]+array[8]+array[9]
		-array[10]-array[11]-array[12]-array[13]
		+array[14];
	cout<<sum<<endl;	 
	return 0;
} 
