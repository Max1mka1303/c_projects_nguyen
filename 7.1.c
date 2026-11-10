#include <stdio.h>

int main(void){
    int ch;
    while((ch = getchar()) != EOF){
        if (ch == ' '){
            putchar('_');
        }
        else{
            putchar(ch);
        }
    }
    return 0;
}