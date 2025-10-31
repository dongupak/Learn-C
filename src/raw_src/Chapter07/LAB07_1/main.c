#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 최대값을 찾는 함수
int get_max(int arr[], int size) {
    int max = arr[0];  // 첫 번째 요소를 초기 최대값으로 설정
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// 최소값을 찾는 함수
int get_min(int arr[], int size) {
    int min = arr[0];  // 첫 번째 요소를 초기 최소값으로 설정
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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

    // 최대값과 최소값 구하기
    int max_value = get_max(arr, n);
    int min_value = get_min(arr, n);
    printf("최대값: %d\n", max_value);
    printf("최소값: %d\n", min_value);
}