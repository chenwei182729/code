#include<iostream>
#include<stack>
//#define LOCAL
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("1289.in","r",stdin);
    freopen("1289.out","w",stdout);
#endif
	stack<int> fish_right_sta;
	int weight=0,direction=0,n=0,count=0;
	cin>>n;
	count=n;
	while(n--)
	{
		cin>>weight>>direction;
		if(direction==1)
		{
			fish_right_sta.push(weight);
		}
		else
		{
			while(!fish_right_sta.empty())
			{
				if(weight>fish_right_sta.top())
				{
					fish_right_sta.pop();
					count--;
				}	
				else
				{
					count--;
					break;
				}				
			}		
		}		
	} 
	cout<<count<<endl;
	return 0;
} 
