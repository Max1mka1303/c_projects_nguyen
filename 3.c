#include <stdio.h>
int main(void){
	int n = 0;
	int n1 = 0;
	long long s1 = 0;
	int n2 = 0;
	long long s2 = 0;
	while (scanf("%d", &n)==1 && n != 0){
		if (n >= 10 && n <= 50){
			n1++;
			s1 += n;
		}
		else {
			n2++;
			s2 += n;
		}
	};
	printf("%d %.2f\n", n1, (double)s1/n1);
	printf("%d %.2f\n", n2, (double)s2/n2);
	return 0;
}
