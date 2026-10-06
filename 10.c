#include <stdio.h>
#include <stdint.h>

int main(void){
	int id;
	int stat;
	float v;
	scanf("%x %o %f", &id, &stat, &v);
	uint8_t s = (uint8_t)stat;
	uint16_t checksum = id+s;
	printf("PACKET_ID: %x\n", id);
	printf("STATUS_CODE: %d\n", s);
	printf("STATUS_CHAR: %c\n",s);
	printf("VOLTAGE: %.2f\n", v);
	printf("CHECKSUM: %d\n", checksum);
	return 0;
}
