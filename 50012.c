#include <stdio.h>
#include <math.h>

int main(void)
{
    int denominator, flag;
    int looptimes, ri;
    double eps, item, sum;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%le", &eps);
		flag=1;
		denominator=1;
		item=1.0;
		sum=0;
		
		while(fabs(item)>=eps){
			item=flag/(3.0*denominator-2.0);
			flag=-flag;
			denominator++;
			sum+=item;
		}
      	printf("sum = %.6f\n", sum);
   }
}

