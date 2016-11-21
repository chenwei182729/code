#include<string>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int
main()
{
	ifstream in("words");
	string word;
	string search_word="Hello"; 
	int count=0;
	while(in>>word)
	{
		if(word==search_word)
		{
			count++;
		}
	}
	cout<<search_word<<" appear "<<count<<" times ."<<endl;
	return 0;
} 
