#include <stdio.h>
#include <math.h>

int main(void)
{
    int looptimes, ri;
    double x, y;  

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
	scanf("%lf",&x);
	if(x>=0)y=sqrt(x);
	else y=pow(x,5) + 2*x + 1/x;
        printf("f(%.2f) = %.2f\n", x, y);	
    }
}
