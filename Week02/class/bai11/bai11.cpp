#include <iostream>
#include <iomanip>
#include <algorithm>
#include "bai11.h"
using namespace std;
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu: " << endl;
        cin >> a[i];
    }
}
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}
void insertionSort(int a[], int n){
    int j, k;
    for (int i = 1; i < n; i++){
        k = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > k){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
    xuatMang(a, n);
}
void heapify(int a[], int n, int i){
    int max = i; 
    int m = 2 * i + 1; 
    int p = 2 * i + 2;    
    if (m < n && a[m] > a[max]) {
        max = m;
    }    
    if (p < n && a[p] > a[max]) {
        max = p;
    }    
    if (max != i){
        swap(a[i], a[max]);       
        heapify(a, n, max);
    }
}
void heapSort(int a[], int n){    
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }   
    for (int i = n - 1; i > 0; i--){       
        swap(a[0], a[i]);       
        heapify(a, i, 0);
    }
    xuatMang(a, n);
}
void merge(int a[], int b, int c, int d) { //vitridautien=b, cuoicung=d, chinhgiua=c;
    int *temp = new int [d+1];
    int b1, d1, b2, d2;
    int dex = b;
    b1 = b;
    d1 = c;
    b2 = c + 1;
    d2 = d;
    while ((b1 <= d1) && (b2 <= d2)) {
        if (a[b1] < a[b2]) {
            temp[dex] = a[b1];
            dex++;
            b1++;
        }
        else {
            temp[dex] = a[b2];
            dex++;
            d2++;
        }
    }
    if (b2 > d2) {
        while (b1 <= d1) {
            temp[dex] = a[b1];
            dex++;
            b1++;
        }
    }
    if (b1 > d1) {
        while (b2<= d2) {
            temp[dex] = a[b2];
            dex++;
            b2++;
        }
    }
    for (int i = b; i <= d; i++) {
        a[i] = temp[i - b];
    }
    return;
}
void mergeSort(int a[], int b, int d) { //vitridautien=b;cuoicung=d;chinhgiua=c;
    if (b < d) {
        int c = int((b + d) / 2);
        mergeSort(a, b, c);
        mergeSort(a, c + 1, d);
        merge(a, b, c, d);
    }
}
int partition(int a[], int b, int c){ //left =m;right=n
    int piv = a[c];    
    int m = b;
    int n = c - 1;
    while (true) {
        while (m <= n && a[m] < piv) {
            m++;
        }
        while (m <= n && a[n] > piv) {
            n--;
        }
        if (m >= n) {
            break;
        }
        swap(a[m], a[n]);
        m++;
        n--;
    }
    swap(a[m], a[n]);
    return m;
}
void quickSort(int a[], int b, int c){
    if (b < c){        
        int location = partition(a, b, c);        
        quickSort(a, b, location - 1);
        quickSort(a, location + 1, c);
    }
}