#include "b72.h"
int main() {
    Node* root = nullptr;
    root = inserted(root, 10);
    root = inserted(root, 20);
    root = inserted(root, 30);
    root = inserted(root, 40);
    root = inserted(root, 50);
    root = inserted(root, 25);
    deleteTree(root);
    delete1(root);
    readFile(root);
    printLNR(root);
	return 0;
}