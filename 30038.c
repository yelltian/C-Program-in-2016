#include "stdio.h"

int main(void)
{
    int i, m, n;
    int looptimes, ri;
    double fm, fn;
	double fact(int n);
	double fact(int m);
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        scanf("%d",&n);
		fm=fact(m);
		fn=fact(n);
/*---------*/
        printf("%d! + %d! = %.0f\n", m, n, fm+fn); 
    }
}
double fact(int a){
	if(a==1)return(1);
	else return(a*fact(a-1));
}

