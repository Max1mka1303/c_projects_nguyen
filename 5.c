#include <stdio.h>
#define KOEF 1000


int v_to_mv(double value){
	int mv = (int)value * KOEF;
	return mv;
}


int main(void){
	double value;
	while (scanf("%lf", &value) == 1){
		printf("%d", v_to_mv(value));
	}
	return 0;
}

