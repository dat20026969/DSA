#ifndef _B2_
#define _B2_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <random>
#include <iterator>
#include <stack>
#include <queue>
using namespace std;
struct NODE{
    int data;
    NODE* pLeft;
    NODE* pRight;
};
NODE* createNode(int x);
void free(NODE* root);
int leftOf(const int value, const NODE* root);
int rightOf(const int value, const NODE* root);
int leftMostValue(const NODE* root);
NODE* deleteNode(NODE* root, int value);
NODE* findInsert(NODE* root, int x);
void insertNode(NODE*& root, int x);
void createTree(NODE*& root, int a[], int n);
NODE* searchNode(NODE* root, int x);
void NLR(NODE* root);
void LRN(NODE* root);
#endif