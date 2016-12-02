#include<stdio.h>
struct Tag{
	int age;
};
void show(struct Tag *tag)
{
	printf("age:",tag->age);
}
void set(struct Tag *tag,int age)
{
	tag->age=age;
}
int main()
{
	struct	Tag tag;
	set(&tag,10);
	show(&tag);
	return 0;
}
