#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int
main()
{
	ifstream in("data");
	vector<float> vf;
	float f_data; 
	for(int i=0;i<25;i++)
	{
		in>>f_data;
		vf.push_back(f_data);
	} 
	for(int i=0;i<25;i++)
	{
		vf[i]=vf[i]*vf[i]; 
	} 
	
	for(int i=0;i<25;i++)
	{
		cout<<vf[i]<<endl; 
	} 
	return 0;
} 
