#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int MAX_N = 101;
int B[MAX_N];
struct ABCD{
	int a,b,c,d;
}A[MAX_N];
bool comp(struct ABCD a1,struct ABCD a2)
{
	if(a1.a < a2.a)	return true;
	else if(a1.a == a2.a && a1.b < a2.b) return true;
	else if(a1.a == a2.a && a1.b == a2.b && a1.c < a2.c) return true;
	else if(a1.a == a2.a && a1.b == a2.b && a1.c == a2.c && a1.d < a2.d) return true;
	return false;
}
void init()
{
	for(int i=0;i<MAX_N;i++)
	{
		B[i]=pow(i,3);
	}
}
//从1开始查找 
int binarySearch(int arr[],int sz,int val)
{
	int lo = 1, hi = sz;
	while(lo <= hi)
	{
		int mid = lo + (hi - lo) / 2;
		if(arr[mid] > val) hi = mid - 1;
		else if(arr[mid] < val) lo = mid + 1;
		else return mid; 
	} 
	return 0;
}
void solve(int n)
{
	int count = 0;
	int i,j,k;
	for(i = 2;i <= n;i++)
	{
		for(j = 2;j < i;j++)
		{
			for(k = 2; k < j;k++)
			{
				int pos = binarySearch(B,n,B[i] - B[j] - B[k]);
				if(pos > 1 && pos <= k && pos <= j)
				{
					A[count].a = i;
					A[count].b = pos;
					A[count].c = k;
					A[count].d = j;
					count++;
				}
			}
		}
	}
	sort(A,A+count,comp);
	for(i = 0 ; i < count ; i++)
	{
		printf("Cube = %d, Triple = (%d,%d,%d)\n",A[i].a,A[i].b,A[i].c,A[i].d);
	}
}
int main(void)
{
	init(); 
	int n;
	scanf("%d",&n);
	solve(n);
	return 0;
}
