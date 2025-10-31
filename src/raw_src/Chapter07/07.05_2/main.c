#include <stdio.h>

#define SIZE  3

int main(void) {
    int m[SIZE] = { 10, 20, 30 }, n[SIZE] = { 10, 20, 30 };
    int same_count = 0;

    for (int i = 0; i < SIZE; i++)
        if (m[i] == n[i])
            same_count++;

    if (same_count == SIZE)
        printf("m과 n은 같다\n");
    else
        printf("m과 n은 같지 않다\n");
}