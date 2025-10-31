#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열을 역순으로 변환하는 함수
void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[100], n;

    // 사용자 입력
    printf("배열 원소의 수를 입력하시오: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("잘못된 입력입니다. 1에서 100사이의 값을 입력하세요.\n");
        return 1;
    }

    // 배열 원소 입력
    printf("원소를 입력하시오: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // 배열을 역순으로 변환
    reverse(arr, n);

    // 결과 출력
    printf("역순 값: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}