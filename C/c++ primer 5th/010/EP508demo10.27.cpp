#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> vi={1,1,22,33,4,1,1,2,2,3,3,4,4};
	cout<<vi.size()<<endl;
	list<int> lst(10);
	sort(vi.begin(),vi.end());
	auto it=std::unique_copy(vi.begin(),vi.end(),lst.begin());

	cout<<lst.size();
	for(auto l:lst)
		cout<<l<<endl;                                                            //                ^


	return 0;
}

