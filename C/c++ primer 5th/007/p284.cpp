#include<iostream>
using namespace std;
class ConstRef
{
public:
	ConstRef(int ii);
private:
	int i;
	const int ci;
	int &ri;
};
ConstRef::ConstRef(int ii):i(ii),ci(ii),ri(ii){}

/*
ConstRef::ConstRef(int ii)
{
    i=0;
    ci=i;
    ri=&ci;
}
*/
int
main(void)
{
	ConstRef ref(1);
	return 0;
}
