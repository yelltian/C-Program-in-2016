#include "stdio.h"
int main(void)
{
    int flag, i, j, k, row, col, n;
    int a[6][6];
    int looptimes, ri;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        row = col = 0;
        
		for(k = 0; k < n ;k++) {
			flag = 1;
			for(j = 0; j < n; j++) {
				if(a[row][col] < a[row][j]){
					col = j;
				}
			}
			for(i = 0; i < n; i++){
				if(a[row][col] > a[i][col]) {
					flag = 0;
				}
			}
			if(flag == 1)break;
			 row++;
		}  
		
        if(flag != 0)
            printf("a[%d][%d] = %d\n", row, col,a[row][col]);
        else
            printf("NO\n");
    }
}

