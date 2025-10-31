#include <stdio.h>

int main(void) {
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    // 위의 배열 a를 참조하는 포인터
    int(*ptr)[2][3] = &a;

    // 배열 a의 원소를 (*ptr)을 이용하여 접근함
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("(*ptr)[%d][%d] : %d,  ", i, j, (*ptr)[i][j]);
        printf("\n");
    }

    printf("&a = %p\n", &a);
    printf("ptr = %p\n", ptr);
}