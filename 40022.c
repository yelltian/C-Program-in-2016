#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    int i, n, x1, x2, x;	

    scanf("%d",&n);
    x1 = 1; 	        	  
    x2 = 1;
    printf ("%d %d ", x1, x2); 	 
	for(i=3;i<=n;i++){
		x=x1+x2;
		x1=x2;
		x2=x;
		printf("%d ",x);
	}
	
}
