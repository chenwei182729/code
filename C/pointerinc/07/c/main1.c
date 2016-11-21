/*main.c*/
#include <stdio.h>
#include "add.h"            
#include "sub.h"
int main(void)
{
   int a = 10, b = 12; 
   float x= 3.2f,y = 9.8f;
   
   printf("x=%f,y=%f\n",x,y); 
   
   float sum=add_float(x,y);
   float sub=sub_float(x,y);
   
   printf("float x+y IS:%f\n",sum);
   printf("float x-y IS:%f\n",sub);
  
   return 0;      
}


