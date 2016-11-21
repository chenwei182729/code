#include<iostream>
#include<ctype.h>
#include<algorithm>
using namespace std;
const int N=27;
int main(void)
{
	int array[N]={0};
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		array[str[i]-'A']++;
	}
	sort(array,array+N);
	long long sum=0;
	for(int i=N-1;i>0;i--)
	{
		sum=sum+i*array[i];
	}
	cout<<sum<<endl;
	return 0;
} 
