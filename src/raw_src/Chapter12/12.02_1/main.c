#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, size;
    double value, total = 0.0;
    double* scores;

    printf("학생의 수는 : ");  scanf("%d", &size);     // 학생의 수를 입력받아
    scores = (double*)malloc(size * sizeof(double));  // 학생 수 만큼의 메모리를 할당

    for (i = 0; i < size; i++) {  // 할당된 메모리에 값을 저장
        printf("성적입력 : ");
        scanf("%lf", &value);
        *(scores + i) = value;
    }

    for (i = 0; i < size; i++)
        total += scores[i];
    printf("성적의 합 : %5.2f 평균: %5.2f\n", total, total / size);

    free(scores);    // 메모리를 해지
}