#define LOCAL
#include<iostream>
const double CHANGE_METER = 0.0254 ;
const double CHANGE_KILOGRAM = 2.2 ;
using namespace std;
int
main()
{
#ifdef LOCAL
    freopen("01demo.in","r",stdin);
    freopen("01demo.out","w",stdout);
#endif 
	double feet , inch = 0.0 , pound ;
	double kilogram , meter ,BMI ;
	cin>>feet>>inch>>pound;
	meter =( feet * 12 + inch ) * CHANGE_METER ;
	kilogram = pound  /  CHANGE_KILOGRAM ;
	BMI = kilogram / meter ;
	cout<<"BMI:"<<BMI<<endl;
	return 0;
} 
