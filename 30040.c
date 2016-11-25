#include <stdio.h>
void pyramid(int n);

int main(void)
{    
    int n;
    int looptimes, ri;

    scanf("%d",&looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d",&n);
		pyramid(n);
    }
}

void pyramid(int n){
	int i,j,m;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(m=1;m<=i;m++){
			printf("%d ", i);
		}
		printf("\n");
	}
}
