#define LOCAL
#include<iostream>
#include<cstring>
#include<map> 
using namespace std;
int main(void)
{
#ifdef LOCAL
    freopen("1004.in","r",stdin);
    freopen("1004.out","w",stdout);
#endif
	int N ;
	map<string,int> m_si;
	string str;
	map<string,int>::iterator it;
	int fcnt;
	while (cin>>N && N !=0)
	{
		for(int i = 0 ; i < N ; i++)
		{
			cin>> str;
			m_si[str]++ ;
		}
		it = m_si.begin();
		fcnt = 0 ;
		for( ; it != m_si.end() ; ++it )
		{
			if (it->second > fcnt)
			{
				str = it->first;
				fcnt = it->second;
			}
		} 
		cout << str << endl ;
		m_si.clear();
	}
	return 0;
}
