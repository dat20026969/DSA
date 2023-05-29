#include "b44.h"
void insertNode(int data) { 
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    if (head == NULL) {
        head = tail = newNode;
        head->previous = NULL;
        tail->next = NULL;
    }
    else {
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
        tail->next = NULL;
    }
}
void insertionSort() {
    struct node* current = NULL, * index = NULL;
    int temp;
    if (head == NULL) {
        return;
    }
    else {
        for (current = head; current->next != NULL; current = current->next) {
            for (index = current->next; index != NULL; index = index->next) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;

                }
            }
        }
    }
}
void print() {
    struct node* current = head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (current != NULL) {

        printf("%d   ", current->data);
        current = current->next;
    }
    printf("\n");
}