#include <stdio.h>
#include <string.h>

char *str_cat(char *s,char *t);

void main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	puts(str_cat(s,t));
}

char *str_cat(char *s,char *t){
	char *begin = s;
	while(*s != 0){
		s++;
	}
	for(; *t != 0; t++){   
		*(s++) = *t;
	}
	*s = 0;
	return begin;
}

