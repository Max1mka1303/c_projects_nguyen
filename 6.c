# include <stdio.h>
# include <stdint.h>

int main(void){
	uint8_t a;
	scanf("%hhu", &a);
	uint8_t add = a + 10;
	uint8_t mul2 = a*2;
	uint8_t sqr = a*a;
	printf("ADD: %hhu\n", add);
	printf("MUL2: %hhu\n", mul2);
	printf("SQR: %hhu\n", sqr);
	return 0;
}
