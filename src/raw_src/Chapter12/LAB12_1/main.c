#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 최대값 반환 함수
int get_max(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// 최소값 반환 함수
int get_min(int* arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int n;

    printf("원소의 수를 입력하시오(1에서 100 사이): ");
    scanf("%d", &n);
    // 입력값 유효성 검사
    if (n < 1 || n > 100) {
        printf("잘못된 입력입니다. 1에서 100사이의 값을 입력하세요.\n");
        return 1;
    }
    // 동적 메모리 할당
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("원소를 입력하시오 : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // 최대값, 최소값 계산
    int max = get_max(arr, n);
    int min = get_min(arr, n);
    printf("최대값: %d\n", max);
    printf("최소값: %d\n", min);
    // 메모리 해제
    free(arr);
}