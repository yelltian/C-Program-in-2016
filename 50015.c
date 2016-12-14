#include <stdio.h>

int main(void)
{
    int i, n;
    int looptimes, ri;
    double denominator, numerator, sum, temp;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
		sum=0;
		denominator=1;
		numerator=2;
		
		for(i=1;i<=n;i++){
			sum+=numerator/denominator;
			temp=denominator;
			denominator=numerator;
			numerator+=temp;
		}
     	printf("sum = %.2f\n",sum);
   }
}

