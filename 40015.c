#include <stdio.h>

int main(void)
{
    int i,j, min, n, x;
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
          scanf("%d",&n);
          scanf("%d",&x);
          min=x;
          for(j=2;j<=n;j++){
          	scanf("%d",&x);
          	if(min>x)min=x;
          }
         printf("min = %d\n", min);
   }
}

