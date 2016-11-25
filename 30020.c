#include <stdio.h>

int main(void)
{   
    int i, m, sum;
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        sum = 0;
		while(m<=100){
			sum+=m;
			m++;
		}
        printf("sum = %d\n", sum);
    }    	 
}


