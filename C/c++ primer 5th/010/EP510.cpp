#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vi; 
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	while ( in_iter != eof )
		vi.push_back(*in_iter++) ;
	//
//	vector<int> vec(in_iter,eof);

	ostream_iterator<int> out_iter(cout," ");
	for (auto e : vi)
		*out_iter++ = e ;
	cout << endl; 
	return 0;
}

