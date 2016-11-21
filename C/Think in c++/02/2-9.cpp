#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int
main()
{
	ifstream in("data2");
	vector<float> vf1,vf2,vf3;
	float f_data1,f_data2; 
	for(int i=0;i<25;i++)
	{
		in>>f_data1;
		in>>f_data2;
		vf1.push_back(f_data1);
		vf2.push_back(f_data2);
	} 
	
	for(int i=0;i<25;i++)
	{
		vf3.push_back(vf1[i]+vf2[i]);
	} 
	
	for(int i=0;i<25;i++)
	{
		cout<<vf3[i]<<endl; 
	} 
	return 0;
} 
