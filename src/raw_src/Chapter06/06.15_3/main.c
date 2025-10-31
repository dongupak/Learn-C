#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now;
    struct tm* timeinfo;
    char buffer[80];

    // 현재 시간 가져오기
    time(&now);
    timeinfo = localtime(&now);

    // 날짜와 시간 형식화
    strftime(buffer, sizeof(buffer), "오늘은 %Y년 %m월 %d일 (%A), 현재 시간은 %H:%M:%S입니다.", \
        timeinfo);
    printf("%s\n", buffer);
}