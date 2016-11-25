#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3, digit4, newnum, number;

    scanf("%d",&number);
	
	digit3=(number/1000+9)%10;
	digit4=(number%1000/100+9)%10;
	digit1=(number%100/10+9)%10;
	digit2=(number%10+9)%10;
	
	newnum = digit1*1000+digit2*100+digit3*10+digit4;
    printf("The encrypted number is %d\n", newnum);
}
