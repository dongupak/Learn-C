#include <stdio.h>

#define SIZE 9

// 순차 탐색 함수
int search(int src[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (src[i] == key) {
            return i;  // key를 찾으면 인덱스 반환
        }
    }
    return -1;  // key를 찾지 못하면 -1 반환
}

int main(void) {
    int arr[SIZE] = { 3, 24, 5, 7, 20, 10, 9, 4, 44 };
    int key = 10;   // 찾고자 하는 수

    int index = search(arr, SIZE, key);

    if (index != -1)
        printf("탐색 성공: arr[%d]에서 %d(을)를 찾았습니다\n", index, key);
    else
        printf("탐색 실패: %d(이)가 배열에 존재하지 않습니다\n", key);
}