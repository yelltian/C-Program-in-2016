#include <stdio.h>
#include <math.h>

int fn(int a, int n);

int main(void)
{
    int a, i, n, sn, tn;
    int ri, looptimes;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&a);
        scanf("%d",&n);
        sn=0;
		     
        for(i=1;i<=n;i++){
    		sn+=fn(a ,i);
    	}    
        printf("sum = %d\n", sn);
   }
}

int fn(int a, int n){
	if(n==1) return a;
	else return a*pow(10,(n-1))+fn(a,n-1);
}

