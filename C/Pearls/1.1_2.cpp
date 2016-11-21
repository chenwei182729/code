#include<iostream>
#include<set>
using namespace std; 
int main(void)
{
	set<int> myset;
	set<int>::iterator it;
	int i = 0,count = 10;
	for(i = 0;i < count;i++)
	{
		myset.insert(count* i - 10);
	}
	it=myset.begin();
	while(it != myset.end())
	{
		cout<<*it<<endl;
		++it;
	}
	return 0;
} 
