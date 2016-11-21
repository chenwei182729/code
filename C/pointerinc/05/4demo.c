#include<stdio.h>
#define SIZE 32
void set_bit(char bit_array[],unsigned bit_number)
{
	bit_array[bit-1]=1;
}
void clear_bit(char bit_array[],unsigned bit_number)
{
	bit_array[bit-1]=0;
}
void assign_bit(char bit_array[],unsigned bit_number,int value)
{
	bit_array[bit-1]=((value==0)?0:1);
}
int test_bit(char bit_array[],unsigned bit_number)
{
	if(bit_array[bit-1]==0)
		return 0;
	else
		return 1;
}
int
main ()
{
	unsigned value=25;
	printf("%u\n",reverse_bits(value));
	return 0;
} 
