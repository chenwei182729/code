#ifndef SCREEN_H
#define SCREEN_H
#include<string>
#include<iostream> 
#include<fstream>
class Screen
{
public:
	typedef std::string::size_type pos;	
	Screen()=default;//
	Screen(pos ht,pos wd):height(ht),width(wd){}
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
	char get() const
		{ return contents[cursor];}
	inline char get(pos ht,pos wd) const;
	Screen & move(pos r,pos c);
	void some_member() const; 
	Screen & set(char c);
	Screen & set(pos,pos,char c);
	Screen & display(std::ostream &os)
			{ do_display(os); return *this;	}
	const Screen &display(std::ostream &os) const
			{ do_display(os); return *this;} 

private:
	pos cursor=0;
	pos height=0,width=0;
	std::string contents;
	mutable size_t access_ctr;//即使在一个const对象内也能被修改
	void do_display(std::ostream &os) const { os<<contents;}
};

#endif
