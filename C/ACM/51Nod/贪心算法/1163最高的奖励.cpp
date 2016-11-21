#define LOCAL
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
const int MAX_N = 50005;
pair<int,int> ew[MAX_N]; 
int main()
{
#ifdef LOCAL
    freopen("1163.in","r",stdin);
    freopen("1163.out","w",stdout);
#endif
	int N,i;
	cin >> N ;
	for(i = 0 ; i < N ; i ++)
		cin >> ew[i].first >> ew[i].second ;
	sort(ew,ew+N);
	
	return 0;
} 
