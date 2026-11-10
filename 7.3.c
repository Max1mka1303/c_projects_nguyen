#include <stdio.h>
#include <math.h>

double diff(double a, double b) {
    return fabs(a) - fabs(b);
}
int main(void){
    double a, b;
    double d;
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("%.4lf\n", diff(a, b));
    }
    return 0;
}