#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int c = 0;
    int c1 = 0;
    while ((ch = getchar()) != EOF) {
        int ascii = (int)ch;
        if (ascii % 11 == 0){
            c1++;
        }   
        c++;
    }
    printf("%d\n", c);
    printf("%d\n", c1);
    return 0;
}