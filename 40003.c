#include <stdio.h>

int even(int n);

int main(void)
{
    int n, sum;
    int ri, looptimes;
	
	scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){	
        scanf("%d",&n);
		sum=0;	
		while(n>0){
			if(even(n)==0){			
				sum+=n;
			}
			scanf("%d",&n);
		}
		while(n<=0)break;
    	printf("The sum of the odd numbers is %d.\n", sum);
    }
}

int even(int n){
	if(n%2==0) return(1);
	else return(0);
}
