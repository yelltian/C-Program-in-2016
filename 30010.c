#include <stdio.h>

int main(void)
{
    int looptimes, ri;
    double x, y;  

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
       scanf("%lf",&x);
          if(x==0)y=0;
          else y=1/x;
        printf("f(%.2f) = %.1f\n", x, y);	
     }
}
