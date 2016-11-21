#include<iostream>
#define LOCAL
using namespace std;
const int SIZE=45000;
const int MAX=100000001;
int main()
{
#ifdef LOCAL
    freopen("1087.in","r",stdin);
    freopen("1087.out","w",stdout);
#endif
	int index=0,array[SIZE]={0};
	int position=1,count=0,flag;
	while(position<=MAX)
	{
		array[index]=position;
		position=position+count;
		count++;
		index++;
	}
	//array从小到大记录下所有为1的位 
//	for(index=1;index<count;index++)
//	{
//		cout<<array[index]<<" ";
//	}
//	cout<<endl;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>position;
		flag=0;
		for(index=0;index<count;index++)
		{
			if(array[index]==position)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}	
	return 0;
} 
