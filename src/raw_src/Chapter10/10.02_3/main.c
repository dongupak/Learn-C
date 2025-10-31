#include <stdio.h>

int main(void) {
    int i = 0;
    char str[4];

    str[0] = 'a'; str[1] = 'b'; str[2] = 'c'; str[3] = '\0';
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n%s\n", str);  // %c를 여러번 사용하지 않고 %s를 사용, abc를 출력
}