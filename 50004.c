#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    double sum;
	sum=0;
	
	for(i=100;i<=1000;i++){
		sum+=pow(i,0.5);
	}
    printf("sum = %.2f\n", sum);
}

