#include "stdio.h"
#include "string.h"

#define MAXLEN 80

int main(void)
{
    char ch;
    char str[MAXLEN];
    int i;
    int looptimes, ri;

    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri <= looptimes; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i] = ch;
            i++;
		}
        str[i] = 0;
		
		for(;i > 0;i--){
			ch = str[i-1];
			if(ch >= 'A'&&ch <= 'Z'){
				str[i-1] = 155 - ch;
			}	
		}
      	printf("After replaced: ");
        for(i = 0; str[i] != 0; i++) 
            putchar(str[i]);
        putchar('\n');
   }
}
