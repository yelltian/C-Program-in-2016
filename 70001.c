#include <stdio.h> 

int main(void)
{
    int i, j, temp;
    char str[80];		

    i = 0;
    while((str[i] = getchar( )) != '\n') 
        i++; 
    str[i] = 0;
	for(j = 0; j <= i/2; j++){
		temp = str[j];
		str[j] = str[i-1-j];
		str[i-1-j] = temp; 
	}
	       
    for(i = 0; str[i] != 0; i++) 
        putchar(str[i]);
}

