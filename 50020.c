#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    int looptimes, ri;
    double area, perimeter, s;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%d%d%d", &a, &b, &c);
		
		if(a+b>c&&a+c>b&&b+c>a){
			perimeter = a+b+c;
			s = perimeter/2.0;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			printf("area = %.2f, perimeter = %.2f\n",area, perimeter);
		}
		else printf("These sides do not correspond to a valid triangle\n");
    }
}
