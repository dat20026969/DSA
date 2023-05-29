#include "b1.h"
int main() {
    int a[1000], n;
    nhapMang(a, n);
    quickSortDescendingOrder(a, 0, n - 1);
    mergeSortDescendingOrder(a, 0, n - 1);
    xuatMang(a, n);
	return 0;
}