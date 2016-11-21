/*main.c*/
#include <stdio.h>
#include "add.h"            
#include "sub.h"
int main(void)
{
   int a = 10, b = 12;
   float x= 1.234,y = 9.876;
   
   printf("x=%f,y=%f\n",x,y); 
   printf("float x+y IS:%f\n",add_float(x,y));
   printf("float x-y IS:%f\n",sub_float(x,y));

   printf("%f\n",sub_float(1.0,0.21));	    
   return 0;      
}

