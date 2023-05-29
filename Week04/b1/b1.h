#ifndef _B1_
#define _B1_
#include <iostream>
#include <stdio.h>
#include <random>
#include <fstream>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int& n);
void xuatMang(int a[], int n);
void swap(int* p, int* q);
int partition(int a[], int low, int upp);
void quickSortDescendingOrder(int a[], int low, int upp);
void mergeGiamDan(int a[], int low, int mid, int upp);
void mergeSortDescendingOrder(int arr[], int low, int upp);
#endif