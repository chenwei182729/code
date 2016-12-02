#include <stdio.h> 
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int sum[5],flag = 1,sumCnt[5],val,N,i;
	flag = 1;
	
	while(~scanf("%d",&N)){
		memset(sum,0,sizeof(sum));
		memset(sumCnt,0,sizeof(sumCnt));
		for(i=0;i<N;i++){
			scanf("%d",&val);
			switch(val % 5){
				case 0:
					if(val % 2 == 0){
						sum[0]+=val;
						sumCnt[0]++;
					}
						
					break;
				case 1:
					sum[1]+=flag*val;
					sumCnt[1]++;
					flag = -1 * flag;
					break;
				case 2:
					sum[2]++;
					sumCnt[2]++;
					break;
				case 3:
					sum[3]+=val;
					sumCnt[3]++;
					break;
				case 4:
					sum[4]=max(sum[4],val);
					sumCnt[4]++;
					break;
			}
		}
		for(i=0;i<3;i++)
		{
			if(sumCnt[i] > 0)
				printf("%d ",sum[i]);
			else printf("N ");
		}
		if(sumCnt[3] > 0)	printf("%.1lf ",(1.0 * sum[3] / sumCnt[3]));
		else printf("N ");
		if(sumCnt[4] > 0) printf("%d\n",sum[4]);
		else printf("N\n");
	}
	
	return 0;
} 
