#include <stdio.h>
#include <limits.h>

int main(void){
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n",INT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);
	if ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX) {
		printf("RANGE_OK: %d\n", 1);
	} else {
		printf("RANGE_OK: %d\n", 0);
	}

	return 0;
}
