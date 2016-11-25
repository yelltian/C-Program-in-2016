#include <stdio.h>

int main(void)
{    
    int n;
    double factorial;
    double fact(int n);
   
    scanf("%d",&n);

	factorial=fact(n);
    printf("%d! = %f\n", n, factorial);
}
double fact(int n){
	if(n==1) return(1);
	else return(n*fact(n-1));
}
