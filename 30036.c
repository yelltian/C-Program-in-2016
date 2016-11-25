#include <stdio.h>

int main(void)
{
    char ch;
    int looptimes, ri;

    scanf("%d",&looptimes);
    
    for(ri = 1; ri <= looptimes; ri++){
    	scanf("%c",&ch);
    	if(ch=='\n')continue; 
    	looptimes+=1;
    	switch(ch){
			case 'A':printf("90-100\n"); break;
			case 'B':printf("80-89\n"); break;
			case 'C':printf("70-79\n"); break;
			case 'D':printf("60-69\n"); break;
			case 'E':printf("0-59\n"); break;
			default :printf("Invalid input\n");
		}  	
    }
}
