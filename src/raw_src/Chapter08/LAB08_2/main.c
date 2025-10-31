#include <stdio.h>


int main(void) {
    printf("sizeof(char *) : %lu\n\n", sizeof(char*));

    if (sizeof(char*) == 4)
        printf("이 컴퓨터 시스템은 32비트 시스템입니다.\n");
    else if (sizeof(char*) == 8)
        printf("이 컴퓨터 시스템은 64비트 시스템입니다.\n");
    else
        printf("이 컴퓨터 시스템은 32비트나 64비트 시스템이 아닙니다.\n");
}