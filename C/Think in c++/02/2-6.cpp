#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int
main()
{
	ifstream in("FileVector.cpp");
	string line;
	string context_text=""; 
	while(getline(in,line))
		context_text+=line;
		
	cout<<context_text<<endl;
	return 0;	
} 
