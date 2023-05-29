#include "b32.h"
using namespace std;
void addArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void addRear(int q[], int ele, int& n, int x) { //n=phan tu cuoi, x=kich thuoc mang, ele la` element: phan tu.
    if (n == x) {            
        cout << "OVERFLOW!" << endl;
    }
    else {
        q[n] = ele;    
        n++;
    }
}
void removeFront(int q[], int& a, int n) { //front=a: chi so phan tu se bi xoa.
    if (a == n) {          
        cout << "UNDERFLOW" << endl;
    }
    else {
        q[a] = 0;        
        a++;
    }
}
char chooseFront(int q[], int a) {
    return q[a];
}
int sizeOfQueue(int a, int n) {
    return (n - a);
}
bool queueEmpty(int a, int n) {
    return (a - n);
}