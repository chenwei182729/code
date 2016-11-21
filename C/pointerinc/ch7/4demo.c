//7.11 4 可变参数 
#include<stdarg.h>
#include<stdio.h>
int max_list(int n_values,...);
int main( void )
{
	int x;
	x=max_list(1,10,3,4,5,9,100,-1);
	printf("%d\n",x);
} 
int max_list(int n_values,...)
{
	va_list var_arg;
	int max=-1;
	/*
	**准备访问可变参数 
	*/
	va_start(var_arg,n_values);
	while(1)
	{
		int now=va_arg(var_arg,int);
		if(now>max) max=now;
		if(now<0)
		{
			break;
		}	
	}
	va_end(var_arg);
	return max;
}

