#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	int i = 0;
	int c = 0;
	while (i < n) {
		int p;
		if (scanf("%d", &p) == 1) {
			if (p % 2 != 0){
				c++;
			}
		}
		i++;
	}
	printf("%d\n", c);
	return 0;
}
