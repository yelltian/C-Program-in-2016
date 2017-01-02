#include <stdio.h>

void main()
{
    char s[80];
    int looptimes, ri;
    int mirror(char *p);
 
    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri <= looptimes; ri++){
        gets(s);
        if(mirror(s) != 0)
      	    printf("YES\n");
        else
            printf("NO\n");
    }
}

int mirror(char *p){
	int i = 0, count = 0;
	while(p[i++] != 0){
		count++;
	}
	for(i = 0; i <= count/2; i++){
		if(p[i] != p[count-1-i]){
			return 0;
		}
	}
	return 1;
}


