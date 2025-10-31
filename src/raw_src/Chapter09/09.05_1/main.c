#include <stdio.h>

int main(void) {
    int i, n;
    char* x[] = {
        "hello",
        "hi",
        "bonjour"
    };
    n = sizeof(x) / sizeof(x[0]);   //배열 원소 개수 구하기
    printf("sizeof(x) : %ld\n", sizeof(x));
    printf("sizeof(x) / sizeof(x[0]) : %ld\n", sizeof(x) / sizeof(x[0]));
    for (i = 0; i < n; i++)
        printf("sizeof(x[%d]) = %ld : %s\n", i, sizeof(x[i]), x[i]);
    printf("x[0][0] : %c\n", x[0][0]);
    printf("x[0][1] : %c\n", x[0][1]);
    printf("x[0][2] : %c\n", x[0][2]);
    printf("x[0][3] : %c\n", x[0][3]);
    printf("x[0][4] : %c\n\n", x[0][4]);
    printf("x[1][0] : %c\n", x[1][0]);
    printf("x[1][1] : %c\n", x[1][1]);
}