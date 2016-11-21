#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std; 
namespace Jill
{
	char c_array[20];
	char *goose(const char*);
}
namespace Jill
{
	void fetch()
	{
		cout<<"Hello Fetch"<<endl;
	}
	void set_c_array()
	{
		strcpy(c_array,"hello");
	}
	void show_goose()
	{
		cout<<c_array<<endl;
	}
}
int main(int argc,char *argv[])
{
	Jill::fetch();
	Jill::set_c_array();
	Jill::show_goose();
	return 0;
}

