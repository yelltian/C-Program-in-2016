#include <stdio.h>

int main(void)
{
    int count, in;
    int looptimes, ri;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
     	scanf("%d", &in);
     	count=0;
     	do {
     		in/=10;
     		count++;
     	}
		while(in!=0);
     	printf("count = %d\n", count);
   }
}
