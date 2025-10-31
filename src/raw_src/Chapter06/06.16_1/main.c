#include <stdio.h>


int factorial(int n) {
    int i, result = 1;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main(void) {
    printf("3! : %d\n", factorial(3));
    printf("5! : %d\n", factorial(5));
}