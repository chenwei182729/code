#include <iostream>
using namespace std;
#include <windows.h>
MEMORYSTATUS mem;
void CoutMemStatus()
{
int mb=1024*1024;
GlobalMemoryStatus(&mem);
cout<<mem.dwTotalPhys/mb<<" "<<mem.dwAvailPhys/mb<<endl
<<mem.dwTotalPageFile/mb<<" "<<mem.dwAvailPageFile/mb<<endl
<<mem.dwTotalVirtual/mb<<" "<<mem.dwAvailVirtual/mb<<endl;
}
int main(int argc,char *argv[])
{ 
CoutMemStatus();
cout<<"##########����1GB##################"<<endl;
LPVOID lpbase=VirtualAlloc(NULL,1024*1024*1024,MEM_RESERVE,PAGE_READWRITE);
if(lpbase==NULL)
{
cout<<"can't alloc Virtual Memory!"<<endl;
}
CoutMemStatus();
/*1��ֻ���û�����ռ������1GB
 2��int *p=(int *)lpbase; p[0]=1; this is error*/
cout<<"###########����1GB######################"<<endl;
VirtualAlloc(lpbase,1024*1024*1024,MEM_COMMIT,PAGE_READWRITE);
CoutMemStatus();
/*
1:�������ڴ�Ҳ������1GB
2�������ڴ���΢С�ı仯 
*/
cout<<"############��ϵͳ���������ڴ�##########"<<endl;
int *p=(int *)lpbase;
for(int i=0;i<1024*1024*256;i++)
{
p[i]=1;
}
CoutMemStatus();
/*1:�����ڴ����Լ��1GB
 2:ֻ���òŻ�����ڴ�*/ 
cout<<"###############���512M�ڴ�##################"<<endl;
VirtualAlloc(lpbase,1024*1024*512,MEM_RESET,PAGE_READWRITE);
char *pp=(char *)lpbase;
pp[1024*1024*1000]='a';
pp[0]='a';
CoutMemStatus();
//�����������ڴ��ǻ�����ʹ�õ�
cout<<"##########�ͷ�512M�����ڴ�###############"<<endl;
VirtualFree(lpbase,1024*1024*512,MEM_DECOMMIT);
CoutMemStatus();
//�ͷ����������ڴ�
cout<<"#########�ͷ����е������ڴ�#############"<<endl;
VirtualFree(lpbase,0,MEM_RELEASE);
CoutMemStatus();
return 0;
}
