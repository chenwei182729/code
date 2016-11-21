#include <stdio.h>
const int count = 20 ;
int main() 
{ 
	int i = 1 ;
	char file_name[20]={ "1demo.in " };
	FILE *fp;
	for( i = 1 ; i < count ; i++ )
	{
		file_name[0]=i/10+'0';
		file_name[1]=i%10+'0';
		if((fp=fopen(file_name,"wb"))==NULL) 
		{	 
			printf("\nopen file error"); 
			getchar(); 
		}
   		fclose(fp);
	}	
    return 0; 
}
