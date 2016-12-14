#include <stdio.h>

int main(void)
{
    int gcd, lcm, m, n, temp, i, x, y;  
    int looptimes, ri;  

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &m);
        scanf("%d", &n);
        if(m <= 0 || n <= 0)
            printf("m <= 0 or n <= 0");
        else{
        	x = m;
        	y = n;
        	if(m<n){
        		temp = m;
        		m = n;
        		n = temp;
        	}
        	for(i=1;i<=n;i++){
        		if(m*i%n==0)break;
        	}
        	lcm = m * i;
        	do{
        		i = m % n;
        		m = n;
        		n = i;
        	}while(i);
        	gcd = m;
        	m = x;
        	n = y;
            printf("%d is the least common multiple of %d and %d, %d is the greatest common divisor of %d and %d.\n", lcm, m, n, gcd, m, n);
        }
    }
}

