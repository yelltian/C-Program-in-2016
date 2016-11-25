#include "stdio.h"

int main(void)
{
    int i, j, n;
    int looptimes, ri; 
	
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&n);
			for(j=0;j<n;j++){
				for(i=1;i<2*(n-j)-1;i++){
					printf(" ");
				}
					printf("* ");
					for(i=1;i<=2*j;i++){
						printf("* ");
					}
					printf("\n");
			}
			for(j;j>=n;j++){
				for(i=1;i<=2*(j-n+1);i++){
					printf(" ");
				}
					for(i=1;i<=-2*(j-n+1)+2*n-1;i++){
						printf("* ");
					}
					printf("\n");
					if(j>2*n-1)break;
					
			}		
    }
}
