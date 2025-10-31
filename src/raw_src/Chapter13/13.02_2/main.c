#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char ca, cb;
    // "%c %c"와 같이 공백이 있음
    scanf("%c %c\n", &ca, &cb);
    printf("ca : %c, cb : %c\n", ca, cb);
    scanf("%c%c\n", &ca, &cb);   // "%c%c"와 같이 공백이 없음
    printf("ca : %c, cb : %c\n", ca, cb);
}