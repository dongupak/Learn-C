#include <stdio.h>
#define SIZE 5

// 함수 정의부, 배열과 배열의 크기를 넘겨주어야 한다
int get_avg(int arr[], int size) {  
    int total = 0;

    for (int i = 0; i < size; i++)
        total += arr[i];

    return total / size;
}
int main(void) {
    int score[SIZE] = { 31, 63, 62, 87, 14 };

    printf("배열 원소의 평균 = %d\n", get_avg(score, SIZE));
    return 0;
}