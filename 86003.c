#include <stdio.h>

char myMCode[27][5];

int main()
{ 
    int i;
    char input[100];
     
    strcpy(myMCode[0], "._");
    strcpy(myMCode[1], "_...");
    strcpy(myMCode[2], "_._.");
    strcpy(myMCode[3], "_..");
    strcpy(myMCode[4], ".");
    strcpy(myMCode[5], ".._.");
    strcpy(myMCode[6], "__.");
    strcpy(myMCode[7], "....");
    strcpy(myMCode[8], "..");
    strcpy(myMCode[9], ".___");
    strcpy(myMCode[10], "_._");  
    strcpy(myMCode[11], "._..");
    strcpy(myMCode[12], "__");
    strcpy(myMCode[13], "_.");
    strcpy(myMCode[14], "___");
    strcpy(myMCode[15], ".__.");
    strcpy(myMCode[16], "__._");
    strcpy(myMCode[17], "._.");
    strcpy(myMCode[18], "...");
    strcpy(myMCode[19], "_");
    strcpy(myMCode[20], ".._");
    strcpy(myMCode[21], "..._");
    strcpy(myMCode[22], ".__");
    strcpy(myMCode[23], "_.._");
    strcpy(myMCode[24], "_.__");
    strcpy(myMCode[25], "__.."); 
    strcpy(myMCode[26], "\n");
    
    gets(input);
    for(i = 0; i < strlen(input); i++){
        if(input[i] >= 'A'&&input[i] <= 'Z'){
        	input[i] -= 'A' - 'a'; 
        }
        if(input[i] == ' '){
        	printf("\n");
        }
        else printf("%s ", myMCode[input[i]-'a']);    
    } 
    printf("\n");
    return 0;
}
