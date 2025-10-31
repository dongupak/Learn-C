#include <stdio.h>

int main(void) {
    int n[1000];  // 4 byte * 1000

    n[0] = 10;

    printf("n[0] = %d\n", n[0]);
}