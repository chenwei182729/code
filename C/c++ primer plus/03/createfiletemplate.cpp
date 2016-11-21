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
	FILE *fpSrc, *fpDest; //定义两个指向文件的指针
	fpSrc = fopen(srcname, "rb"); //以读取二进制的方式打开源文件
	if(fpSrc==NULL)
	{
		printf( "template file open failure."); //源文件不存在的时候提示错误
		return ;
	}
	fpDest = fopen(destname, "wb"); // //以写入二进制的方式打开目标文件
	if(fpDest==NULL)
	{
		printf("Destination file open failure.");
		return ;
	}
	while((c=fgetc(fpSrc))!=EOF)
	{ //从源文件中读取数据知道结尾
		fputc(c, fpDest);
	}
	fclose(fpSrc); //关闭文件指针，释放内存
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
