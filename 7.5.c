#include <stdio.h>

long long per_rec(int n){
    if (n == 0){
        return 3;
    }
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 2;
    }
    return per_rec(n-2) + per_rec(n - 3);
}

long long per_it(int n){
    if (n == 0) return 3;
    if (n == 1) return 0;
    if (n == 2) return 2;

    long long p0 = 3;
    long long p1 = 0;
    long long p2 = 2;
    long long p_cur = 0;
    for (int i = 3; i <= n; i++){
        p_cur = p1 + p0;
        p0 = p1;
        p1 = p2;
        p2 = p_cur;
    }
    return p_cur;
}

int main(void){
    int n;
    if (scanf("%d", &n) == 1){
        printf("%lld\n", per_rec(n));
        printf("%lld\n", per_it(n));
    }
    return 0;
}