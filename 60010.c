#include <stdio.h>
int main(void)
{
    int i, index, n;
    int ri, looptimes;
    int a[10];

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
            index = 0;
		for(i = 0; i < n;i++){
			if(a[index]<a[i]){
				index = i;
			}
		}
        printf("max = %d, index = %d\n", a[index], index);
    }
}

