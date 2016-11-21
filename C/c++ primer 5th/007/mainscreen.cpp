#include <iostream>
using std::cout;
#include"Screen.h"

int main(int argc, char** argv) 
{
	Screen myScreen(5,3);
	const Screen blank(5,3);
	myScreen.set('#').display(cout);//调用常量版本 
	blank.display(cout);			//调用非常量版本 
	return 0;
}
