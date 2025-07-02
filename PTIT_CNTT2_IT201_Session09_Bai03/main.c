#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node* creatNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
int findNodeData(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}
int main(void) {
    Node* head = creatNode(1);
    Node* node2=creatNode(2);
    Node* node3=creatNode(3);
    Node* node4=creatNode(4);
    Node* node5=creatNode(5);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    int x;
    scanf("%d", &x);
    if (findNodeData(head, x)) {
        printf("True");
    }else {
        printf("False");
    }
    return 0;
}