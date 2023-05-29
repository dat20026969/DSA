#include "b73.h"
int main() {
    int n1, n2[1000];
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> n2[i];
    }
    Node* root = NULL;
    root = insertion(root, 10);
    root = insertion(root, 20);
    root = insertion(root, 30);
    root = insertion(root, 40);
    root = insertion(root, 50);
    root = insertion(root, 25);
    check(root, n1, n2);
    checkAtTheSameDepth(root);
	return 0;
}