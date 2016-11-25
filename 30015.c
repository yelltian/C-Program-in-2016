#include <stdio.h> 


int main(void)
{
    int looptimes, ri;
    double x, y; 

   scanf("%d",&looptimes);
    for(ri = 1;ri <= looptimes; ri++){  
         scanf("%lf",&x);
		if(x<0)y=0;
		else if(x>=0&&x<=15)y= 4*x/3	;
		else y=  2.5*x-10.5;
        printf("f(%.2f) = %.2f\n", x, y); 
    }
}
