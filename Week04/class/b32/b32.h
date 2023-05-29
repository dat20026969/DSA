#ifndef _STACK_
#define _STACK_
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
using namespace std;
void addArray(int a[], int n);
void addRear(int q[], int ele, int& n, int x);
void removeFront(int q[], int& a, int n);
char chooseFront(int q[], int a);
int sizeOfQueue(int a, int n);
bool queueEmpty(int a, int n);
#endif