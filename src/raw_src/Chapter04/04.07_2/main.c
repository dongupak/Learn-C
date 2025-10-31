#include <stdio.h>

int main() {
    int num = 2;

    switch (num) {
    case 1:
        printf("Number is 1\n");
    case 2:
        printf("Number is 2\n");
    case 3:
        printf("Number is 3\n");
    default:
        printf("Unknown number\n");
    }
}