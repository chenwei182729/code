/*main.c*/
#include <stdio.h>
#include "add.h"            
#include "sub.h"
int main(void)
{
   int a = 10, b = 12; 
   float x= 3.2f,y = 9.8f;
   double m=3.2,n=6.4;
   printf("x=%f,y=%f\n",x,y); 
   
   float sumf=add_float(x,y);
   float subf=sub_float(x,y);
   
   printf("float x+y IS:%f\n",sumf);
   printf("float x-y IS:%f\n",subf);
  
   double sumd=add_float(x,y);
   double subd=sub_float(x,y);
   
   printf("double m+n IS:%f\n",sumd);
   printf("float m-n IS:%f\n",subd);
   return 0;      
}


