#include "stdio.h"
#include "math.h"

int Is_Prime(int n);

int main(void)
{
	int count, i, j, k, m, n;
    int ri,looptimes;
  
   	scanf("%d",&looptimes);
   	for(ri = 1; ri <= looptimes;ri++){
   		if(ri!=1)printf("\n");
        scanf("%d",&m);
        scanf("%d",&n);
        count=0;
        
        printf("primes:\n");
		for(i=m;i<=n;i++){
			if(Is_Prime(i)){
				printf("%d ",i);
				count++;
				if(count%6==0)printf("\n");
			}
		}	
    }
}

int Is_Prime(int n){
	int i;
	int k=0;
	if(n==1) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) k++;
	}
	if(k==0) return 1;
	else return 0;
}
