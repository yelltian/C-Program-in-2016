#include <stdio.h>

double Mean(double *array,int n);

int main(void)
{
    int  i, n;
    double array[100],average;
    
    scanf("%d",&n);	
    for(i = 0; i < n; i++)
    	scanf("%lf",&array[i]);
    average = Mean(array,n);
    printf("average = %.1f\n", average);
    
    return 0;
}

double Mean(double *array,int n){
	int i;
	double sum = 0;
	for(i = 0; i < n; i++){
		sum += array[i];
	}
	return sum/n;
}
