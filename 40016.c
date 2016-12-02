#include "stdio.h"
#include "math.h"

int main(void)
{
    int count, i, m, n, number;

    scanf("%d",&m);
    scanf("%d",&n);
	
	count=0;
    if(m % 2 != 0) m = m + 1;
    if(m >= 6){
		for(number=m;number<=n;number+=2){
			for(i=3;i<=number/2;i+=2){
				if(Prime(i)&&Prime(number-i)){
					if(count!=0&&count%5==0) printf("\n");
					printf("%d=%d+%d ", number, i, number-i);
					count++;
					break;
				}
			}
		}
	}
}

int Prime(int n){
	int i,count;
	count=0;
	for(i=3;i<=sqrt(n);i+=2){
		if(n%i==0)count++;
	}
	if(count==0)return 1;
	else return 0;
}


