#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int looptimes, ri;
    double item, s, x; 
    double fact(int n);

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf", &x);
		
		item = x;
		i = 1;
		s = 0;
		while(item>=0.00001){
			item = pow(x,i)/fact(i);
			s+=item;
			i++;
		}
      	printf("s = %.2f\n", s);
    }
}

double fact(int n){
	if(n==0) return 1;
	else return n*fact(n-1);
}


