#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_WORDS 50   // 최대 단어 개수
#define MAX_LENGTH 512 // 단어의 최대 길이

// 문자열 정렬 함수
void sortWords(char words[][MAX_LENGTH], int count) {
    char temp[MAX_LENGTH];

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) { // 사전 순서 비교
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}
int main() {
    char input[MAX_LENGTH];              // 사용자 입력 문장
    char words[MAX_WORDS][MAX_LENGTH];   // 단어를 저장할 배열
    int count = 0;                       // 단어 개수

    printf("문장을 입력하세요: ");      // 사용자 입력 받기
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; // 개행 문자 제거
    char* token = strtok(input, " "); // 공백을 기준으로 분리
    while (token != NULL) {
        strcpy(words[count], token); // 단어 저장
        count++;
        token = strtok(NULL, " ");
    }
    sortWords(words, count);      // 단어 정렬 함수 호출
    printf("정렬된 단어:\n");
    for (int i = 0; i < count; i++)
        printf("%s\n", words[i]);
}