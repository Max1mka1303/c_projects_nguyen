#include <stdio.h>
#include <string.h>

int main(void){
	char s[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
	printf("%s\n", s);
	printf("%zu\n", strlen(s));
	printf("%zu\n", sizeof(s));
	return 0;
}
