#include<iostream>
using namespace std;
#define BITSPERWORD 32
#define SHIFT 5
#define MASK 0x1f
#define N 10000000
int a[1 + N / BITSPERWORD] ;
void set(int i)
{
	a[i>>SHIFT] |= (1<<(i & MASK)); 
}
void clr(int i)
{
	a[i>>SHIFT] &= ~(i<<(i & MASK));
}
bool test(int i)
{
	return a[i>>SHIFT] & (1 << (i & MASK)); 
}
int main()
{
	int i;
	for(i=0;i<N;i++)
	{
		clr(i);
	}
	int j=1024;
	while(j>100)
	{
		if(j%2)
			set(j);
		j--;
	}
	for(i=0;i<1024;i++)
		if(test(i))
			printf("%d\n",i);
			
	for(i = 0;i < 1024;i++)
	{
		cout << (1 << (i & MASK))<< " ";
		if(i%32==0)
			cout << "=========" << endl;
	}
	return 0;
} 
