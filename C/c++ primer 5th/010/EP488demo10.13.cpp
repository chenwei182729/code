#include <iostream>     
#include <algorithm>   
#include <string>
using namespace std;
bool IsShorter (const string &s1) { return s1.length()<5; }

int main () 
{
	vector<string> vec_str{"better", "hello", "world", "be", "better"};
	std::vector<string>::iterator bound;
	bound = std::partition (vec_str.begin(), vec_str.end(), IsShorter);
	
	for (std::vector<string>::iterator it=bound; it!=vec_str.end(); ++it)
	std::cout << ' ' << *it;
	std::cout << '\n';

  return 0;
}

