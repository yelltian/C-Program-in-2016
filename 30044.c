#include <stdio.h>

int main(void)
{
    int looptimes, ri;
    int year;
    
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&year);
		if(year%4==0&&year%100!=0||year%400==0){
			printf("%d is a leap year.\n",year);
		}
		else printf("%d is not a leap year.\n",year); 
    }
}
