#include <stdio.h>
#include <math.h>

int main(void)
{
    int looptimes, ri;
    double a, b, c, d;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf%lf%lf", &a, &b, &c);
        d=b*b-4.0*a*c;
        
        if(a==0&&b==0&&c==0) printf("参数都为零，方程无意义!\n");
		else if(a==0&&b==0&&c!=0) printf("a和b为0，c不为0，方程不成立\n");
		else if(a==0&&b!=0&&c!=0) printf("x = %0.2f\n", -c/b);
		else if(a!=0&&d>=0){
				printf("x1 = %0.2f\n", (-b+sqrt(d))/(2*a));
				printf("x2 = %0.2f\n", (-b-sqrt(d))/(2*a));
			} 
		else if(a!=0&&d<0){
			printf("x1 = %0.2f+%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
			printf("x2 = %0.2f-%0.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
		}
	
    }     
} 
