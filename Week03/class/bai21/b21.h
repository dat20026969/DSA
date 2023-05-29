#ifndef _BAI21_H_
#define _BAI21_H_
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <random>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <fstream>
using namespace std;
void nhapMang(int a[], int n);
int linearSearch(int a[], int n, int x);
int sentinelLinearSearch(int a[], int key, int size);
int binarySearch(const std::vector<int>& a, int trai, int phai, int n);
#endif