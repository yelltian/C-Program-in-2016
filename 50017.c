#include "stdio.h"

int main(void)
{
    int i, digit, m, n, number, sum;
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
		
		for(i=m;i<=n;i++){
		sum=0;
		number=i;
			while(i>0){
				digit=i%10;
				i/=10;
				sum+=digit*digit*digit;
			}
			i=number;
			if(sum==number)printf("%d\n", i);
		}
    }
}

