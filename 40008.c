#include <stdio.h>

double fact(int n);

int main(void)
{    
    int i, m;
    double sum; 

    scanf("%d",&m);
    sum=0;
	for(i=1;i<=m;i++){
		sum+=fact(i);
	}
    printf("1!+2!+...+%d! = %f\n", m, sum); 
}

double fact(int n){
	if(n==1) return 1;
	else return n*fact(n-1);
}
