#ifndef _B73_
#define _B73_
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

class Node{
public:
    int key;
    Node* left;
    Node* right;
    int height;
    int value;
};
typedef Node* link;
int heighthen(Node* h);
int isBalanced(Node* h);
int maximum(int a, int b);
void initiation(link root);
Node* leftRotated(Node* h);
Node* rightRotated(Node* h);
Node* insertion(Node* node, int value);
bool check(Node* root, int level, int* leafLevel);
bool checkAtTheSameDepth(Node* root);

#endif
