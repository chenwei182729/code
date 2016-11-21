#include<iostream>
using namespace std;
void fun(void* v_arr,int size);
int main()
{
	int i_arr[]={1,2,3,4,5,6,7,8,9,10};
	int bsz=sizeof(i_arr)/ sizeof (char);
	int sz=sizeof (i_arr) / sizeof (*i_arr);
	void * v_arr=static_cast<void*> (i_arr);
	fun(v_arr,bsz);
	for(int i=0;i<sz;i++)
		cout<<i_arr[i]<<" ";
	cout<<endl; 
}
void fun(void* v_arr,int size)
{
	char *c_arr=static_cast<char*> (v_arr);
	for(int i=0;i<size;i++)
	{
		if(i%4==0)
			*c_arr++=1;
		else *c_arr++=0;
	}		
}
