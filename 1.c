#include <stdio.h>
#include <ctype.h>
int main(void){
	int total = 0;
	int ch;
	while ((ch = getchar()) && ch != '#'){
		if (tolower(ch) == 'a' || tolower(ch) == 'e'){
			total++;
		}

	};
	printf("%d\n", total);
	return 0;
}
