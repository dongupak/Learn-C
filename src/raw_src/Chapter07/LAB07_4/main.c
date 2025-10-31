#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int first, last, middle, key, array[40];
    // 0, 10, 20, 30,...,390까지의 수를 array에 넣는다

    for (int i = 0; i < 40; i++) {
        array[i] = i * 10;
        printf("%d ", array[i]);
    }

    printf("\n키 값을 입력하시오: ");
    scanf("%d", &key);
    first = 0; last = 40 - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (array[middle] < key)
            first = middle + 1;
        else if (array[middle] == key) {
            printf("\n키값 %d(을)를 %d 위치에서 발견.\n", key, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("키값 %d(이)가 배열에 없음.\n", key);

    return 0;
}