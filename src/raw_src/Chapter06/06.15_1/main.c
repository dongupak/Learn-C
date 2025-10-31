#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int min = 100, max = 200, random;

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        random = rand() % (max - min + 1) + min;
        printf("³­¼ö: %d\n", random);
    }
}