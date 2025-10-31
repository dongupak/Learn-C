#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD_COUNT 7
#define WORD_LEN 100

// 비교 함수: 알파벳 오름차순 정렬
int compare(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}

int main() {
    char words[WORD_COUNT][WORD_LEN];

    printf("%d개의 영문 단어를 입력하세요.\n", WORD_COUNT);
    for (int i = 0; i < WORD_COUNT; i++) {
        printf("%d번째 단어: ", i + 1);
        scanf("%s", words[i]);
    }

    // 단어 정렬
    qsort(words, WORD_COUNT, WORD_LEN, compare);

    // 정렬 결과 출력
    printf("\n정렬된 단어 목록(알파벳 사전순):\n");
    for (int i = 0; i < WORD_COUNT; i++)
        printf("%s\n", words[i]);
}