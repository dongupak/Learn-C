#include <stdio.h>

#define SIZE 9

int main(void) {
    int arr[SIZE] = { 3, 24, 5, 7, 20, 10, 9, 4, 44 };
    int key = 10;   // 찾고자 하는 수를 10으로 지정하자

    for (int i = 0; i < SIZE; i++)  // 배열 내부의 모든 값을 꺼내어 10과 비교
        if (arr[i] == key)
            printf("탐색 성공 : arr[%d]에서 %d(을)를 찾았습니다\n", i, key);
}