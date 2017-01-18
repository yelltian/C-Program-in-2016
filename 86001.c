#include "stdio.h"
#include "math.h"

int main(void)
{
    int looptimes, ri, i, temp;
    double Score[7]; 
    double  average;
    
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
    	for(i = 0; i < 7; i++){
    		scanf("%lf",&Score[i]);
    	}
        for(i = 0; i < 6; i++){
        	if(Score[i] > Score[i+1]){
        		temp = Score[i];
        		Score[i] = Score[i+1];
        		Score[i+1] = temp;
        	}
        }
        Score[6] = 0;
        for(i = 0; i < 5; i++){
        	if(Score[i] < Score[i+1]){
        		temp = Score[i];
        		Score[i] = Score[i+1];
        		Score[i+1] = temp;
        	}
        }
        Score[5] = 0;
        average = (Score[0] + Score[1] + Score[2] + Score[3] + Score[4])/5.0;
        printf("average = %.2f\n", average);
    }
    
    return 0;
}



