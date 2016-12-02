#include<stdio.h>
#include<stdlib.h>
int gcd(int p,int q)
{
	if(q == 0) return p;
	return gcd(q,p%q);
}
void reverse(char arr[],int sz,int cnt)
{
	int tmp,loopCnt = gcd(sz,cnt);
	int i,j,k;
	for(i=0;i<loopCnt;i++)
	{
		tmp = arr[i];
		j = i;
		while(1)
		{
			k = j + cnt;
			if(k >= sz)
				k = k - sz;
			if(k == i)
				break;
			arr[j] = arr[k];
			j = k ;
		}
		arr[j] = tmp;
	}
}
int main(void)
{
	char carr[]={'a','b','c','d','e','f','g','h'};
	int sz = 8,i=0;

	reverse(carr,sz,3);
	printf("========\n");
	for(i = 0 ;i < sz;i++)
	{
		printf("%c ",carr[i]);
	}
	printf("\n");
	printf("========\n");
	return 0;
} 
