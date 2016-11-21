#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <functional>
#include <algorithm> 
using namespace std;
int main()
{
	ostream_iterator<string> out_iter(cout," ");
	 
	vector<string> vs{"better", "hello", "world", "be", "better"};
	copy(vs.begin(),vs.end(),out_iter);
	
	return 0;
}

