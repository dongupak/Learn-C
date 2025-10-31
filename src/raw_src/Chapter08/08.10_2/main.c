#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "1234xyz";
    char* end;
    long val = strtol(str, &end, 10);

    printf("변환된 숫자: %ld\n", val);       // 1234
    printf("남은 문자열: %s\n", end);        // xyz
}