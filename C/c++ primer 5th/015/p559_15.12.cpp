#include<iostream>
#include<ostream>
class base
{
public:
	std::string name() { return basename;	}
	virtual void print(std::ostream &os) { os << name() ;	}
	base(std::string b):basename(b){	}
private:
	std::string basename;
};
class derived : public base
{
public:
	void print(std::ostream &os)  override { this->base::print(os); os << " " << i ;	}
	derived(std::string d,int ivar):base(d),i(ivar){	}
private:
	int i;
};
int main(void)
{
	base b("base");
	derived d("derived",1);
	b.print(std::cout);
	std::cout << std::endl ;
	d.print(std::cout);
	std::cout << std::endl ;
	return 0;
} 
