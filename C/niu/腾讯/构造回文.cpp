#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
const int MAX_N = 1001;
int f[MAX_N][MAX_N];

using namespace std;
int main(void)
{
	string str;
	int len,i,j,small;
	while(cin>>str)
	{
		len = str.length();
		memset(f,0,sizeof(f));
		for(i = 1;i <= len; ++i)
		{
			for(j = 1;j <= len ; ++j)
			{
				if(str[len - j] == str[i - 1])
				{
					f[i][j]=max(f[i - 1][j - 1] + 1,max(f[i - 1][j],f[i][j - 1]));
				}
				else
				{
					f[i][j]=max(f[i - 1][j - 1],max(f[i - 1][j],f[i][j - 1]));
				}
			}
		}
		
		int maxLen = 0;
		for(j = 1;j <= len ; ++j)
		{
			maxLen = max(maxLen,f[len][j]);
		}
		cout << len - maxLen << endl;
	}
	return 0;
}
