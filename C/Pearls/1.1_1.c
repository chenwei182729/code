#include<stdio.h>
int int_comp(int *x,int *y)
{
	return *x - *y;
}
int main(void)
{
	int a[]={5,4,54,6};
	int i=0;
	int n=sizeof(a)/sizeof(*a);
	qsort(a,n,sizeof(int),int_comp);
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
	return 0;
} 
