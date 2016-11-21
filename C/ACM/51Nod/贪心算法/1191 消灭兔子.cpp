#define LOCAL
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<functional>
#include<iterator>
using namespace std;
int main()
{
#ifdef LOCAL
    freopen("1191.in","r",stdin);
    freopen("1191.out","w",stdout);
#endif
	int M,N,b,d,p;
	multiset<int,greater<int>> bset;
	multimap<int,int,greater<int>> dbmap;
	cin>>N>>M;
	while(N--)
	{
		cin>>b;
		bset.insert(b);
	}
	while(M--)
	{
		cin>>d>>p;
		dbmap.insert(make_pair(d,p));//按d键排序 
	}
	bool hassolution=true;
	int sum=0;
	while ((!bset.empty()) && (!dbmap.empty()))
	{
//#if 0
		d=*bset.begin();
		//multimap<int,int>::iterator it=dbmap.begin();
		multimap<int,int>::iterator it=dbmap.find(d);
//		cout << *bset.begin() << endl;
		if(it!=dbmap.end())
		{
			cout << it->first << " " << it->second << endl; 
			dbmap.erase(it);
		}
		bset.erase(bset.cbegin()); //删除该元素
//#endif
#if 0
		//从bset.empty中从最大的开始取假设为d，然后在dbmap中查找大于等于d的，价格最低的箭，删除
		d=*bset.cbegin();
		multimap<int,int>::iterator it=dbmap.find(d);//开始找d的位置，找到大于d的价格最低的箭的迭代器 
		multimap<int,int>::iterator fid=it;//存储找到的迭代器 
		
		for(;it!=dbmap.end();it++)
		{
			if(it->second < fid->second)
				fid = it; 
		}
		if(fid==dbmap.end()) 
		{
			hassolution=false;
			break;
		}
		sum += fid->second;
		cout << *bset.begin() << endl;
		cout << it->first << " " << it->second << endl; 
		dbmap.erase(fid);
		bset.erase(bset.cbegin()); //删除该元素
#endif
	} 
#if 0
	if(hassolution)
	{
		cout << sum << endl;
	}
	else
	{
		cout << "No Solution" << endl;
	}
#endif
	return 0;
} 
