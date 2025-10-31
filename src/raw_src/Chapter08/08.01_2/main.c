#include <stdio.h>

int main(void) {
    int a = 10;
    char b = 'c';
    double c = 170.2;

    printf("a狼 林家 : %p\n", &a);
    printf("b狼 林家 : %p\n", &b);
    printf("c狼 林家 : %p\n", &c);
}