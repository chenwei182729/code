#define LOCAL
#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
void display(const string sa[],int n);
int main()
{
#ifdef LOCAL
    freopen("topfive.in","r",stdin);
    freopen("topfive.out","w",stdout);
#endif 
	string list[SIZE];
	cout<<"Enter you "<<SIZE<<" favorite astronomical sights:\n";
	for( int i = 0 ; i < SIZE ; i ++ )
	{
		cout<<(i+1)<<" : ";
		getline( cin,list[i] );
	 } 
	 cout<<"\n Your List:\n";
	 display ( list, SIZE );
	return 0;
}
void display(const string sa[],int n)
{
	for( int i = 0 ; i < n ; i ++ )
		cout<<i+1 <<" : "<<sa[i]<<endl; 
}
