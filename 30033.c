#include <stdio.h>


int main(void)
{
    int sum, x;
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
          scanf("%d",&x);
          sum = 0;
		for(;x>0;){
			
			if(x%2==0){
			sum +=x;
			}
			scanf("%d",&x);
		}
        printf("The sum of the even numbers is %d.\n", sum);
    }
}
