#include "b1.h"
int main() {
    AVLNode* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);   
    cout << "Cay sau khi dc sap xep la: " << endl;
    preOrder(root);
    root = deleteNode(root, 10);
    cout << "Sau khi xoa cay 10, cay moi se la: " << endl;
    preOrder(root);
    return 0;
}
