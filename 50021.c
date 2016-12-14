#include <stdio.h>

int main(void)
{
    char sign;
    int x, y; 
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1;ri <= looptimes; ri++){
        scanf("%d%c%d", &x, &sign, &y);
		
		if(sign == '*')printf("%d * %d = %d\n", x, y, x * y);
		else if(sign == '/')printf("%d / %d = %d\n", x, y, x / y);
		else if(sign == '%')printf("%d Mod %d = %d\n",x, y, x % y);
		else printf("Invalid operator\n");


    }
}

