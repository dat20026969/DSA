#ifndef _B1_
#define _B1_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <random>
#include <stack>
#include <queue>
using namespace std;
class AVLNode{
public:
    int k; //k:key.
    AVLNode* hleft;
    AVLNode* hright;
    int h; //h:height.
};
int max(int a, int b);
int height(AVLNode* n);
AVLNode* newNode(int k);
AVLNode* rightRotate(AVLNode* y);
AVLNode* leftRotate(AVLNode* x);
int canBang(AVLNode* n);
AVLNode* insert(AVLNode* node, int k);
AVLNode* minValueNode(AVLNode* node);
AVLNode* deleteNode(AVLNode* root, int k);
void preOrder(AVLNode* root);
#endif