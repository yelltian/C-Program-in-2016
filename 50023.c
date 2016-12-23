#include <stdio.h>

int main(void)
{
    int x, sum;
    int looptimes, ri;


    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &x);
		sum = 0;
		while(x>0){
			if(x%2!=0){
				sum+=x;
			}
			scanf("%d", &x);
		}
      	printf("The sum of the odd numbers is %d.\n", sum);
   }
}

