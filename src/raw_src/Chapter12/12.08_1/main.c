#include <stdio.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode* link;
} ListNode;

int main(void) {
    ListNode node = { 20, NULL };
    ListNode* p1 = &node;

    printf("node.data = %d\n", node.data);
    printf("(*p1).data = %d\n", (*p1).data);
    printf("p1->data = %d\n", p1->data);
}