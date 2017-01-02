#include<stdio.h>

#include<string.h>

void main()
{
    char s[80], t[80];
    int m;
    int looptimes, ri;
    void strmcpy(char *s,char *t, int m);

    scanf("%d", &looptimes);
    getchar();
    for(ri = 1; ri <= looptimes; ri++){
        gets(t);
        scanf("%d", &m);
        getchar();
        if(strlen(t) < m)
            printf("error input");
        else{
			strmcpy( s, t, m);
            puts(s);
        }
    }
}

void strmcpy(char *s,char *t, int m){
	int i, j = 0;
	for(i = m-1; t[i] != 0; i++){
		s[j++] = t[i];
	}
	s[j] = 0;
}
