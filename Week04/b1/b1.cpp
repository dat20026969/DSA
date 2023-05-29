#include "b1.h"
void nhapMang(int a[], int& n){
	srand(time(NULL));
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	if (n > 0){
		for (int i = 0; i < n; i++){
			a[i] = rand() % 100;
			a[i] = a[i - 1] + rand() % 100;
		}
	}
}
void xuatMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
void swap(int* p, int* q){
    int tempo = *q;
    *q = *p;
    *p = tempo;
}
int partition(int a[], int low, int upp){
    int i = (low - 1);  
    for (int j = low; j < upp; j++){
        if (a[j] > a[upp]){
            i++; 
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[upp]);
    return (i + 1);
}
void quickSortDescendingOrder(int a[], int low, int upp){
    if (low < upp){
        int pivot = partition(a, low, upp);
        quickSortDescendingOrder(a, low, pivot - 1);
        quickSortDescendingOrder(a, pivot + 1, upp);
    }
}
void mergeGiamDan(int a[], int low, int mid, int upp){
    int i, j, k;
    int left[mid - low + 1];
    int right[upp - mid];
    i = 0;
    j = 0;
    k = low;
    for (i = 0; i < mid - low + 1; i++) {
        left[i] = a[low + i];
    }
    for (j = 0; j < upp - mid; j++) {
        right[j] = a[mid + 1 + j];
    }

    for (k = low; i < mid - low + 1 && j < upp - mid; k++){
        if (left[i] > right[j]) {
            a[k] = left[i++];
        }
        else {
            a[k] = right[j++];
        }
    }
    while (i < mid - low + 1) {
        a[k++] = left[i++];
    }
    while (j < upp - mid) {
        a[k++] = right[j++];
    }
}
void mergeSortDescendingorder(int a[], int low, int upp){
    if (low >= upp) {
        return;
    }
    mergeSortDescendingorder(a, low, (low + upp) / 2);
    mergeSortDescendingorder(a, ((low + upp) / 2) + 1, upp);
    mergeGiamDan(a, low, (low + upp) / 2, upp);
}