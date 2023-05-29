#ifndef _B44_2LINKEDLIST_
#define _B44_2LINKEDLIST_
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <random>
using namespace std;
struct node {
    int data;
    struct node* previous;
    struct node* next;
};
struct node* head, * tail = NULL;
void insertNode(int data);
void insertionSort();
void print();
//Em tham khao tu cac clip day hoc DSA tu cac truong Dai hoc o An Do tren youtube.
#endif