//从小到大排序 
#include<cstdio>
void merage(int arr[],int p,int q,int r);
void merage_sort(int arr[],int p,int r); 

void insert_sort(int arr[],int sz);
int main(void)
{
	int i_arr[]={21,12,34,55,67,88,99,67,23,12};
	int sz=sizeof i_arr / sizeof *i_arr;

	insert_sort(i_arr,sz);
	for(int i=0;i<sz;i++)
	{
		printf("%d ",i_arr[i]);
	} 
	printf("\n"); 
	return 0;
} 

void insert_sort(int arr[],int sz)
{
	for(int i=1;i<sz;i++)
	{
		int i_key=arr[i];
		int j=i-1;
		while(j>0&&arr[j]>i_key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j]=i_key;
	} 
}
