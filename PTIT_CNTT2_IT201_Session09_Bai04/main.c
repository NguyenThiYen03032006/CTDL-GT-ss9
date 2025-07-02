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
int lenList(Node* head) {
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
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

    printf("Danh sach lien ket co %d phan tu", lenList(head));
    return 0;
}