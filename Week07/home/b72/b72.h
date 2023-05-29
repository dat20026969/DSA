#ifndef _B72_
#define _B72_
#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
typedef int Key;
const Key nulljiKey = -1;
struct Node {
	Key jikey;
	Node* left;
	Node* right;
	Node(Key jikey) {
		this->jikey = jikey;
		this->left = nullptr;
		this->right = nullptr;
	}
};
typedef Node* linked;
void initiate(linked root);
int height(Node* h);
int maximum(int a, int b);
void inserted(linked& root, int giaTri);
void deleteTree(linked& root);
void delete1(linked& root);
bool checkAVL(linked root);
void readFile(linked& root);
void printLNR(linked root);
#endif