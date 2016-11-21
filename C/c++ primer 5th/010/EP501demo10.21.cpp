#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
void fcn()
{
	int num=42;
	auto f=[&num]() -> bool { if(num==0) return true; else { --num;return false;	}	};
	
	while ( !f() )
	{
		cout << num << endl; 
	}
}
int main()
{
	fcn();
	return 0;
}

