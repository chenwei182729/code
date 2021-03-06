#define LOCAL
#include<iostream>
#include<array>
#include<string>
const int Seasons = 4 ;
const std::array<std::string,Seasons> Snames = 
	{
		"Spring","Summer","Fall","Winter"
	};
//fill	
void fill( std::array<double,Seasons>  *pa);
void show( std::array<double,Seasons> da);
int
main ()
{
#ifdef LOCAL
    freopen("arrobj.in","r",stdin);
    freopen("arrobj.out","w",stdout);
#endif 
	std::array<double,Seasons> expenses;
	fill(&expenses);
	show(expenses);
	
	return 0;
} 
void fill( std::array<double,Seasons> *pa)
{
	using namespace std;
	for( int i = 0 ; i < Seasons; i ++ )
	{
		cout<<"Enter "<<Snames[i]<<" expenses:\n";
		cin>>(*pa)[i];
	}
}
void show( std::array<double,Seasons> da)
{
	using namespace std;
	double total=0.0;
	for( int i = 0 ; i < Seasons; i ++ )
	{
		cout<<Snames[i]<<":$"<<da[i]<<endl;
		total+=da[i];
	}
	cout<<"Total Expenses:$"<<total<<endl;
}
