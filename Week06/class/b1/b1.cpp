#include "b1.h"
void fatalError(const char*	msg) {
	cout << msg;
	cout << endl;
	exit(1);
}
family* newNode(family* p, item data) {
	p = (family*)malloc(sizeof(family));
	p->id = data;
	p->left = p->right = NULL;
	return p;
}
void preOrder(Tree Tr) {
	if (Tr != NULL) {
		cout << Tr->id;
		preOrder(Tr->left);
		preOrder(Tr->right);
	}
}
void inOrder(Tree Tr) {
	if (Tr != NULL) {
		inOrder(Tr->left);
		cout << Tr->id;
		inOrder(Tr->right);
	}
}
void postOrder(Tree Tr) {
	if (Tr != NULL) {
		postOrder(Tr->left);
		postOrder(Tr->right);
		cout << Tr->id;
	}
}
family* createBinTree(int numofNodes) {
	family* p;
	int nLeft, nRight;
	if (numofNodes == 0) {
		return NULL;
	}
	else {
		nLeft = numofNodes / 2;
		nRight = nLeft - 1;
		p = (family*)malloc(sizeof(family));
		cout << "Node identifier: " << endl;
		cin >> p->id;
		p->left = createBinTree(nLeft);
		p->right = createBinTree(nRight);
	}
}