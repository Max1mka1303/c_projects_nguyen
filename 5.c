#include <stdio.h>
#include <math.h>

int main(void){
	int a;
    double x;
    while (1) {
        printf("квадрат числа\n");
        printf("куб числа\n");
        printf("корень квадратный\n");
        printf("корень кубический\n");
        printf("выход\n");
        printf("выберите пункт: ");
        if (scanf("%d", &a) != 1) {
            printf("error\n");
            while (getchar() != '\n');
            continue;
        }
        if (a == 0) {
            break;
        }
        switch (a) {
            case 1:
                printf("Введите число: ");
                scanf("%lf", &x);
                printf("%.2lf\n", x * x);
                break;
            case 2:
                printf("Введите число: ");
                scanf("%lf", &x);
                printf("%.2lf\n", x * x * x);
                break;
            case 3:
                printf("Введите число: ");
                scanf("%lf", &x);
                if (x < 0) {
                    printf("error\n");
                } else {
                    printf("%.2lf\n", sqrt(x));
                }
                break;
            case 4:
                printf("Введите число: ");
                scanf("%lf", &x);
                printf("%.2lf\n", cbrt(x));
                break;
            default:
                printf("error\n");
                continue;
        }
    }
    return 0;	
}

