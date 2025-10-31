#include <stdio.h>

int main() {
    int x = 15, y = 25, z = 10;
    int max;

    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    printf("가장 큰 값은 %d입니다.\n", max);
}