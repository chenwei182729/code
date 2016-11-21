#include<iostream>
#include<vector>
#include<algorithm> 
#include <iterator> 
int main(void)
{
 	std::vector<int> vec;
    for(int i = 0 ;i < 10 ; i++)
	{
		vec.push_back(i);	
	} 
	reverse(vec.begin(),vec.end());
	for(std::vector<int>::iterator it=vec.begin() ; it != vec.end(); ++it)
		std::cout<< *it << " ";
	std::cout<< std::endl;
} 
