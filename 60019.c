#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int blank, digit, letter, other;
    int ri, looptimes;

    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri<=looptimes; ri++){
    	letter = blank = digit = other = 0;
    	c = getchar();
        while(c != '\n'){	 
			if(isalpha(c))
				letter++;
			else if(isdigit(c))
				digit++;
			else if(c==' ')
				blank++;
			else other++;
			c = getchar();
		}
        	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);	
    }
}

