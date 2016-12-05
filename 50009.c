#include <stdio.h>

int main(void)
{
    int i,n;
    int looptimes, ri;
    double sum;
    double fact(int n);

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
		sum=0;
		
		for(i=0;i<=n;i++){
			sum+=fact(i);
		}
        printf("sum = %.0f\n", sum);
    }
}

double fact(int n){
	if(n==1||n==0) return 1.0;
	else return n*fact(n-1);
}

