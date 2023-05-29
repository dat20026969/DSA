#include "b41.h"

void Init(Stack& s) {
	s.head = s.tail = NULL;
}
bool isEmpty(Stack s) {
	if (s.head == NULL) {
		return true;
	}
	return false;
}
Node* createNode(int x) {
	Node* p = new Node;
	if (p == NULL) {
		exit(1);
	}
	p->data = x;
	p->next = NULL;
	return p;
}
void Push(Stack& s, int x) {
	Node* p = createNode(x);
	if (isEmpty(s)) {
		s.head = s.tail = p;
	}
	else {
		p->next = s.head;
		s.head = p;
	}
}
int Pop(Stack& s){
	if (!isEmpty(s)) {
		Node* p = s.head; 
		s.head = s.head->next;
		return p->data;
		delete p;
	}
	return 0;
}
void xuat(Stack s) {
	if (!isEmpty(s)) {
		Node* p = s.head;
		while (p != NULL) {
			cout << " " << p->data;
			p = p->next;
		}
	}
}
void nhap(Stack& s) {
	int n;
	cout << "Nhap so luong ptu ban dau: " << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		Push(s, i);
	}
}
