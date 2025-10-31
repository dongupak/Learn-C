#include <stdio.h>

int main(void) {
    int num1 = 8, num2 = 4, result;

    printf("num1 = %d num2 = %d 일 때\n", num1, num2);
    result = num1 + num2;
    printf("num1 + num2 = %d \n", result);
    result = num1 - num2;
    printf("num1 - num2 = %d \n", result);
    result = num1 * num2;
    printf("num1 * num2 = %d \n", result);
    result = num1 / num2;
    printf("num1 / num2 = %d \n", result);
    result = num1 % num2;
    printf("%d(을)를 %d(으)로 나눈 나머지 = %d \n", num1, num2, result);
}