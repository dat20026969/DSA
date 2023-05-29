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
typedef family* link;
typedef int item;
struct family {
	item id;
	family* parent;
	family* left;
	family* right;
};
typedef family* Tree;
void readFile(link& root, int& n);
link newNode(link p, item data);
void fatalError(const char* msg);
void preOrder(Tree Tr);
void inOrder(Tree Tr);
void postOrder(Tree Tr);
void insertNullTree(link& root, link parent, link left, link right);
void insertTree(link& root, link parent, link left, link right);
void findAndInsert(link& root, link parent, link left, link right);

link createBinTree(int numofNodes);

#endif