#include "b1.h"
void readFile(link& root, int& n) {
	ifstream inFile;
	inFile.open("input.txt");
	if (inFile.is_open()) {
		char Tr;
		inFile >> n;
		string s;
		string childLeft;
		string childRight;
		inFile >> Tr >> s >> Tr >> left >> right;
		childRight.pop_back();
		childRight.pop_back();
		insertNullTree(root, s, left, right);
		while (!inFile.eof()) {
			inFile >> Tr >> s >> Tr >> left >> right;
			right.pop_back();
			right.pop_back();
			findAndInsert(root, s, left, right);
		}
		inFile.close();
	}
}
void fatalError(const char*	msg) {
	cout << msg;
	cout << endl;
	exit(1);
}
link newNode(link p, item data) {
	p = (link)malloc(sizeof(family));
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
void insertNullTree(link& root, link parent, link left, link right) {
	link t = new family;
	link t1 = new family;
	link t2 = new family;
	t->key = parent;
	t1->key = left;
	t1->left = nullptr;
	t1->right = nullptr;
	t2->key = right;
	t2->left = nullptr;
	t2->right = nullptr;
	t->left = t1;
	t->right = t2;
	root = t;
}

void insertTree(link& root, link parent, link left, link right) {
	link t1 = new link;
	link t2 = new link;

	t1->key = left;
	t1->left = nullptr;
	t1->right = nullptr;

	t2->key = right;
	t2->left = nullptr;
	t2->right = nullptr;
	root->left = t1;
	root->right = t2;
}
void findAndInsert(link& root, link parent, link left, link right) {
	if (root != nullptr) {
		if (root->key == parent) {
			insertTree(root, parent, left, right);
		}
		else {
			if (root->left != nullptr) {
				findAndInsert(root->left, parent, left, right);
			}
			if (root->right != nullptr) {
				findAndInsert(root->right, parent, left, right);
			}
		}
	}
}
link createBinTree(int numofNodes) {
	link p;
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
	return 0;
}