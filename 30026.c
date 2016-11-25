#include <stdio.h>

int main(void)
{   
    int looptimes, ri;
    double cost, e;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf",&e);
       if(e<=50)cost = 0.53*e;
       else cost = 50*0.53+(e-50)*(0.53+0.05);
        printf("cost = %.2f\n", cost);
    } 
}
