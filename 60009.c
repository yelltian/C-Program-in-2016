#include "stdio.h"
int main(void)
{
    int day, day_year, month, year;
    int looptimes, ri;

    int day_of_year(int year, int month, int day);

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%d%d", &year, &month, &day);
		day_year = day_of_year(year,month,day);
        printf("days of year: %d\n", day_year);
    }
}

int day_of_year(int year, int month, int day){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum = 0,i;
	if(year%4==0&&year%100!=0||year%400==0){
		a[1]=29;
	}
	for(i = 0; i < month-1; i++){
		sum += a[i];
	}
	sum += day;
	return sum;
}
