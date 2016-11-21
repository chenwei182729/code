#include<iostream>
using namespace std;
long gcd(int x,int y)
{
	if(y==0) return x;
	else return gcd(y,x%y);
} 
int main(void)
{
	long A,B;
	cin>>A>>B;
	cout<<gcd(A,B)<<endl;
	return 0;
} 
