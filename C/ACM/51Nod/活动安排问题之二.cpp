#include<iostream>
#include<algorithm>
#include<vector>
const int N=10001; 
using namespace std;
typedef struct Time{
	int Si,Fi;
}Time; 
bool fun(const Time &t1,const Time &t2)
{
	return t1.Si<t2.Si;
}
int main()
{
	vector<Time> vec_time;
	int array[N]={0};
	Time time;
	int N=0,count=0,flag=0;
	cin>>N;
	while(count<N)
	{
		count++;
		cin>>time.Si>>time.Fi;
		vec_time.push_back(time);
	}
	sort(vec_time.begin(),vec_time.end(),fun); 
	count=0;
	vector<Time>::iterator it=vec_time.begin();
	while(it!=vec_time.end())
	{
		flag=0;
		for(int index=0;index<count;index++)
		{
			if(array[index]<=it->Si)
			{
				flag=1;
				array[index]=it->Fi;
				break;
			}
		}
		if(flag==0)
		{	//此处先是array[count]=it->Fi;再是count=count+1; 
			array[count]=it->Fi;
			count=count+1;
		}
		it++; 
	}
	cout<<count<<endl;
	return 0;
} 
