#include <stdio.h>

int d(int *a, int *b){
    *a = *a * *b;
    *b = *a / *b;

}

int main(void){
    int a = 2, b = 2;
    d(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}