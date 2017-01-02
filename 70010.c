#include<stdio.h>

void main()
{
    char c;
    char str[80];
    int looptimes, ri;
    void delchar(char *str, char c);

    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri <= looptimes; ri++){
        gets(str);
        scanf("%c", &c);
        getchar();
		delchar(str,c);
        printf("result: ");
        puts(str);
    }
}

void delchar(char *str, char c){
	int i,j = 0;
	for(i = 0, j = 0; str[i] != 0; i++){
		if(str[i] != c){
			str[j++] = str[i];
		}
	}
	str[j] = 0;
}


