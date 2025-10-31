#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++)
        printf("%d ", n - (i + 1)); // 4, 3, 2, 1, 0을 출력하는 코드
}