#include <stdio.h>
#define HEIGHT 5
int main(void){
	for (int start = 1; start <= HEIGHT; start++){
		for (int start1 = 1; start1 <= start; start1++){
			printf("1 ");
		}
		for (int start1 = 1; start1 <= HEIGHT - start; start1++){
			printf("0 ");
		}
		printf("\n");
	};
	return 0;
}
