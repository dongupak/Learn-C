#include <stdio.h>

int main() {
    int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int(*ptr)[3][3] = &a;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += (*ptr)[i][j];  // 이중 포인터를 통해 접근
        }
        printf("%d행의 합: %d\n", i, sum);
    }
}