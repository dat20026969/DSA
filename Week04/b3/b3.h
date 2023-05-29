#ifndef _B3_
#define _B3_
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
using namespace std;
void nhapMang(int a[], int& n);
void xuatMang(int a[], int n);
void swap(int* p, int* q);
int partition1(int a[], int low, int upp);
void quickSortDescendingOrder(int a[], int low, int upp);
int partition2(int a[], int low, int upp);
void quickSortIncreasingOrder(int a[], int low, int upp);
void gopHaiMang(int a[], int n, int b[], int m, int c[], int& p);
#endif