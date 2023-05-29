#include "b72.h"
void init(linked root) {
	root = nullptr;
}
int height(Node* h) {
	if (h == nullptr) {
		return 0;
	}
	return 1 + max(height(h->left), height(h->right));
}
int maximum(int a, int b) {
	return(a > b) ? a : b;
}
void inserted(linked& root, int giaTri) {
	if (root == nullptr) {
		root = new Node(giaTri);
	}
	else if (giaTri > root->jikey) {
		inserted(root->right, giaTri);
	}
	else {
		inserted(root->left, giaTri);
	}
}
void deleteTree(linked& root)
{
	if (root == nullptr) {
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}
void delete1(linked& root) {
	deleteTree(root);
	root = nullptr;
}
bool checkAVL(linked root) {
	int left;
	int right;
	if (root == nullptr) {
		return 1;
	}
	left = height(root->left);
	right = height(root->right);
	if (abs(left - right) <= 1 && checkAVL(root->right) && checkAVL(root->left)) {
		return 1;
	}
	return 0;
}
void readFile(linked& root) {
	ifstream inFile;
	inFile.open("input.txt");
	int n;
	inFile >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			int t;
			inFile >> t;
			inserted(root, t);
		}
		if (checkAVL(root) == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO!" << endl;
		}
		delete1(root);
	}
}
void printLNR(linked root){
	if (root->left != nullptr) {
		printLNR(root->left);
	}
	cout << root->jikey << " ";
	if (root->right != nullptr) {
		printLNR(root->right);
	}
}