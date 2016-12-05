#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,n;
    int looptimes, ri;
    double sum;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
		sum=0;
		
		for(i=1;i<=n;i++){
			sum+=pow(2.0,i);
		}
        printf("sum = %.0f\n", sum);
    }
}
