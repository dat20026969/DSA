#include "b31.h"
using namespace std;
Stack* stackCreator(unsigned n){
    Stack* stack = new Stack();
    stack->n = n;
    stack->top = -1;
    stack->array = new char[(stack->n * sizeof(char))];
    return stack;
}
int fullStack(Stack* stack){
    return stack->top == stack->n - 1;
}
int emptyStack(Stack* stack){
    return stack->top == -1;
}
void pushStack(Stack* stack, char x){
    if (fullStack(stack))
        return;
    stack->array[++stack->top] = x;
}
char popStack(Stack* stack){
    if (emptyStack(stack))
        return -1;
    return stack->array[stack->top--];
}
void daoNguocStack(char a[]){
    int n = strlen(a);
    Stack* stack = stackCreator(n);   
    int i;
    for (i = 0; i < n; i++) {
        pushStack(stack, a[i]);
    }
    for (i = 0; i < n; i++) {
        a[i] = popStack(stack);
    }
}