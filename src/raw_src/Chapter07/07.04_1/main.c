#include <stdio.h>

int main(void) {
    int score[] = {94, 82, 95, 77, 89 };
    int sum = 0, size, i;
    float average;

    size = sizeof(score) / sizeof(score[0]);
    for (i = 0; i < size; i++)  // size만큼 루프를 반복
        sum += score[i];    // sum 변수에 score[i]를 누적해서 더한다
    average = (float)sum / size;   // 평균을 구한다
    printf("배열 원소의 합 : %d, 배열 원소의 평균 : %.2f\n", sum, average);
}