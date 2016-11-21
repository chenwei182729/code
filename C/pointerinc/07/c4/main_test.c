/*main.c*/
#include <stdio.h>
int
add_int(int a, int b)
{
   return a+b;  
}

float
add_float(float x, float y)
{
	float sum=x+y;
	return sum; 
} 

double
add_double(double x,double y)
{
	double sum=x+y;
	return sum;
}

int
sub_int(int a, int b)
{
       return a-b;   
}

float
sub_float(float a, float b)
{
	float sub=a-b;
	return sub; 
} 

double
sub_double(double x,double y)
{
	double sub=x-y;
	return sub;
}

int
main(void)
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
