#include<iostream>
using namespace std;
long long pow_mod(long long a, long long b, long long c)
{
	long long result = 1, base = a;
	while (b)
	{
		if (b % 2)
		{
			result = result*base;
			result=result%c;
			base = base*base;
		}
	    b=b/2;
	}
	return result;
}
int main(void)
{
	long long a;
	cin >> a;
	cout << pow_mod(a,a,10)<<endl;
	return 0;
}
