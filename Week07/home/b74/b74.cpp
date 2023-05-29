#include "b74.h"
Node* newNode(int n){
    Node* temp = new Node;
    temp->key = n;
    temp->left = temp->right = NULL;
    return temp;
}
bool findPath(Node* root, vector<int>& path, int n){
  
    if (root == NULL) {
        return false;
    }
    path.push_back(root->key);
    if (root->key == n) {
        return true;
    }
    if ((root->left && findPath(root->left, path, n)) || (root->right && findPath(root->right, path, n))) {
        return true;
    }
    path.pop_back();
    return false;
}
int findLCA(Node* root, int m, int n){
    vector<int> path1, path2;
    if (!findPath(root, path1, m) || !findPath(root, path2, n)) {
        return -1;
    }
    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++) {
        if (path1[i] != path2[i]) {
            break;
        }
    }
    return path1[i - 1];
}