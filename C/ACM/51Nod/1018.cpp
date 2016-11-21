#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
	vector<int> V;
	int N,ix,count=0;
	cin>>N;
	while(count<N)
	{
		cin>>ix;
		V.push_back(ix);
		count++;
	}	
	sort(V.begin(),V.end());
	for(vector<int>::iterator it=V.begin();it<V.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
} 
