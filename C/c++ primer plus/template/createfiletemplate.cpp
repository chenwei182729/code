#include<stdio.h>
#include<windows.h> 
const int count = 8;//cont <=100
void create_demo_in() 
{ 
	int i = 1 ;
	char file_name[20]={ "01demo.in " };
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
}
void createfile(char srcname[],char destname[]) 
{
	int c;
	FILE *fpSrc, *fpDest; //��������ָ���ļ���ָ��
	fpSrc = fopen(srcname, "rb"); //�Զ�ȡ�����Ƶķ�ʽ��Դ�ļ�
	if(fpSrc==NULL)
	{
		printf( "template file open failure."); //Դ�ļ������ڵ�ʱ����ʾ����
		return ;
	}
	fpDest = fopen(destname, "wb"); // //��д������Ƶķ�ʽ��Ŀ���ļ�
	if(fpDest==NULL)
	{
		printf("Destination file open failure.");
		return ;
	}
	while((c=fgetc(fpSrc))!=EOF)
	{ //��Դ�ļ��ж�ȡ����֪����β
		fputc(c, fpDest);
	}
	fclose(fpSrc); //�ر��ļ�ָ�룬�ͷ��ڴ�
	fclose(fpDest);
}
int
main()
{
	char destname[20] = "01demo.cpp";
	char srcname[20] = "template.cpp";
	int i = 0 ;
	for(i = 1 ;i < count ;i++)
	{
		destname[0] = i/10 + '0';
		destname[1] = i%10 + '0'; 
		
		createfile(srcname,destname);
	}
	create_demo_in() ;
	return 0;
}
