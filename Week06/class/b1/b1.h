#ifndef _B1_CAYDONGHO_
#define _B1_CAYDONGHO_
#define WINDOWS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef int item;
struct family {
	item id;
	family* left;
	family* right;
};
typedef family* Tree;
family* newNode(family* p, item data);
void fatalError(const char* msg);
void preOrder(Tree Tr);
void inOrder(Tree Tr);
void postOrder(Tree Tr);
family* createBinTree(int numofNodes);

#endif