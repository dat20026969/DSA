#ifndef _B1_
#define _B1_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <random>
#include <iterator>
#include <stack>
#include <queue>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

typedef struct tagSINHVIEN {
	int MSSV;
	char TenSV[100];
	float DTB;
} SINHVIEN;
struct node1 {
	SINHVIEN* data;
	struct  node1* link;
};
typedef struct tag {
	SINHVIEN SV;
	struct tagNODE* pNext;
} NODE, * PNODE;
PNODE pHead, pTail;
struct singleList{
	node1* pHead;
	node1* pTail;
};
void inputStudent(SINHVIEN* sv);
void initial(PNODE*& list);
void createList(PNODE& n);
node1* createNode(SINHVIEN* sv);
void add1TailToStudent(PNODE& l, PNODE* p);
void insertLast(singleList*& list, SINHVIEN* sv);
void show(SINHVIEN l);
void showNode(node1* k);
void sortList(singleList*& list);
void deleteSinhVien(SINHVIEN& l);

#endif