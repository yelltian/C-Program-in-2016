#include <stdio.h>

int main(void)
{
    int fail, num;               	
    int looptimes, ri;
    double grade, total; 
		
	scanf("%d",&looptimes);
	
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf",&grade);
        num = 0;
		total = 0;
		fail = 0;
		while(grade>=0){
			num++;
			total = total + grade;
			if(grade<60){
				fail++;
			}
			scanf("%lf",&grade);
		}
			if(num > 0)
            printf("Grade average is %.2f,the number of fail is %d\n", total/num, fail);
    }
}
