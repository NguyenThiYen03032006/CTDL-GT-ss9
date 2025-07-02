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
void printNode(Node* head) {
    Node* temp = head;
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;

    }
    printf("NULL\n");
}
Node* addNode(Node* head, int index, int value) {
    Node* newNode = creatNode(value);
    Node* temp = head;
    for (int i = 1; i < index-1; i++) {
        temp = temp->next;
    }
    Node* nextNode= temp->next;
    temp->next = newNode;
    newNode->next = nextNode;
    return head;
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
    printf("value: ");
    scanf("%d", &x);
    int index;
    printf("position: ");
    scanf("%d", &index);
    addNode(head,index, x);
    printNode(head);
    return 0;
}