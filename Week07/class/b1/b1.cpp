#include "b1.h"
int height(AVLNode* n){
    if (n == NULL) {
        return 0;
    }
    return n->h;
}
int max(int a, int b){
    return (a > b) ? a : b;
}
AVLNode* newNode(int k){
    AVLNode* node = new AVLNode();
    node->k = k;
    node->hleft = NULL;
    node->hright = NULL;
    node->h = 1;
    return(node);
}
AVLNode* rightRotate(AVLNode* y){
    AVLNode* x = y->hleft;
    AVLNode* T2 = x->hright;   
    x->hright = y;
    y->hleft = T2;
    y->h = max(height(y->hleft), height(y->hright)) + 1;
    x->h = max(height(x->hleft), height(x->hright)) + 1;
    return x;
}
AVLNode* leftRotate(AVLNode* x){
    AVLNode* y = x->hright;
    AVLNode* T2 = y->hleft;
    y->hleft = x;
    x->hright = T2;
    x->h = max(height(x->hleft), height(x->hright)) + 1;
    y->h = max(height(y->hleft), height(y->hright)) + 1;
    return y;
}
int canBang(AVLNode* n){
    if (n == NULL) {
        return 0;
    }
    return height(n->hleft) - height(n->hright);
}
AVLNode* insert(AVLNode* node, int k){
    if (node == NULL) {
        return(newNode(k));
    }
    if (k < node->k) {
        node->hleft = insert(node->hleft, k);
    }
    else if (k > node->k) {
        node->hright = insert(node->hright, k);
    }
    else {
        return node;
    }   
    node->h = 1 + max(height(node->hleft), height(node->hright));  
    int balance = canBang(node);
    if (balance > 1 && k < node->hleft->k) {
        return rightRotate(node);
    }
    if (balance < -1 && k > node->hright->k) {
        return leftRotate(node);
    }
    if (balance > 1 && k > node->hleft->k) {
        node->hleft = leftRotate(node->hleft);
        return rightRotate(node);
    }
    if (balance < -1 && k < node->hright->k) {
        node->hright = rightRotate(node->hright);
        return leftRotate(node);
    }
    return node;
}
AVLNode* minValueNode(AVLNode* node){
    AVLNode* curr = node;
    while (curr->hleft != NULL) {
        curr = curr->hleft;
    }
    return curr;
}
AVLNode* deleteNode(AVLNode* root, int k){
    if (root == NULL) {
        return root;
    }
    if (k < root->k) {
        root->hleft = deleteNode(root->hleft, k);
        root->hright = deleteNode(root->hright, k);
    }
    else {
        if ((root->hleft == NULL) || (root->hright == NULL)) {
            AVLNode* temp = root->hleft ? root->hleft : root->hright;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
            else {
                *root = *temp;
            }
            free(temp);
        }
        else {            
            AVLNode* temp = minValueNode(root->hright);
            root->k = temp->k;          
            root->hright = deleteNode(root->hright, temp->k);
        }
    }    
    if (root == NULL) {
        return root;
    }
    root->h = 1 + max(height(root->hleft), height(root->hright));
    int balance = canBang(root);
    if (balance > 1 && canBang(root->hleft) >= 0) {
        return rightRotate(root);
    }
    if (balance > 1 && canBang(root->hleft) < 0){
        root->hleft = leftRotate(root->hleft);
        return rightRotate(root);
    }
    if (balance < -1 && canBang(root->hright) <= 0) {
        return leftRotate(root);
    }
    if (balance < -1 && canBang(root->hright) > 0){
        root->hright = rightRotate(root->hright);
        return leftRotate(root);
    }
    return root;
}
void preOrder(AVLNode* root){
    if (root != NULL) {
        cout << root->k << " ";
        preOrder(root->hleft);
        preOrder(root->hright);
    }
}