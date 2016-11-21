#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include<vector>
#include<string>
#include"Screen.h"

class Window_mgr
{
public:
	using ScreenIndex=std::vector<string>::size_type; 
	//窗口中每一个屏幕的编号 
	ScreenIndex addScreen(const Screen &); 

	//按照编号将制定的 Screen重置为空白
	void clear(ScreenIndex idx) ;
protected:
	std::vector<Screen> screens{Screen(24,80,' ')};
};
void
Window_mgr::clear(ScreenIndex idx)
{
	Screen &s=screens[idx];
	s.contents=string(s.height*s.width,' ');
}
Window_mgr::ScreenIndex 
Window_mgr::addScreen(const Screen &s)
{
	screens.push_back(s);
	return screens.size()-1;
}
#endif
