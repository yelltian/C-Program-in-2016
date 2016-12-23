#include <stdio.h>
#include <math.h>

int main(void)
{
    int flag, i, j, k, m, n;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	scanf("%d",&m);
		k=0;
    	for(j=1;j<m;j++){
    		if(m%j==0){
    			k++;
    		}
    	}		
			if(k==1){
				printf("%d is a prime\n", m);
			}
			else printf("%d is not a prime\n", m);
   	}    
}
