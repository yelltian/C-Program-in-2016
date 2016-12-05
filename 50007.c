#include <stdio.h>

int main(void)
{
    int flag, i, n;
    int looptimes, ri;
    double item, sum;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
		sum=0;
		flag=1;
		
		for(i=1;i<=n;i++){
			sum+=flag*i/(2*i-1.0);
			flag=-flag;
		}
      	printf("sum = %.3f\n", sum);
    }
}
