#include<iostream>
#include<memory>
int main()
{
	auto p = std::make_shared<int> (42);
	std::cout << p.use_count() << std::endl ; 
	auto q(p);
	std::cout << q.use_count() << std::endl ;
	auto r = std::make_shared<int> (42);
	std::cout << r.use_count() << std::endl ; 
	r = q ;
	std::cout << p.use_count() << std::endl ; 
	std::cout << r.use_count() << std::endl ; 
	std::cout << q.use_count() << std::endl ;
	return 0;	
} 
