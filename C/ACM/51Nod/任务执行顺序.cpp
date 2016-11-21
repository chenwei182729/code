#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct Time{
	int Ri,Oi,Bi;
}Time; 
bool fun(const Time &t1,const Time &t2)
{
	return t1.Bi>t2.Bi;
}
int main()
{
	vector<Time> vec_time;
	Time time;
	int N=0,count=0;
	cin>>N;
	while(count<N)
	{
		count++;
		cin>>time.Ri>>time.Oi;
		time.Bi=time.Ri-time.Oi;
		vec_time.push_back(time);
	}
	sort(vec_time.begin(),vec_time.end(),fun); 
	vector<Time>::iterator it=vec_time.begin();
	int sum=0,flag=0;//sum总数 flag当前剩余空间 
	//需要加多少空间当前状态才能运行 
	while(it!=vec_time.end())
	{
		count=0;
		if(flag<it->Ri) 
		{
			count=it->Ri-flag;
			flag=it->Ri;
		}
		sum=sum+count;
		flag=flag-it->Oi; 
		it++; 
	}
	cout<<sum<<endl;
	return 0;
} 
