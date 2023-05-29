#ifndef _B2_
#define _B2_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <random>
using namespace std;
void nhapMang(int a[], int& n);
void xuatMang(int a[], int n);
void swap(int* p, int* q);
int partition(int a[], int low, int upp);
void quickSortDescendingOrder(int a[], int low, int upp);
int binarySearchFirst(int a[], int left, int right, int n);
#endif
