#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n;
    int looptimes, ri;
    double distance, height; 
	
    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf%d", &height, &n);
		
		distance = height;
		
		for(i=2;i<=n;i++){
			distance+=2*height/pow(2,i-1);	
		}
		height = height/pow(2,n);
      	printf("distance = %.1f, height = %.1f\n", distance, height);
   }
}
