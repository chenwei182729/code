//��k����0~n-1֮��������(k<n) 
#include<iostream>
#include<time.h>
using namespace std; 
int const N = 10000;
int a[N];
int main(void)
{
	int i,j,k=10;
	for(i = 0 ;i < N; i++)
		a[i] = i;

	//��ʼ��������ӣ���������� 
	srand((unsigned)time(NULL));
	for(i = 0 ; i < k; i ++)
	{
		int tmp = rand() % (N - i); 
		cout << "tmp ->" << tmp << endl;
		swap(a[tmp],a[N-i]);
	}
	for(i = N - 1 ; i > N - k;i--)
	{
		cout<<a[i]<<endl;
	}
	return 0;
} 
