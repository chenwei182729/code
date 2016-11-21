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
cout<<"##########保留1GB##################"<<endl;
LPVOID lpbase=VirtualAlloc(NULL,1024*1024*1024,MEM_RESERVE,PAGE_READWRITE);
if(lpbase==NULL)
{
cout<<"can't alloc Virtual Memory!"<<endl;
}
CoutMemStatus();
/*1：只有用户虚拟空间减少了1GB
 2：int *p=(int *)lpbase; p[0]=1; this is error*/
cout<<"###########分配1GB######################"<<endl;
VirtualAlloc(lpbase,1024*1024*1024,MEM_COMMIT,PAGE_READWRITE);
CoutMemStatus();
/*
1:总虚拟内存也减少了1GB
2：物理内存有微小的变化 
*/
cout<<"############逼系统分配物理内存##########"<<endl;
int *p=(int *)lpbase;
for(int i=0;i<1024*1024*256;i++)
{
p[i]=1;
}
CoutMemStatus();
/*1:物理内存减少约了1GB
 2:只有用才会分配内存*/ 
cout<<"###############清除512M内存##################"<<endl;
VirtualAlloc(lpbase,1024*1024*512,MEM_RESET,PAGE_READWRITE);
char *pp=(char *)lpbase;
pp[1024*1024*1000]='a';
pp[0]='a';
CoutMemStatus();
//清除后的虚拟内存是还可以使用的
cout<<"##########释放512M虚拟内存###############"<<endl;
VirtualFree(lpbase,1024*1024*512,MEM_DECOMMIT);
CoutMemStatus();
//释放所有虚拟内存
cout<<"#########释放所有的虚拟内存#############"<<endl;
VirtualFree(lpbase,0,MEM_RELEASE);
CoutMemStatus();
return 0;
}
