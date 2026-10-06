#include <stdio.h>
#include <stdbool.h>
int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	bool n1 = (bool)a;
	int rn1 = (int)n1;
	bool n2 = (bool)b;
	int rn2 = (int)n2;
	printf("MODULE_READY %d\n", rn1);
	printf("FAULT_STATE: %d\n", rn2);
	printf("BOOL_SIZE: %zu\n", sizeof(bool));
	printf("FLAGS_SUM: %d\n", rn1+rn2);
	return 0;
}
