#include <stdio.h>
int main(void)   
{
    int i, j, n, x ,k;
    int looptimes, ri;
    int a[10];
	
    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
		for(j = 0;j < n ; j++) {
			if(a[j] >= x) {
				for(k = n; k > j; k--) {
					a[k] = a[k-1];
				}					
				a[j]=x;
				break;
			}
			else a[n] = x;
		}
		
        for(i = 0; i < n + 1; i++)
            printf("%d ", a[i]);
        putchar('\n');   
    }
}


