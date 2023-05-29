#include "b2.h"
int main() {
	NODE* root = NULL;
	int a[] = { 25, 32, 14, 21, 19, 17, 23 };
	int n = 7;
	int k;
	cout << "so ban can xoa: " << endl;
	cin >> k;
	findInsert(root, n);
	createTree(root, a, n);
	deleteNode(root, k);
	NLR(root);
	LRN(root);
	return 0;
}