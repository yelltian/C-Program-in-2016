#include <stdio.h>

int main(void)
{
    int looptimes, ri;
    int x, y;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&x);
        if(x>0)y=1;
        else if (x==0)y=0;
        else y=-1;
        printf("sign(%d) = %d\n", x, y);
    }
}

