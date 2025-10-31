#include <stdio.h>
#define SIZE 5

int main(void) {
    int score[SIZE] = {31, 63, 62, 87, 14 };
    int max = score[0];

    for (int i = 1; i < SIZE; i++)
        if (score[i] > max)
            max = score[i];

    printf("배열 원소의 최대값 = %d\n", max);
    return 0;
}