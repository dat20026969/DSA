#include "b3.h"
void nhapMang(int a[], int& n) {
    cout << "Nhap so luong phan tu n : ";
    cin >> n;
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }
}
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
void swap(int* p, int* q) {
    int tempo = *q;
    *q = *p;
    *p = tempo;
}
int partition1(int a[], int low, int upp) {
    int i = (low - 1);
    for (int j = low; j < upp; j++) {
        if (a[j] > a[upp]) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[upp]);
    return (i + 1);
}
void quickSortDescendingOrder(int a[], int low, int upp) {
    if (low < upp) {
        int pivot = partition1(a, low, upp);
        quickSortDescendingOrder(a, low, pivot - 1);
        quickSortDescendingOrder(a, pivot + 1, upp);
    }
}
int partition2(int a[], int low, int upp) {
    int i = (low - 1);
    for (int j = low; j < upp; j++) {
        if (a[j] <= a[upp]) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[upp]);
    return (i + 1);
}
void quickSortIncreasingOrder(int a[], int low, int upp) {
    if (low < upp) {
        int pivot = partition2(a, low, upp);
        quickSortIncreasingOrder(a, low, pivot - 1);
        quickSortIncreasingOrder(a, pivot + 1, upp);
    }
}
void gopHaiMang(int a[], int n, int b[], int m, int c[], int& p){
    p = n + m;
    for (int i = 0; i < p; i++){
        if (i < n) {
            c[i] = a[i];
        }
        else c[i] = b[i - n];
    }

}

