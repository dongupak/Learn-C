#include <stdio.h>

int main()
{
    char string[] = "Hello there! Hello C\n";
    int x = 0;

    while (string[x])
    {
        switch (string[x])
        {
        case ' ':
        case '.':
        case ',':
        case '!':
        case '\n':
            putchar('\n');  // 줄바꿈 문자 출력
            break;
        default:      // 알파벳인 경우 그대로 출력
            putchar(string[x]);
        }
        x++;
    }
}