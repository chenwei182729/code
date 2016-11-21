// ruler.cpp -- using recursion to subdivide a ruler
#include <iostream>
const int Len = 66;

int main()
{
    char ruler[Len];
    for(int i=0;i<Len;i++)
		ruler[i]='|';
		 
    std::cout << ruler << std::endl;

    return 0;
}

