#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

double fact(int n);
double multi(int j);	

int main(void)
{	
    int i; 
    int looptimes, ri;
    double eps, sum, item;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf",&eps);
		sum=0;
		i=0;
		item = 1;
		
		while(item>=eps){
			item=fact(i)/multi(2*i+1);
			sum+=item;
			i++;
		} 		 
		
        printf("PI = %0.5f\n", 2 * sum);
    }
}

double fact(int n){
	if(n==1||n==0)return 1;
	else return n*fact(n-1);
}

double multi(int j){
	int i;
	double multi;
	multi=1;
	for(i=1;i<=j;i+=2){
		multi*=i;
	}
	return multi;
}
