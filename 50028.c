#include "stdio.h"

int main(void)
{
    int count, digit, in; 
    int looptimes, ri;
    int countdigit(int number, int digit);

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%d", &in, &digit);
		count = countdigit( in, digit);
        printf("Number %d of digit %d: %d\n", in, digit, count);
    }
}

int countdigit(int number,int digit){
	int count,temp;
	count = 0;
	if(number<0) number=-number;
	while(number){
		temp = number%10;
		number /= 10;
		if(temp==digit) count++;
	}
	return count;	
}


