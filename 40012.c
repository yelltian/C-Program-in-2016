#include "stdio.h"
#include "math.h"

int main(void)
{
   int i, m, n;
   int looptimes, ri;
   long f;
   long fib(int n);

   scanf("%d",&looptimes);
   for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        scanf("%d",&n);
		for(i=1;i<=n;i++){
			f = fib(i);
			if(f>=m&&f<=n)
			printf("%ld ",f);
			if(f>n) break;
		}
        printf("\n");
    }
}

long fib(int n){
	if(n==1||n==2) return 1;
	else return fib(n-1)+fib(n-2);
}

