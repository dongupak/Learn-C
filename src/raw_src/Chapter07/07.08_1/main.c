// 가변 길이 배열은 c11 표준으로 visual studio에서 지원하지 않음.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int size;
    printf("배열 크기 입력: ");
    scanf("%d", &size);

    int arr[size];  // 실행 시간에 크기가 결정되는 배열 (VLA)

    for (int i = 0; i < size; i++) arr[i] = i;
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}