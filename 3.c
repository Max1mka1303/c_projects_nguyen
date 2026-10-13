#include <stdio.h>
#include <string.h>
int main(void){
	char s[100];
	scanf("%s", s);
	int l = (int)strlen(s)+5;
	printf("\"%s\"\n", s);
	printf("\"%20s\"\n", s);
	printf("\"%-20s\"\n", s);
	printf("\"%*s\"\n", l, s);
	return 0;
}
