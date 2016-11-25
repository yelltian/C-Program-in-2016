#include <stdio.h>

int main(void)
{    
    int lower, upper;
    int looptimes, ri;
    double celsius, fahr;  

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&lower); 
        scanf("%d",&upper);
        printf("fahr  celsius\n");
        for(fahr = lower;fahr<=upper;fahr = fahr + 2)
        {
        celsius = 5 * (fahr - 32) / 9;
        
     printf("%3.0f%6.1f\n", fahr, celsius);}
    }
}
