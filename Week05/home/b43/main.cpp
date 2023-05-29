#include "b43.h"
int main() {
	Node* head = new Node(2);
	head->next = new Node(1);
	head->next->next = new Node(4);
	head->next->next->next = new Node(3);
	head->next->next->next->next = new Node(6);
	head->next->next->next->next->next = new Node(5);
	cout << "The original list = " << endl;
	printList(head);
	bubbleSort(head);
	cout << "Sau khi sort xong, ket qua la:  " << endl;
	printList(head);
	/*-----------------------------------------------------------*/
	LinkedlistIS list;
	list.head = NULL;
	list.push(5);
	list.push(20);
	list.push(4);
	list.push(3);
	list.push(30);
	cout << "Truoc khi sort, linked list co ket qua la: " << endl;
	list.printlist(list.head);
	cout << endl;
	list.insertionSort(list.head);
	cout << "Ket qua sau khi InsertionSort : " << endl;
	list.printlist(list.head);
	/*-----------------------------------------------------------*/
	Node* res = NULL;
	Node* a = NULL;	
	push(&a, 15);
	push(&a, 10);
	push(&a, 5);
	push(&a, 20);
	push(&a, 3);
	push(&a, 2);	
	mergeSort(&a);
	cout << "Merge Sorted Linked List sau khi sap xep la: \n";
	printList(a);
	/*-----------------------------------------------------------*/

	return 0;
}