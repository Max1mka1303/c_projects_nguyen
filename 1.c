#include <stdio.h>
#include <math.h>
int main(void){
	double x = 0.0;
	int i = 0;
	for (float x; x < M_PI; x+=0.5){
		double y = cos(x * (M_PI/180.0));
		printf("%d %.4f %.4f\n", i, x, y);
		i++;
	};
	return 0;
}
