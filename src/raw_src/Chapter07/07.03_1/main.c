#include <stdio.h>

int main(void) {
    int score[] = { 94, 82, 95, 77, 89 };
    int i, size;

    size = sizeof(score) / sizeof(score[0]);
    printf("배열의 크기 = %d\n", size);
    for (i = 0; i < size; i++)
        printf("score[%d] = %d\n", i, score[i]);
}