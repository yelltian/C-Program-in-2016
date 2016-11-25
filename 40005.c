#include "stdio.h"
#include "math.h"

int main(void)
{
    int count, i, m, n, sum;
    int looptimes, ri;
    int prime(int m);

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&m);
        scanf("%d",&n);
		sum=0;
		count=0;
		for(i=m;i<n;i++){
			if(prime(i)){
				sum+=i;
				count++;
			}
		}
        printf("Count = %d, sum = %d\n", count, sum);
    }
}

int prime(int m){
	int i;
	if(m==1)return 0;
	for(i=2;i<=sqrt(m);i++){
		if(m%i==0)return 0;
	}
	if(i>sqrt(m)) return 1;	
}
