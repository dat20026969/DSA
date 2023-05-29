#ifndef _B41_
#define _B41_
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <map>
#include <set>
#include <random>
#include <string>
#include <list>
#include <iterator>
using namespace std;
struct Node {
	int data;
	Node* next;
};
struct Stack {
	Node* head;
	Node* tail;
};
void Init(Stack& s);
bool isEmpty(Stack s);
Node* createNode(int x);
void Push(Stack& s, int x);
int Pop(Stack& s);
void xuat(Stack s);
void nhap(Stack& s);
#endif