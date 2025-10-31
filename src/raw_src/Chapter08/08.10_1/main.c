#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "1234";
    char str2[] = "-56";

    int num1 = atoi(str1);  // 1234
    int num2 = atoi(str2);  // -56

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}