#include<stdio.h>
bool isLeafYear(int year)
{
	if(year%400 == 0 || (year%4 == 0 && year%100 != 0) )
		return true;
	return false;
}
int main(void)
{
	int year;
	scanf("%d",&year);
	if(isLeafYear(year))
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}
