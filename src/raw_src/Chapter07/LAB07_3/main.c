#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열을 오른쪽으로 K번 회전하는 함수
void rotate_right(int arr[], int size, int k) {
    // k가 배열 크기보다 클 경우, k를 배열 크기로 나눈 나머지만큼만 이동
    k = k % size;

    // 임시 배열에 마지막 k개 원소 저장
    int temp[10];
    for (int i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // 원본 배열의 나머지 요소를 뒤로 이동
    for (int i = size - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // 임시 배열의 값을 원본 배열 앞부분에 복사
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

int main() {
    int n, k, arr[10];  // arr 배열의 최대 크기는 10

    // 사용자 입력: 배열 크기
    printf("배열 원소의 수를 입력하시오: ");
    scanf("%d", &n);

    // 사용자 입력: n개의 배열 원소를 입력함
    printf("원소를 입력하시오: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // 사용자 입력: 회전 횟수
    printf("회전 횟수를 입력하시오: ");
    scanf("%d", &k);

    // 배열을 오른쪽으로 K번 회전시키는 함수
    rotate_right(arr, n, k);

    // 결과 출력
    printf("---------------\n");
    printf("배열을 오른쪽으로 %d번 회전한 결과: ", k);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}