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
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
Node* swap(Node* head) {
    Node* curr=head;
    Node* newHead = head->next;// head moi la node2
    Node* prev = NULL;
    while (curr && curr->next) {
        Node* first = curr;
        Node* second = curr->next;
        Node* nextPair = second->next;
        second->next = first;
        first->next = nextPair;
        if (prev) {
            prev->next = second;
        }

        prev = first;
        curr = nextPair;
    }
    return newHead;
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

    head =swap(head);
    printNode(head);
    return 0;
}