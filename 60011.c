#include <stdio.h>
int main( )
{
    int i, index, n, temp;
    int looptimes, ri;
    int a[10];

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        index = 0;
		for(i = n-1; i >= 0; i--) {
			if(a[index] < a[i]){
				index = i;
			}
		}
		temp = a[n-1];
		printf("max = %d, index = %d\n",a[index],index);
		a[n-1] = a[index];
		a[index] = temp;
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}

