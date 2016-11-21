#include<iostream>
#include<cstdlib>
#include <memory>
#include<cstring>
using namespace std;
typedef int (*CFT)(const void *,const void *);
void ssort(void* base,size_t n,size_t sz,CFT cmp)
{
	for(int gap=n/2;0<gap;gap/=2)
		for(int i=gap;i<n;i++)
			for(int j=i-gap;0<=j;j-=gap){
				char* b = static_cast<char*> (base);
				char* pj=b+j*sz;
				char* pjg=b+(j+gap)*sz;
				if(cmp(pjg,pj)<0)
				{
					for(int k=0;k<sz;k++)
					{
						char temp=pj[k];
						pj[k]=pjg[k];
						pjg[k]=temp;
					}
				}
			}	
} 
struct User{
	char* name;
	char* id;
	int dept;
};
User heads[]={
	"Ritchie D.M.",	"dmr",	11271,
	"Sethi R.",		"ravi",	11272,
	"Szymanski T.G.","tgs",	11273,
	"Schryer N.L.",	"nls",	11274,
	"Schryer N.L.",	"nls",	11275,
	"Kernighan B.W.","bwk",	11276
};
void print_id(User* v,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<v[i].name<<"\t"<<v[i].id<<"\t"<<v[i].dept<<"\n";
	}
}
int cmp1(const void* p,const void* q)
{
	return strcmp(static_cast<const User*> (p)->name,static_cast<const User*>(q)->name);
}
int cmp2(const void* p,const void* q)
{
	return static_cast<const User*>(p)->dept-static_cast<const User*>(q)->dept; 
}
int main()
{
	cout<<"Heads in alphabetical order:\n";
	ssort(heads,6,sizeof(User),cmp1);
	print_id(heads,6);
	cout<<'\n'; 
	ssort(heads,6,sizeof(User),cmp2);
	print_id(heads,6);
	cout<<'\n'; 
}
