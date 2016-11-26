#include "stdio.h"
#include "math.h"

int main(void)
{
    int i, m, n;
    int looptimes, ri;
    int is(int number); 
  
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
         scanf("%d",&m);
         scanf("%d",&n);
        printf("result:\n");
		for(i=m;i<=n;i++){
			if(is(i))printf("%d\n", i);
		}
    }
}

int is(int number){
	int digit1,digit2,digit3,digit4;
	digit4=number%10;
	digit3=number/10%10;
	digit2=number/100%10;
	digit1=number/1000;
	if(pow(digit1,3)+pow(digit2,3)+pow(digit3,3)+pow(digit4,3)==number) return 1;
	else return 0;
}

