#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
	    n++;
        scanf("%s", str);
    }
    for(j = 1; j < n; j++){
    	for(i = 0; i < n-j; i++){
			if(strcmp(color[i] , color[i+1]) > 0){
				temp = color[i];
				color[i] = color[i+1];
				color[i+1] = temp;
			}
		}
    }

    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
    printf("\n");
}


