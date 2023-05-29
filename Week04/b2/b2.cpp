#include "b2.h"
void nhapMang(int a[], int& n) {
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	if (n > 0) {
        for (int i = 0; i < n;i++){
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
int partition(int a[], int low, int upp) {
    int i = (low - 1);
    for (int j = low; j < upp; j++) {
        if (a[j]> a[upp]) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[upp]);
    return (i + 1);
}
void quickSortDescendingOrder(int a[], int low, int upp) {
    if (low < upp) {
        int pivot = partition(a, low, upp);
        quickSortDescendingOrder(a, low, pivot - 1);
        quickSortDescendingOrder(a, pivot + 1, upp);
    }
}
int binarySearchFirst(int a[], int left, int right, int n){
    quickSortDescendingOrder(a, left, right);
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if ((mid == left || n > a[mid - 1]) && a[mid] == n) {
            return mid;
        }
        else if (n> a[mid]) {
            return binarySearchFirst(a, (mid + 1), right, n);
        }
        else {
            return binarySearchFirst(a, left, (mid - 1), n);
        }
    }
    return -1;
}