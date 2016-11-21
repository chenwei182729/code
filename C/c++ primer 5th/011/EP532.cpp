#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <fstream> 
#include <algorithm> 
#include <iterator>
using namespace std;
int main()
{
	vector<int> ivec;
	for (vector<int>::size_type i=0;i!=10;++i)
	{
		ivec.push_back(i);
		ivec.push_back(i);
	}
	set<int> iset(ivec.cbegin(),ivec.cend());
	multiset<int> miset(ivec.cbegin(),ivec.cend());
	cout<<iset.size()<<endl;
	cout<<miset.size()<<endl;
//	ostream_iterator<string> out_iter(cout," ");
//	copy(iset.begin(),iset.end(),out_iter);
	
	return 0;
}

