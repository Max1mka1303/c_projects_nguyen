#include <stdio.h>
#include <math.h>
int main(void){
	double bell[8];
    long long t[8][8];

	t[0][0] = 1;
    bell[0] = 1.0;

    	for (int i = 1; i < 8; i++) {
        	t[i][0] = t[i - 1][i - 1];
		    for (int j = 1; j <= i; j++) {
                t[i][j] = t[i][j - 1] + t[i - 1][j - 1];
        	}
		    bell[i] = (double)t[i][0];
    	}
	double sum = 0.0;
	for (int i = 0; i < 8; i++) {
		printf("%.2f ", bell[i]);
		sum += bell[i];
	}
	printf("\n%.2f\n", sum);
	return 0;
}

