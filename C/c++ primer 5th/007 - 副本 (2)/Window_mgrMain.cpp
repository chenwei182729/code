#include <iostream>
using std::cout; 
using std::endl;
#include <string>
using std::string;
#include "Screen.h"
#include "Window_mgr.h"
int main()
{
	Window_mgr w_mgr;
	Screen screen(1,1,'W');
	Window_mgr::ScreenIndex size=w_mgr.addScreen(screen);
	
	cout << size << endl;
}

