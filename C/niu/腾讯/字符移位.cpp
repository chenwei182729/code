#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void)
{
	string str;
	int len,idx,tmp,small;
	while(cin>>str)
	{
		len = str.length();
		small = -1;
		for(idx = 0 ; idx < len; ++idx)
		{
			tmp = idx;
			//Ð¡Ð´×ÖÄ¸ 
			if(str[tmp] >= 'a' && str[tmp] <= 'z')
			{
				++small;
				for(;tmp > small;--tmp)
				{
					swap(str[tmp],str[tmp-1]);
				} 
				swap(str[tmp],str[small]);
			}
		}
		cout << str << endl;
	}
	return 0;
}
