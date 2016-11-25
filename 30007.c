#include <stdio.h>

int main(void)
{
    int n=152, digit1, digit2, digit3;  

	digit3= n/100;
	digit2= n/10%10;
	digit1= n%10;
    printf("整数%d的个位数字是%d, 十位数字是%d, 百位数字是%d", n, digit1, digit2, digit3); 
}

