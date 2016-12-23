#include <stdio.h>
int main(void)
{
    int decimal, octal, hexadecimal;
    int looptimes, ri;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%o%x", &decimal, &octal, &hexadecimal);
        
		printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n",decimal,decimal,decimal);
		printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n",octal,octal,octal);
		printf("The decimal is %d, the octal is %o, the hexadecimal is %x.\n",hexadecimal,hexadecimal,hexadecimal);
    }
}
