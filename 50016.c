#include "stdio.h"

int main(void)
{
    int i, j, n;
    int looptimes, ri;
    double e, product;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
		e=1;
		product=1.0;
		for(j=1;j<=n;j++){
			product/=j;
			e+=product;
		}
    	printf("e = %0.4f\n", e);
  }
}
