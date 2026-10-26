#include <stdio.h>
#include <math.h>
int main(void){
	int n;
	while (scanf("%d", &n)==1 && n > 0){
		double x = 0.0;
		for (int i = 1; i <= n; i++){
			x += 1.0/sqrt(i);
		}
		printf("%.6f\n", x);
	}
	return 0;
}
