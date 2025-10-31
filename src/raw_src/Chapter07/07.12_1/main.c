#include <stdio.h>
#define SIZE 5

// list 배열과 그 배열의 크기 n을 받아서 정렬을 수행
void bubble_sort(int list[], int n)
{
    int i, j, temp;

    for (i = n - 1; i > 0; i--)
        for (j = 0; j < i; j++) {
            if (list[j] > list[j + 1]) {  // 앞뒤의 값을 비교한 후 교환
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
}

// 버블 정렬 기법
int main()
{
    int i;
    int arr[SIZE] = { 24, 5, 7, 3, 20 };

    bubble_sort(arr, SIZE);       // 버블 정렬 함수 호출
    printf("버블 정렬 후 데이터 : ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
}