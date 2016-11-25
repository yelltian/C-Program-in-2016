#include "stdio.h"
#include "math.h"

int Is_Prime(int a);

int main(void)
{
    int count, i, j, k, looptimes, number;
    int m; 
	int Is_Prime(int a);
	
    scanf("%d",&looptimes);
    for(i=1;i<=looptimes;i++){
      if(i!=1)printf("\n");
      scanf("%d",&m);
      count=0;
      if(m >= 6){
    	for(j=3;j<=m/2;j=j+2){
    		if(Is_Prime(j)){
    			number = m - j;
    			if(Is_Prime(number)){
    				count++;
    				printf("%d=%d+%d ", m, j, number);
    				if(count%5==0)printf("\n");
    				}
    			}
    		}
    	}
     }
}

int Is_Prime(int a){
	int i,count=0;
	for(i=2;i<=a/2;i++){
		if(a%i==0)count++;
	}
	if(count==0)return 1;
	else return 0;
}
