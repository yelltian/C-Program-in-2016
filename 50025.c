#include <stdio.h>
int main(void)
{
    int factor, m, n, number, sum;
    int looptimes, ri;
		
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n"); 
        
        for(number=m;number<=n;number++) {
        	sum=0;
        	for(factor=1;factor<number;factor++) {
        		if(number%factor==0) {
        			sum += factor;
        		}	
        	}
			if(sum==number){
        		printf("%d = 1", number);
        		for(factor=2;factor<=number;factor++) {
        			if(factor==number) {
    					printf("\n");
    				}
      				else if(number%factor==0){
 					printf(" + %d", factor);
       				}
       			}
        	}	
        }
    }
}
