#include<stdio.h>
#include<stdlib.h>
int len(char str[]);
void deblank(char str[]);
void deblank(char str[])
{
	int i_pre=-1,i_pos=0;
	while(str[i_pos]!=NULL)
	{
		if(i_pos==-1)
		{
			i_pre=0;
			i_pos=1; 
		}
			
		if(str[i_pos]==' ')
		{
			if(str[i_pre]==' ')
			{
				i_pos++;
			}
			else
			{
				str[++i_pre]=str[i_pos++];
			}
		}
		else
		{
			str[++i_pre]=str[i_pos++];
		}
	}
	str[++i_pre]=NULL;
} 
int len(char str[])
{
	int i=0;
	while(str[i++]!=NULL);
	
	return i;
}
int main( void )
{
	char c_arr[]={"Thank you  very   m u u ch !"};
	puts(c_arr);
//	printf("%d\n",sizeof(c_arr));
	deblank(c_arr);
	puts(c_arr);
	printf("%d\n",len(c_arr));
	return 0;
}

