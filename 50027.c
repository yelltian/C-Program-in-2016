#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2);
int main(void)
{
    int looptimes, ri;
    double distance, x1, y1, x2, y2;

    scanf("%d", &looptimes);
    for(ri = 1; ri <= looptimes; ri++){
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
		distance = dist( x1, y1, x2, y2);
        printf("Distance = %.2f\n", distance);
    }
}

double dist(double x1, double y1, double x2, double y2){
	return (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}


