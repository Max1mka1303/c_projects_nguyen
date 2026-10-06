#include <stdio.h>

int main(void){
	long double a;
	scanf("%Lf", &a);
	double b = a;
	float c = a;
	printf("FLOAT: %.6f\n", c);
	printf("DOUBLE: %.6f\n", b);
	printf("LDOUBLE: %.6Lf\n", a);
	printf("FLOAT+1: %.6f\n", c+1);
	printf("DOUBLE+1: %.6f\n", b+1);
	printf("LDOUBLE+1: %.6Lf\n", a+1);
	return 0;
}
