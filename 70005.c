#include "stdio.h"
#include "string.h"

#define MAXLEN 80

int main(void)
{  
    char ch;
    char str[MAXLEN], num[MAXLEN];
    int i, k;
    int looptimes, ri;
    long number;
	
    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri <= looptimes; ri++){
        i = 0;
        while((ch = getchar()) != '\n'){
            str[i]=ch;
            i++;
        }
        str[i] = 0;
        number = 0; 
		for(i = 0 ; str[i] != '\0'; i++){ 
			if(str[i] >= '0'&&str[i] <= '9') {
				number = str[i] - '0' + number * 16;	
			}
    		else if(str[i] >= 'A'&&str[i] <= 'F'){
    			number = str[i] - 'A' + 10 + number * 16;
    		}
    		else if(str[i] >= 'a'&&str[i] <= 'f'){
    			number = str[i] - 'a' + 10 + number * 16;	
    		}
		}
		
      	printf("Dec = %ld\n",number);
    }
}
