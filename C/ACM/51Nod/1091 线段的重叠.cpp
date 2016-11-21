#include<iostream>
#include<vector>
#include<algorithm>
//#define LOCAL
using namespace std;
typedef struct Line
{
	int left,right;
}Line;
bool cmp(const Line &a,const Line &b)
{
	if(a.left<b.left) return true;
	else if(a.left==b.left&&a.right<b.right) return true;
	else	return false;
}
int main()
{
#ifdef LOCAL
    freopen("1091.in","r",stdin);
    freopen("1091.out","w",stdout);
#endif
	vector<Line> vec;
	vector<Line>::iterator it,position;
	int max=0,N=0,tmp=0;
	Line line;
	cin>>N;
	while(N--)
	{
		cin>>line.left;
		cin>>line.right;
		vec.push_back(line);
	}
	sort(vec.begin(),vec.end(),cmp);
//	for(it=vec.begin();it<vec.end();it++)
//		cout<<it->left<<" "<<it->right<<endl;
	for(it=vec.begin();it<vec.end();it++)
	{
		position=it+1;
		while(position!=vec.end())
		{
			if(position->left>=it->right) break;
			
			if(position->right<it->right)
			{
				tmp=position->right-position->left;
			}
			else
			{
				tmp=it->right-position->left;
			} 	
			if(max<tmp)
				max=tmp;		
			position++;
		}
	}	
	cout<<max<<endl;	
	return 0;
}

