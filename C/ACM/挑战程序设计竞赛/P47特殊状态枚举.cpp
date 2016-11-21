//#define LOCAL
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=10;
bool used[maxn];
int perm[maxn];
void permutation1(int pos,int n)
{
	if(pos==n)
	{
		for(int i=0;i<n;i++)
			cout<<perm[i]<<" ";
		cout<<endl; 
		return ;
	}	
	for(int i=0;i<n;i++)
	{
		if(!used[i])
		{
			perm[pos]=i;
			used[i]=true;
			permutation1(pos+1,n);
			used[i]=false;	
		}
	}
	return ;
} 
int perm2[maxn];
void permutation2(int n)
{
	for(int i=0;i<n;i++)
	{
		perm2[i]=i;
	}
	do{
		for(int i=0;i<n;i++)
			cout<<perm[i]<<" ";
		cout<<endl; 
	}while(next_permutation(perm2,perm2+n));
	return ;
}
int main(void)
{
#ifndef LOCAL
    freopen("data1.in","r",stdin);
    freopen("data1.out","w",stdout);
#endif
	permutation1(0,9);
	return 0;
} 
