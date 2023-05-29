#include "b43.h"
void printList(Node* head){
	Node* start = head;
	while (start){
		cout << start->data << " -> ";
		start = start->next;
	}
	cout << "\n\n";
}
void swap(Node* node_1, Node* node_2){
	int temp = node_1->data;
	node_1->data = node_2->data;
	node_2->data = temp;
}
void bubbleSort(Node* head){
	int swapped;
	Node* lPtr; 
	Node* rPrt = NULL;
	do{
		swapped = 0;
		lPtr = head;
		while (lPtr->next != rPrt){
			if (lPtr->data > lPtr->next->data){
				swap(lPtr, lPtr->next);
				swapped = 1;
			}
			lPtr = lPtr->next;
		}		
		rPrt = lPtr;
	} while (swapped);
}
void swapNodes(struct Node** head_ref, struct Node* currX, struct Node* currY, struct Node* prevY){
    *head_ref = currY;   
    prevY->next = currX;
    struct Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
struct Node* recurSelectionSort(struct Node* head){
    if (head->next == NULL) {
        return head;
    }    
    struct Node* min = head;   
    struct Node* beforeMin = NULL;
    struct Node* ptr;    
    for (ptr = head; ptr->next != NULL; ptr = ptr->next) {        
        if (ptr->next->data < min->data) {
            min = ptr->next;
            beforeMin = ptr;
        }
    }   
    if (min != head) {
        swapNodes(&head, head, min, beforeMin);
    }    
    head->next = recurSelectionSort(head->next);
    return head;
}
void sort(struct Node** head_ref){    
    if ((*head_ref) == NULL) {
        return;
    }   
    *head_ref = recurSelectionSort(*head_ref);
}
void push(struct Node** head_ref, int new_data){   
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));    
    new_node->data = new_data;   
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node* head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source, Node** frontRef, Node** backRef);
void mergeSort(Node** headRef){
    Node* head = *headRef;
    Node* a;
    Node* b;   
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
    FrontBackSplit(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *headRef = SortedMerge(a, b);
}
Node* SortedMerge(Node* a, Node* b){
    Node* result = NULL;
    if (a == NULL) {
        return (b);
    }
    else if (b == NULL) {
        return (a);
    }
    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return (result);
}


void FrontBackSplit(Node* source, Node** frontRef, Node** backRef){
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->next;    
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}
void printList(Node* node){
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
void push(Node** head_ref, int new_data){   
    Node* newnode = new Node();   
    newnode->data = new_data;    
    newnode->next = (*head_ref);   
    (*head_ref) = newnode;
}