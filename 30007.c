#include <stdio.h>

int main(void)
{
    int n=152, digit1, digit2, digit3;  

	digit3= n/100;
	digit2= n/10%10;
	digit1= n%10;
    printf("����%d�ĸ�λ������%d, ʮλ������%d, ��λ������%d", n, digit1, digit2, digit3); 
}

