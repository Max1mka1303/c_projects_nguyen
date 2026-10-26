#include <stdio.h>
#include <math.h>


double calc(double a, double b){
	double rez = (a-b)/(sqrt(a*a - b*b));
	return rez;
}


int main(void){
	double a, b;
	while (scanf("%lf %lf", &a, &b) == 2){
		printf("%.4lf\n", calc(a,b));
	}
	return 0;
}

