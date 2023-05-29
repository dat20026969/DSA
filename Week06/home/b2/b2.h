#ifndef _B2_
#define _B2_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <random>
#include <algorithm>
using namespace std;
typedef Node* link;
typedef int item;
struct Node {
	Node* infor;
	Node* id;
	Node* name;
	Node* day;
	Node* month;
	Node* year;
	Node* birthDay;
	Node* stt;
	Node* left;
	Node* right;
};
void init(link& root);
void insertFirst(link& root, infor inf);
void readFile(link& root, int& n);
void createAndInsert(link& root, int& n);
void print(link root);
int findStudentHCMUS(link root, int id);
void findAndReplace(link root, int id);
void printnLexicographic(link root);
void printGraduatedOrNot(link root);
#endif