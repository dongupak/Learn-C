#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        printf("³­¼ö: %5.3f\n", (double)rand() / (double)RAND_MAX);
}