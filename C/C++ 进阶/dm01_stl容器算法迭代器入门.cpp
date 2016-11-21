#include<iostream>
#include<algorithm>
#include<vector>
const int SIZE=40;
using namespace std;
typedef struct Teacher
{
	int age;
	int name[SIZE];
}Teacher;
void vector_int()
{
	vector<int> vec;
	vec.push_back(-1);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;	
	int sum=count(vec.begin(),vec.end(),3);
	cout<<"count(3)="<<sum<<endl;
}
void vector_teacher()
{
	Teacher t1,t2,t3;
	t1.age=t2.age=t3.age=10;
	
	vector<Teacher> vec;
	vec.push_back(t1);
	vec.push_back(t2);
	vec.push_back(t3);
	for(vector<Teacher>::iterator it=vec.begin();it!=vec.end();it++)
	{
		cout<<"age ,"<<it->age<<" ,name"<<it->name<<endl;
	}	
	cout<<endl; 
}
void vector_teacher_pro()
{
	Teacher t1,t2,t3;
	t1.age=t2.age=t3.age=10;
	
	vector<Teacher*> vec;
	vec.push_back(&t1);
	vec.push_back(&t2);
	vec.push_back(&t3);
	for(vector<Teacher*>::iterator it=vec.begin();it!=vec.end();it++)
	{
		cout<<"age ,"<<(*it)->age<<" ,name"<<(*it)->name<<endl;
	}	
	cout<<endl; 
}
int main()
{
	vector_int();
	vector_teacher();
	vector_teacher_pro();	
	return 0;
} 
