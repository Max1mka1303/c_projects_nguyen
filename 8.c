#include <stdio.h>
#include <float.h>

int main(void){
	printf("FLOAT: size=%lu, digits=%d, max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
	printf("DOUBLE: size=%lu, digits=%d, max=%e\n", sizeof(float), DBL_DIG, DBL_MAX);
	printf("LDOUBLE: size=%lu, digits=%d, max=%Le\n", sizeof(float), LDBL_DIG, LDBL_MAX);
	return 0;
}
