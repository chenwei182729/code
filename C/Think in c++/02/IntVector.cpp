#include<iostream>
#include<vector>
using namespace std;
int
main()
{
	vector<int> v;
	for(int i=0;i<10;i++)
		v.push_back(i);
		
	for(int i=0;i<10;i++)
		cout<<"i="<<v[i]<<endl;
	
	for(int i=0;i<10;i++)
		v[i]=v[i]*100;
	 
	for(int i=0;i<10;i++)
	cout<<"i="<<v[i]<<endl;
} 
