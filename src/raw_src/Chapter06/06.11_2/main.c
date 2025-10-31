#include <stdio.h>

int sum(int a[], int size)  // 매개변수로 a[]와 배열의 크기 size를 사용
{
    int total = 0;
    for (int i = 0; i < size; i++)
        total += a[i];
    return total; // a 배열의 원소의 합을 구하여 반환
}

int main(void) {
    int arr[10] = { 100, 200, 300, 300, 500, 600, 700, 200, 300, 300 };

    printf("arr 배열 원소의 합 = %d\n", sum(arr, 10));
}