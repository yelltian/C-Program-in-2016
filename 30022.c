#include <stdio.h>

int main(void)
{
    int i, n;
    double myfact;
    double fact(int n);

    scanf("%d",&n);
    myfact = 1;
	for(i= 1;i<=n;i++)
	{
		myfact =myfact*i;
	
	printf ("%d! = %.0f\n", i, myfact);
	}
}
     
