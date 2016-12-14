#include <stdio.h>

int main(void)
{
    int count, in, sum;
    int looptimes, ri;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &in);
		count=0;
		sum=0;
		if(in==0)count++;
		while(in!=0){
			sum+=abs(in)%10;
			in=abs(in)/10;
			count++;
		}
   	printf("count = %d, sum = %d\n", count, sum);
   }
}

