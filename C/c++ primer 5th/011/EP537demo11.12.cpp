#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;
int main()
{
	vector<pair<string,int>> vp_si;
	make_pair("chen",1);
	for(int i=0;i<10;i++)
		vp_si.push_back(make_pair("chen",i));
		
	cout << vp_si.size() << endl;
	return 0;
}

