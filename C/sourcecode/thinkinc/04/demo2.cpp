#include<iostream>
using namespace std;
struct NameTag{
	int age;
	void show(){cout<<age<<endl;}
};
int main()
{
	NameTag nameTag;
	nameTag.age=10;
	nameTag.show();
	return 0;
}
