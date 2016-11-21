#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int position,N,length,maxT=0,minT=0;
	cin>>N>>length;
	while(N--)
	{
		cin>>position;
		maxT=max(maxT,max(position,length-position)) ;
		minT=max(minT,min(position,length-position));
	}	
	cout<<minT<<" "<<maxT<<endl;
	return 0;
} 
