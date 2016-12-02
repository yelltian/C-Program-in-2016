#include <stdio.h>

int main(void)
{
    long in, res;
    int ri, looptimes;
    long reverse(long number); 

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%ld",&in);
		res=reverse(in);
        printf("%ld\n", res);
    }
}

long reverse(long number){
	int res=0;
	if(number>-10&&number<10)return number;
	while(number>=10||number<=-10){
		res=number%10+res*10;
		number/=10;
	}
	return res*10+number;
}
