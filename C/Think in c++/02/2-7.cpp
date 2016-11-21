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
	char ch; 
	while(cin.get())
	{
		in>>line;
		cout<<line;
	}		
	return 0;
} 
