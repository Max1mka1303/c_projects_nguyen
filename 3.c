#include <stdio.h>

int main(void){
	int u1 = 10;
	int u2 = 010;
	int u3 = 0x10;
	printf("DEC_10: %d\n", u1);
	printf("OCT_10: %d\n", u2);
	printf("HEX_10: %d\n", u3);
	printf("INT_SUFFIX: %lu %lu %lu %lu\n",sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
	printf("FLOATSUFFIX: %lu %lu %lu\n",sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
	printf("FLOAT_EQ: %d\n", 0.1f==0);
	char a = 'A';
	printf("CHAR_FORMS: %d %d %d\n", a, '\x41', '\101');
	printf("CHAR_LIT_VAR_STR: %lu %lu %lu\n", sizeof('A'), sizeof(a), sizeof("A"));
	return 0;
}
