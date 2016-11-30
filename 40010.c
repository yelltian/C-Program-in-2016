#include <stdio.h>

int main(void)
{    
    int a, b, maximum;
    int looptimes, ri;
    int max(int a, int b);
   
    scanf("%d",&looptimes);

    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&a);
        scanf("%d",&b);
        maximum = max(a,b);
        printf("max(%d,%d) = %d\n", a, b, maximum);
    }
}

int max(int a,int b){
	if(a>=b) return a;
	else  return b;
}

