#include "b73.h"
int heighthen(Node* h) {
	if (h == nullptr) {
		return 0;
	}
	return h->height;
}
int isBalanced(Node* h) {
	if (h == nullptr) {
		return 0;
	}
	return heighthen(h->left) - heighthen(h->right);
}
int maximum(int a, int b) {
	return(a > b) ? a : b;
}
void initiation(link root) {
	root = nullptr;
}
Node* leftRotated(Node* h) {
	Node* p = h->right;
	Node* T2 = p->left;
	p->left = h;
	h->right = T2;
	h->height = maximum(heighthen(h->left), heighthen(h->right)) + 1;
	p->height = maximum(heighthen(p->left), heighthen(p->right)) + 1;
	return p;
}
Node* rightRotated(Node* h) {
	Node* p = h->left;
	Node* T2 = p->right;
	p->right = h;
	h->left = T2;
	h->height = maximum(heighthen(h->left), heighthen(h->right)) + 1;
	p->height = maximum(heighthen(p->left), heighthen(p->right)) + 1;
	return p;
}
Node* insertion(Node* node, int value) {
	if (node == nullptr) {
		return new Node(value);
	}
	else if (value < node->key) {
		node->left = insertion(node->left, value);
	}
	else if (value > node->key) {
		node->right = insertion(node->right, value);
	}
	node->height = 1 + maximum(heighthen(node->left), heighthen(node->right));
	int balance = isBalanced(node);
	if (balance > 1 && value < node->left->key) {
		return rightRotated(node);
	}
	if (balance < -1 && value > node->right->key) {
		return leftRotated(node);
	}
	if (balance > 1 && value > node->left->key){
		node->left = leftRotated(node->left);
		return rightRotated(node);
	}
	if (balance < -1 && value < node->right->key){
		node->right = rightRotated(node->right);
		return leftRotated(node);
	}
	return node;
}
bool check(Node* root, int level, int* leaf) {
	if (root == nullptr) {
		return true;
	}
	if (root->left == nullptr && root->right == nullptr) {
		if (*leaf == 0) {
			*leaf= level;
			return true;
		}
		return level = *leaf;
	}
	return check(root->left, level + 1, leaf) && check(root->right, level + 1, leaf);
}
bool checkAtTheSameDepth(Node* root) {
	int level = 0;
	int leafLevel = 0;
	return check(root, level, &leafLevel);
}