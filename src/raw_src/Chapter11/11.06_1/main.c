#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_str(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strcmp(str1, str2);
}

int main() {
    char* strs[] = {
        "powerful",
        "and",
        "strong",
        "c",
        "programming",
        "language"
    };

    int n = sizeof(strs) / sizeof(strs[0]);
    qsort(strs, n, sizeof(char*), cmp_str);

    printf("정렬된 문자열:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", strs[i]);
}