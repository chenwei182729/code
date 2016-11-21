#include <iostream>  
using namespace std;
int w, m;
int main()
{
	scanf("%d%d", &w, &m);
	while (m)
	{
		if (m%w == 1 || m%w == 0)
		{
			m = m / w;
		}
		else if(m%w==w-1)
		{
			m = m / w + 1;
		}
		else
		{
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
}
