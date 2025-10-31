#include <stdio.h>

int main(void) {
    int s[] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++)
        printf("s[%d] = %d\n", i, s[i]);
}