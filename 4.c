#include <stdio.h>
#include <math.h>
int main(void){
	double n;
	double n1;
	double n2;
	double n3;
	scanf("%lf", &n);
	if (n < 20000){
		n1 = n*0.02;
	}
	else if (n >= 20000 && n <= 100000){
		n1 = 20000.0*0.02;
		n2 = (n-20000.0)*0.03;
	}
	else {
		n1 = 20000.0*0.02;
		n2 = 80000.0*0.03;
		n3 = (n - 100000.0)*0.05;
	}
	double total = n1 + n2 + n3;
	printf("%lf\n", n);
	printf("%lf\n", n1);
	printf("%lf\n", n2);
	printf("%lf\n", n3);
	printf("%lf\n", total);
}

