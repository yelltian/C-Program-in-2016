#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    int digit, x; 
    int looptimes, ri;

	scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&x);
		if(x==0) printf("0");
		while(x){
			digit=abs(x)%10;
			x/=10;
			printf("%d ",digit);
		}
    	printf("\n");
    }
}

