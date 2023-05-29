#include "b2.h"
int main() {
	int a[1000], n, x;
	cout << "Nhap so x de tim vi tri: " << endl;
	cin >> x;
	nhapMang(a, n);
	quickSortDescendingOrder(a, 0, n - 1);
	cout << binarySearchFirst(a, 0, n - 1, x) << endl;
	return 0;
}