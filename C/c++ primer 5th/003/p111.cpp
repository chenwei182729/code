#include<string>
#include<iostream>
using namespace std;
int main(void)
{
	const string hexdigists="0123456789ABCDEF";//���ܵ�16��������
	cout<<"Enter a series of numbers between 0 and 15";
		<<" separated by sapces. Hit ENTER when finished :"
		<<endl;
	string result;	//���ڱ���16������
	string::size_type n;
	while(cin>>n)
	{
		if(n<hexdigists.size())//������Ч����
			result+=hexdigists[n] ;
	}
	cout<<"Your hex number is :"<<result<<endl; 
	return 0;
} 
