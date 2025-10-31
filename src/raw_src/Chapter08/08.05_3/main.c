#include <stdio.h>

int main() {
    int a[5] = { 10, 20, 30, 40, 50 };
    int* p = a, q = 0;

    printf("a[0]=%d, a[1]=%d, p = %p, *p = %d, q = %d\n",
        a[0], a[1], p, *p, q);
    q = *++p;
    printf("q = *++p; 이후의 값 \n");
    printf("a[0]=%d, a[1]=%d, p = %p, *p = %d, q = %d\n",
        a[0], a[1], p, *p, q);
}