#ifndef _STACK_
#define _STACK_
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <map>
#include <set>
#include <random>
#include <vector>
using namespace std;
class Stack{
public:
    int top;
    unsigned n;
    char* array;
};
Stack* stackCreator(unsigned n);
int fullStack(Stack* stack);
void pushStack(Stack* stack, char x);
char popStack(Stack* stack);
void daoNguocStack(char a[]);



#endif

