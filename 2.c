#include <stdio.h>
#include <string.h>
int main(void){
	char a[15];
	char b[15];
	scanf("%s %s", a, b);
	printf("%s-%s\n", a, b);
	printf("TOTAL_LEN: %zu\n", strlen(a)+strlen(b));
	return 0;
}
