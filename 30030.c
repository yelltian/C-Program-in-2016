#include <stdio.h>

int main(void)
{
    int count, i, n;
    double average, grade, total;
   
    scanf("%d",&n);	
    total = 0;
    count = 0;
	for(i=1;i<=n;i++){
		scanf("%lf",&grade);
		total = total+grade;
		if (grade>=60){
			count++;
		}
	}
	average = total/n;
    printf("average = %.1f\n", average);
    printf("count = %d\n", count);
}

