#include <stdio.h>
int main() {
    for (int i = 1; i <= 2; i++) {         // 외부 반복문
        for (int j = 1; j <= 3; j++) {     // 내부 반복문
            printf("i = %d, j = %d, ", i, j); // 한 행씩 출력
        }
        printf("\n");
    }
}