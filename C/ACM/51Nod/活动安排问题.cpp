#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct Time{
	int Si,Fi;
}Time; 
bool fun(const Time &t1,const Time &t2)
{
	return t1.Fi<t2.Fi;
}
int main()
{
	vector<Time> vec_time;
	Time time;
	int N=0,count=0,position=0;
	cin>>N;
	while(count<N)
	{
		count++;
		cin>>time.Si>>time.Fi;
		vec_time.push_back(time);
	}
	sort(vec_time.begin(),vec_time.end(),fun); 
//	for(vector<Time>::iterator it=vec_time.begin();it!=vec_time.end();it++)
//	{
//		cout<<it->Si<<" "<<it->Fi<<endl;
//	}
	count=0,position=INT_MIN;
	vector<Time>::iterator it=vec_time.begin();
	while(it!=vec_time.end())
	{
		if(it->Si>=position)
		{
			count++;
			position=it->Fi;
		}
		it++;
	}
	cout<<count<<endl;
	return 0;
} 
