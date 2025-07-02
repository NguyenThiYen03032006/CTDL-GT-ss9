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
Node* reverseList(Node* head) {
    Node* prev=NULL;/// tao mang tu duoi len
    Node* curr=head;
    Node* next=NULL;
    while (curr!=NULL) {
        next=curr->next; // luu phan tu t2 sau phan tu hien tai vao next
        curr->next=prev;// gán node theo hướng ngược lại
        prev=curr;
        curr=next;
    }
    return prev;

}
void printNode(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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

    head=reverseList(head);
    printNode(head);
    return 0;
}