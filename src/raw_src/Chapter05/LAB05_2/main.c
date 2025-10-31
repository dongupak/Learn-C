#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int div_num = 1000, started = 0;
    int digit;

    printf("0부터 9999 사이의 정수를 입력하세요: ");
    scanf("%d", &n);

    if (n < 0 || n > 9999) {
        printf("입력 오류: 0 이상 9999 이하의 수를 입력하세요.\n");
        return 1;
    }

    while (div_num >= 1) {
        digit = (n / div_num) % 10;

        if (digit != 0 || started || div_num == 1) {
            started = 1;  // 의미 있는 숫자가 등장한 이후부터 출력
            switch (div_num) {
            case 1000:
                printf("1000의 자리 : %d\n", digit);
                break;
            case 100:
                printf(" 100의 자리 : %d\n", digit);
                break;
            case 10:
                printf("  10의 자리 : %d\n", digit);
                break;
            case 1:
                printf("   1의 자리 : %d\n", digit);
                break;
            }
        }
        div_num /= 10;
    }
}