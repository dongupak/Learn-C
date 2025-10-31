#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "He is very smart man!";
    char str2[] = "smart";
    char* result;

    result = strstr(str1, str2);

    if (result != NULL) {
        printf("Substring found at: %s\n", result);
    }
    else {
        printf("Substring not found.\n");
    }
}