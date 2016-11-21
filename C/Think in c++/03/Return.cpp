#include<iostream>
using namespace std;
char cfunc(int i);
int
main()
{
	cout<<"type an integer :"<<endl;
	int val;
	cin>>val;
	cout<<cfunc(val)<<endl; 
	return 0;
 } 
char cfunc(int i)
{
	if(i==0)	return 'a';
	if(i==1)	return 'g';
	if (i==5) return 'z';
	return 'c';
}
