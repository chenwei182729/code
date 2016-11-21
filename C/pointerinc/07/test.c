#include <stdlib.h>
#include <stdio.h>
//float 
//add(float a,float b);
float 
add(float a,float b)
{
	return a+b;
}
int 
main(void)
{
	float a=1.2,b=1.3;
	float c=add(a,b);
	printf("a+b = %f\n",c);
#if 0
	
#endif 
	return 0;
}
