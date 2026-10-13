# include <stdio.h>
# include <stdint.h>

int main(void){
	char s[100];
	int width;
	scanf("%s %d", s, &width);
	printf("\"%*s\"\n", width, s);
	printf("\"%-*s\"\n", width, s);
	return 0;
}
