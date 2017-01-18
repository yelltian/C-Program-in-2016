#include <stdio.h>
#include <string.h>

int main(void)
{

    char sx[80], longest[80];
    int i, n;
    int looptimes, ri;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        scanf("%s", sx);
		strcpy(longest,sx);
		
		for(i = 1; i <= n; i++){
			scanf("%s", sx);
			if(strlen(sx) > strlen(longest)){
				strcpy(longest,sx);
			}
		}
		printf("The longest is: %s",longest);	
	}
}   

