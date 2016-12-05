#include "stdio.h"
#include "math.h"

double funcos(double e, double x);
double fact(int n);

int main(void)
{
    int looptimes, ri;
    double e, sum, x; 
    
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
       scanf("%lf",&e);
       scanf("%lf",&x);
       sum=funcos(e,x);
       
    	printf("sum = %f\n", sum);
    }
}

double funcos(double e, double x){
	int n=0;
	double sum=0,item=1.0;
	int sign;
	sign = 1;
	
	while(fabs(item)>=e){
		 item=sign*pow(x,n)/fact(n);
		 sum+=item;
		 sign = -sign;
		 n+=2;
	}
	return sum;	
}

double fact(int n){
	if(n==1||n==0) return 1;
	else return n*fact(n-1);
}
