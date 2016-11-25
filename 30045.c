#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int blank, digit, i, letter, other;

    blank = digit = letter = other = 0;     		
    for(i = 1; i <= 10; i++){
        c = getchar();
		if(c==' ')blank++;
		else if(isalpha(c))letter++;
		else if(isdigit(c))digit++;
		else other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}
