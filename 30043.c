#include "stdio.h"
#include "math.h"

int Is_Prime(int n);
int main(void)
{
    int i, k, m;
    int looptimes, ri;
    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
		scanf("%d",&m);
		printf("%d = ", m);	
		for(i=2;i<=m;){
			if(Is_Prime(i)&&m%i==0){
				if(m!=i)
					printf("%d*", i);
				else printf("%d\n",i);
				m=m/i;
			}
			else i++;
		}	
	}	
}

int Is_Prime(int n)
{
	int m,k;
	k=0;
	for(m=2;m<=n/2;m++)
	{
		if(n%m==0) 
		k++;
	}
		if(k==0) return 1;
		else return 0;
}


