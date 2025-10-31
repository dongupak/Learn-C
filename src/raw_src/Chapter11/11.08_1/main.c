#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    union dat {
        int i;
        double f;
        char str[6];
    };
    union dat d;
    d.i = 356;    // 정수 356을 i에 할당함
    printf("d.i = %d\n", d.i);
    printf("d.f = %.3f\n", d.f);
    printf("d.str = %s\n", d.str);
    d.f = 49.195; // 실수 49.195를 f에 할당함
    printf("d.i = %d\n", d.i);
    printf("d.f = %.3f\n", d.f);
    printf("d.str = %s\n", d.str);
    strcpy(d.str, "apple");
    printf("d.i = %d\n", d.i);
    printf("d.f = %.3f\n", d.f);
    printf("d.str = %s\n", d.str);
}