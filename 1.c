#include <stdio.h>
#define KOEF 16
int main(void){
	int val;
	while(scanf("%d", &val) == 1 && val > 0) {
		printf("Объём, ст.л=%d, чашки=%d, ст.л=%d, коэффициент=%d", val, val / KOEF, val % KOEF, KOEF);
	}
	return 0;
}
