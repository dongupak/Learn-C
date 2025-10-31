#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("사용법: %s 숫자1 숫자2\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);  // 문자열을 정수로 변환
    int b = atoi(argv[2]);

    printf("%d + %d = %d\n", a, b, a + b);
}