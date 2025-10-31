#include <stdio.h>
#include <string.h>

int main() {
    char file[] = "report_2026.pdf";
    char prefix[] = "report";

    if (strncmp(file, prefix, strlen(prefix)) == 0)
        printf("파일 이름이 'report'로 시작합니다.\n");
    else
        printf("파일 이름이 'report'로 시작하지 않습니다.\n");
}