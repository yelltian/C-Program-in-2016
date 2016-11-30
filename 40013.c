#include "stdio.h"
#include <math.h>

int main(void)
{
    int i, m, n;
    int looptimes, ri;
    int factorsum(int number); 
  
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        scanf("%d",&n);
       for(i=m;i<=n;i++){
    	if(factorsum(i)==i) printf("%d ",i);
       }   
      printf("\n");
    }
}

int factorsum(int number){
	int i,j,sum;
	sum=0;
	if(number==1) return 0;
	else for(i=1;i<=sqrt(number);i++){
		if(number%i==0){
			j=number/i;
			sum+=j+i;
		}
	}
		sum-=number;
	 	return sum;
}

