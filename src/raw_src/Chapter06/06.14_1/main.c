#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("난수 1: %d\n", rand());
    printf("난수 2: %d\n", rand());
    printf("RAND_MAX: %d\n", RAND_MAX);
}