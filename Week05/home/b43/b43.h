#ifndef _B43_SORT_
#define _B43_SORT_
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <random>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
void printList(Node* head);
void swap(Node* node_1, Node* node_2);
void bubbleSort(Node* head);
/*-----------------------------------*/
class LinkedlistIS {
public:
    Node* head;
    Node* sorted;

    void push(int val){
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }   
    void insertionSort(Node* headref){
    
        sorted = NULL;
        Node* current = headref;        
        while (current != NULL) {            
            Node* next = current->next;           
            sortedInsert(current);            
            current = next;
        }        
        head = sorted;
    }   
    void sortedInsert(Node* newnode){
        if (sorted == NULL || sorted->data >= newnode->data) {
            newnode->next = sorted;
            sorted = newnode;
        }
        else {
            Node* current = sorted;           
            while (current->next != NULL
                && current->next->data < newnode->data) {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }    
    void printlist(Node* head){
        while (head != NULL) {
            cout << head->data << " ";
            head = head->next;
        }
    }
};
void printList(Node* head);
void swap(Node* node_1, Node* node_2);
void bubbleSort(Node* head);
void swapNodes(struct Node** head_ref, struct Node* currX, struct Node* currY, struct Node* prevY);
struct Node* recurSelectionSort(struct Node* head);
void sort(struct Node** head_ref);
void push(struct Node** head_ref, int new_data);
void printList(struct Node* head);
Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source, Node** frontRef, Node** backRef);
void mergeSort(Node** headRef);
Node* SortedMerge(Node* a, Node* b);
void FrontBackSplit(Node* source, Node** frontRef, Node** backRef);
void printList(Node* node);
void push(Node** head_ref, int new_data);

#endif