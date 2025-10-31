#include <stdio.h>

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int i;   // for 문의 진입 전에 선언함함

    for (i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
}