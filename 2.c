#include <stdio.h>
#include <stdint.h>
int main(void){
	uint16_t d,t;
	scanf("%hd %hd", &d, &t);
	float rez = (float)(d/t);
	printf("%f\n", rez);
	printf("%llu\n",(unsigned long long)sizeof(d));
	printf("%llu\n",(unsigned long long)sizeof(t));
	printf("%llu\n",(unsigned long long)sizeof(rez));
	return 0;
}
