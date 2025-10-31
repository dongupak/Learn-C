#include <stdio.h>

int main(void) {
    char* pc = (char*)0x10000;
    int* pi = (int*)0x10000;
    double* pd = (double*)0x10000;

    printf("증가 전 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);
    pc++;
    pi++;
    pd++;
    printf("증가 후 pc=%p, pi=%p, pd=%p\n", pc, pi, pd);
}