#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
const int MAX_N = 101;
int B[MAX_N];
void init()
{
	for(int i=0;i<MAX_N;i++){
		B[i]=pow(i,3);
	}
}
int getArraySize(int arr[])
{
	return sizeof(arr)/sizeof(*arr); 
} 
int main(void)
{
	int n;
	init();
	cout << sizeof(B)/sizeof(*B)<< endl; 
	cout << getArraySize(B) << endl; 
	return 0;
}
