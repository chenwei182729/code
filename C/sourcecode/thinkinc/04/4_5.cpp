#include<iostream>
struct Tag{
	int age;
	void show();
	void set(int age);
};
void Tag::show()
{
	std::cout<<"age:"<<age<<std::endl;
}
void Tag::set(int age)
{
	this->age=age;
}
int main()
{
	Tag tag;
	tag.set(10);
	tag.show();
	return 0;
}
