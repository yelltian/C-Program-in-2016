#include "stdio.h"

double fact(int n);

int main(void)
{
    int m, n;
    int looptimes, ri;
    double s;

    scanf("%d",&looptimes);;
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        scanf("%d",&n);
		
		s = fact(n)/(fact(m)*fact(n-m));
		
        printf("result = %.0f\n", s);
    }
}

double fact(int n){
	if(n==1)return (1);
	else return(n*fact(n-1));
}
