#include "b21.h"
using namespace std;
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
int linearSearch(int a[], int n, int x){
    for (int i = 0; i < n; i++)
        if (a[i] == x) {
            return i;
        }
    return -1;
}
int sentinelLinearSearch(int a[], int key, int size){
    int cuoi = a[size - 1];
    a[size - 1] = key;
    int i = 0;
    while (a[i] != key) {
        i++;
    } 
    a[size - 1] = cuoi;
    if ((i < size - 1) || (a[size - 1] == key)) {
        return i;
    }
    else {
        return -1;
    }
}
int binarySearch(const std::vector<int>& a, int trai, int phai, int n) {
    if (trai <= phai) {
        int giua = trai + (phai - trai) / 2;
        if (n == a[giua]) {
            return giua;
        }
        if (a[giua] > n) {
            return binarySearch(a, trai, giua - 1, n);
        }
        return binarySearch(a, giua + 1, phai, n);
    }
    return -1;
}