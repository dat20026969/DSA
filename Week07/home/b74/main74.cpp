#include "b74.h"
int main() {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << foundLCA(root, 4, 5);
    cout << "nLCA(4, 6) = " << foundLCA(root, 4, 6);
    cout << "nLCA(3, 4) = " << foundLCA(root, 3, 4);
    cout << "nLCA(2, 4) = " << foundLCA(root, 2, 4);
    return 0;
}