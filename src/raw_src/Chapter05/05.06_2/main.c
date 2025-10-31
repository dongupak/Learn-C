#include <stdio.h>

int main() {
    int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int size = sizeof(array) / sizeof(array[0]); // 배열의 크기 계산

    printf("배열의 홀수 인덱스 데이터: ");
    for (int i = 1; i < size; i += 2)  // 홀수 인덱스를 가지는 원소만을 출력
        printf("%d ", array[i]);
}