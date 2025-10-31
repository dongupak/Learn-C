#include <stdio.h>
#define SIZE 5

int get_max(int arr[], int size) {  // 함수 정의부, 배열과 배열의 크기를 넘겨주어야 한다
    int max = arr[0];

    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int main(void) {
    int score[SIZE] = { 31, 63, 62, 87, 14 };

    printf("배열 원소의 최대값 = %d\n", get_max(score, SIZE));
    return 0;
}