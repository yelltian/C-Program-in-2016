#include <stdio.h>

int main(void)
{
    int looptimes, ri;
    double x, y; 

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
    	scanf("%lf",&x);
		if(x==10)y=1/x;
		else y=x;
        printf("f(%.1f) = %.1f\n", x, y);	
    }
}
