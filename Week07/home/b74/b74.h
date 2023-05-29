#ifndef _B74_
#define _B74_
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
struct Node{
    int key;
    struct Node* left, * right;
};
Node* newNode(int n);
bool foundPath(Node* root, vector<int>& path, int n);
int foundLCA(Node* root, int m, int n);

#endif