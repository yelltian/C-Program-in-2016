#include <stdio.h>
int main(void)
{
    int i, index, n, t;
    int looptimes, ri;
    int a[10];

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        t = a[0];
		for( i = 0; i < n; i++) {
			if(a[i]<=t) {
				t = a[i];
				index = i;
			}
		}
		a[index] = a[0];
		a[0] = t ;
		t = a[n-1];
		for( i = 0; i < n; i++) {
			if(a[i]>=t) {
				t = a[i];
				index = i;
			}
		}
		a[index] = a[n-1];
		a[n-1] = t ;
		printf("After swap: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}
