#include<iostream>
#include<vector>
using namespace std;
class NoDefault
{
public:
    NoDefault(int val)
    {
        value=val;
    }
private:
    int value;
};
class C
{
public:
    C():nodefault(0)
    {

    }
private:
    NoDefault nodefault;
};
int main(void)
{
    C c;
//    vector<NoDefault> vec_nod(10);
    vector<C> vec_c(10); 
    return 0;
}
