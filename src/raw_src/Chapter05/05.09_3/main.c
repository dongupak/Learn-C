#include <stdio.h>
int main() {
    int sum, n = 5, i, j;
    for (i = 2; i <= n; i++) {         // 외부 반복문
        for (j = 1, sum = 0; j <= i; j++) {     // 내부 반복문
            printf("%d", j);
            j == i ? printf(" = ") : printf(" + ");
            sum += j;
        }
        printf("%d\n", sum);
    }
}