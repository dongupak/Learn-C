#include <stdio.h>

int main(void) {
    char* pc = (char*)0x10000;
    int* pi = (int*)0x10000;
    double* pd = (double*)0x10000;

    printf("+2 연산 후 pc=%p, pi=%p, pd=%p\n", pc + 2, pi + 2, pd + 2);
    printf("-2 연산 후 pc=%p, pi=%p, pd=%p\n", pc - 2, pi - 2, pd - 2);
}
