#include <stdio.h>
#include <conio.h>
int main(void) {
    int ch;
    while ((ch = _getch()) != 'q')
        _putch(ch);

    printf("\nq가 입력되어 더이상 입력을 받지 않습니다\n");
}