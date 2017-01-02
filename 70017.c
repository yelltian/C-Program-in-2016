#include <stdio.h>
#include <string.h>

int max_len(char *s[],int n);
void main()
{
	int i,n;
	char s[10][80],*p[10];

	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%s",s[i]);
		p[i] = s[i];
	}
	printf("length=%d\n",max_len(p,n));
}

int max_len(char *s[ ],  int n){
	int i, longest;
	longest = strlen(s[0]);
	for(i = 0; i < n; i++){
		if(strlen(s[i]) > longest){
			longest = strlen(s[i]);
		}
	}
	return longest;
}

