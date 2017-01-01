#include <stdio.h>

float matrix(float *a[3], int n); 

void main()
{	
	int i,j; 
	float a[3][3],*p[3];

  	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
			scanf("%f",&a[i][j]);
		}
	for(i = 0; i < 3; i++){
		p[i] = a[i];
	}	
 	printf("sum=%0.2f \n", matrix(p,3));
}

float matrix(float *a[3], int n){
	float sum = 0.0;
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == j || i + j == n - 1){
				sum += a[i][j];
			}
		}
	}
	return sum;
}

