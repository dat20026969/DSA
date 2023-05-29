#include "b2.h"
NODE* createNode(int x){
    NODE* p = new NODE();
    p->data = x;
    p->pLeft = p->pRight = NULL;
    return p;
}
void free(NODE* root){
    if (root == NULL) {
        return;
    }
    free(root->pLeft);
    free(root->pRight);
    free(root);
}
int leftOf(const int value, const NODE* root){    
    return value < root->data;    
}
int rightOf(const int value, const NODE* root){
    return value > root->data;
}
int leftMostValue(const NODE* root){
    while (root->pLeft != NULL) {
        root = root->pLeft;
    }
    return root->data;
}
NODE* deleteNode(NODE* root, int value){
    if (root == NULL) {
        return root;
    }
    if (leftOf(value, root)) {
        root->pLeft = deleteNode(root->pLeft, value);
    }
    else if (rightOf(value, root)) {
        root->pRight = deleteNode(root->pRight, value);
    }
    else {
        if (root->pLeft == NULL) {
            NODE* newRoot = root->pRight;
            free(root);
            return newRoot;
        }
        if (root->pRight == NULL) {
            NODE* newRoot = root->pLeft;
            free(root);
            return newRoot;
        }
        root->data = leftMostValue(root->pRight);
        root->pRight = deleteNode(root->pRight, root->data);
    }
    return root;
}
NODE* findInsert(NODE* root, int x){
    if (root == NULL) {
        return NULL;
    }
    NODE* p = root;
    NODE* f = p;
    while (p != NULL) {
        f = p;
        if (p->data > x) {
            p = p->pLeft;
        }
        else {
            p = p->pRight;
        }
    }
    return f;
}
void insertNode(NODE*& root, int x){
    NODE* n = createNode(x);
    if (root == NULL) {
        root = n;
        return;
    }
    else {
        NODE* f = findInsert(root, x);
        if (f != NULL) {
            if (f->data > x) {
                f->pLeft = n;
            }
            else {
                f->pRight = n;
            }
        }
    }
}
void createTree(NODE*& root, int a[], int n){
    for (int i = 0; i < n; i++){
        insertNode(root, a[i]);
    }
}
NODE* searchNode(NODE* root, int x){
    if (root == NULL) {
        return NULL;
    }
    NODE* p = root;
    while (p != NULL) {
        if (p->data == x) {
            return p;
        }
        else if (p->data > x) {
            p = p->pLeft;
        }
        else {
            p = p->pRight;
        }
    }
}
void NLR(NODE* root) {
    if (root != NULL) {
        cout << root->data << " ";
        NLR(root->pLeft);
        NLR(root->pRight);
    }
}
void LRN(NODE* root){
    if (root != NULL) {
        LRN(root->pLeft);
        LRN(root->pRight);
        cout << root->data << " ";
    }
}