#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using std::string;
class Person
{
public:
	string getName() const;
	string getAddress() const;
		
	Person(string n,string a):name(n),address(a){}
	Person()=default;
	Person(string n)
	{
		name=n;
	}	
protected:
	
private:
	string name;
	string address; 
};

#endif
