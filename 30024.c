#include <stdio.h>

int main(void)
{
    int i, mark, n;
    int na, nb, nc, nd, ne;
	
    scanf("%d",&n);
    na = nb = nc = nd = ne = 0;

    for(i = 1; i <= n; i++){
        scanf("%d",&mark);
       if(mark<=100&&mark>=90)
       na++;
       else if(mark<=89&&mark>=80)
       nb++;
       else if(mark<=79&&mark>=70)
       nc++;
       else if(mark<=69&&mark>=60)
       nd++;
       else ne++;
    }

    printf("Number of A(90-100): %d\n", na);
    printf("Number of B(80-89): %d\n", nb);
    printf("Number of C(70-79): %d\n", nc);
    printf("Number of D(60-69): %d\n", nd);
    printf("Number of E(0-59): %d\n", ne);
}

