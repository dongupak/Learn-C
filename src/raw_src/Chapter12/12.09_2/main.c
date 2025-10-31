#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode* link;
} ListNode;

int main(void) {
    ListNode* head, * current, * new_node;
    head = current = new_node = NULL;     // 초기화
    item n;

    printf("숫자를 입력하시오(종료시 -1) : ");
    // -1 입력이 들어올때까지 값을 받아서 노드 객체를 생성하여 연결 리스트에 추가
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;
        new_node = (ListNode*)malloc(sizeof(ListNode));
        new_node->data = n;
        new_node->link = NULL;

        if (head == NULL) {
            head = new_node;
            current = new_node;
        }
        else {
            current->link = new_node;
            current = new_node;
        }
    }

    printf("연결 리스트의 원소들은 다음과 같습니다 \n");
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->link;
    }
}