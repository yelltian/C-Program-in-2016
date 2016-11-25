#include <stdio.h>

int main(void)
{
    int time1, time2, hour, minutes;
    
    scanf("%d",&time1);
    scanf("%d",&time2);
   
	hour=(time2-time1)/100;
	minutes=(time2-time1)-hour*100;
	if(minutes>=60){
		minutes-=40;
	}
   printf("The train journey time is %d hours %d minutes.\n", hour, minutes);
}
