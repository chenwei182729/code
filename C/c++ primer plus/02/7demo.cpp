#define LOCAL
#include<iostream>
using namespace std;
void show_time(int *hour,int *minute)
{
	cout<<*hour<<":"<<*minute<<endl; 
} 
int
main()
{
#ifdef LOCAL
    freopen("7demo.in","r",stdin);
    freopen("7demo.out","w",stdout);
#endif 
    int hour = 0 , minute = 0 ;
    cout<<"Enter the number of hours :";
	cin>>hour;
	cout<<"Enter the number of minutes :";
	cin>>minute;
	show_time(&hour,&minute);
	return 0;
} 
