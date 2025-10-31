#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = NULL;
    char c;

    fp = fopen("c:\\workspace\\sample.txt", "r");
    printf("---- sample.txt file ----\n");
    while ((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);
    printf("\n");
}