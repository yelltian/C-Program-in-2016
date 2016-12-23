#include <stdio.h>
int main(void)
{
    int i, n;
    int looptimes, ri;
    double mypow, x;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf%d", &x, &n);
		mypow = 1;
		for(i=1;i<=n;i++) {
			mypow *= x;
		}
        printf("%.2f\n", mypow);
   }
}

