#define LOCAL
#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
#ifndef LOCAL
    freopen("1001.in","r",stdin);
    freopen("1001.out","w",stdout);
#endif
	int N,K;
	int arr[50001];
	cin>>N>>K;
	int i=0,j,flag=0;
	while(i<K)
	{
		cin>>arr[i];
		i++;
	}
	sort(arr,arr+K);
	for(i=0,j=K-1;i<j;)
	{
		if(arr[i]+arr[j]==N)
		{
			flag=1;
			cout<<arr[i]<<' '<<arr[j]<<endl;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<N)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	if(flag==0)
		cout<<"No Solution"<<endl;
	return 0;
}
