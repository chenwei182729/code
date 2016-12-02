#include<iostream>
struct Tag{
	int age;
};
void show(Tag *tag)
{
	std::cout<<"age:"<<tag->age<<std::endl;
}
void set(Tag *tag,int age)
{
	tag->age=age;
}
int main()
{
	Tag tag;
	set(&tag,10);
	show(&tag);
	return 0;
}
