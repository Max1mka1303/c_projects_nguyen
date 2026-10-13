#include <stdio.h>
#include <string.h>
int main(void){
	char a[20] = "СибГУТи";
	printf("SIZEOF: %zu\n", sizeof(a));
	size_t st = strlen(a);
	printf("STRLEN: %zu\n", st);
	printf("FREE_BYTES: %zu\n", sizeof(a) - (strlen(a)+1));
	return 0;
}
