#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "C,Programming,is,fun!";
    char delim[] = ",!";
    char* token;

    printf("¿øº» str : %s\n", str);
    token = strtok(str, delim);
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
}