/*main.c*/
#include <stdio.h>
#include "add.h"            
#include "sub.h"
int main(void)
{
       int input = 0;
       int a = 10, b = 12;
       float x= 1.234,y = 9.876;
      
       printf("int a+b IS:%d\n",add_int(a,b));
       printf("int a-b IS:%d\n",sub_int(a,b));
       printf("float x+y IS:%f\n",add_float(1.0,0.1));
       printf("float x-y IS:%f\n",sub_float(x,y));

	printf("%f\n",sub_float(1.0,0.21));	    
       return 0;      
}

