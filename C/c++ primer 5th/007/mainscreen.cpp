#include <iostream>
using std::cout;
#include"Screen.h"

int main(int argc, char** argv) 
{
	Screen myScreen(5,3);
	const Screen blank(5,3);
	myScreen.set('#').display(cout);//���ó����汾 
	blank.display(cout);			//���÷ǳ����汾 
	return 0;
}
