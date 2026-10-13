#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"
int main(void){
	const char year[] = "2026";
	printf("DISTRO: %s\n", DISTRO);
	printf("RDATE: %s\n", year);
	printf("STRLEN: %zu\n", strlen(DISTRO));
	printf("SIZEOF: %zu\n", sizeof(DISTRO));
	return 0;
}
