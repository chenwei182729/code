#include<iostream>
#include<vector>
using namespace std;
class Example
{
	public:
		static constexpr double rate=6.5;
		static constexpr int vecSize=20;
		static vector<double> vec[vecSize];
};
int main()
{
	cout<<Example::rate;
	//vector<double> Example::vec;
	return 0;
} 
