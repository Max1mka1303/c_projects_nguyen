#include <stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	int val = 1;
	int i = 0;
	while(i++ < n) {
		printf("%d ", val);
		val *= 5;
	}
	printf("\n");
	return 0;
}
