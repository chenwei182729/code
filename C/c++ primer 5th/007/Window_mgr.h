#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include<vector>
#include"Screen.h"
class Window_mgr
{
public:
	
protected:
	std::vector<Screen> screens{Screen(24,80,' ')};
};

#endif
