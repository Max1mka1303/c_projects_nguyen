#include <stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %x %o",&a,&b,&c);
	int u1 = a;
	printf("UNIT_ID: %d\n", u1);
	int u2 = b;
	printf("UNIT_VERSION: %d\n", u2);
	int u3 = c;
	printf("UNIT_STATUS: %d\n", u3);
	int sum = u1+u2+u3;
	printf("SUM: %d\n", sum);
	return 0;
	}
